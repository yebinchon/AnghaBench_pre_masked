
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {int complete; } ;
struct usb_ep {int name; struct gmidi_device* driver_data; } ;
struct gmidi_device {struct usb_ep* out_ep; struct usb_ep* in_ep; } ;
typedef int gfp_t ;


 int FUNC_0 (struct gmidi_device*,char*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (struct gmidi_device*,char*,int ,int) ;
 int VAR_1 ;
 struct usb_request* FUNC_2 (struct usb_ep*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_3 (struct usb_ep*,int *) ;
 int FUNC_4 (struct usb_ep*,struct usb_request*,int ) ;

__attribute__((used)) static int FUNC_5(struct gmidi_device *VAR_7, gfp_t VAR_8)
{
 int VAR_9 = 0;
 struct usb_request *VAR_10;
 struct usb_ep *VAR_11;
 unsigned VAR_12;

 VAR_9 = FUNC_3(VAR_7->in_ep, &VAR_3);
 if (VAR_9) {
  FUNC_1(VAR_7, "can't start %s: %d\n", VAR_7->in_ep->name, VAR_9);
  goto fail;
 }
 VAR_7->in_ep->driver_data = VAR_7;

 VAR_9 = FUNC_3(VAR_7->out_ep, &VAR_4);
 if (VAR_9) {
  FUNC_1(VAR_7, "can't start %s: %d\n", VAR_7->out_ep->name, VAR_9);
  goto fail;
 }
 VAR_7->out_ep->driver_data = VAR_7;


 VAR_11 = VAR_7->out_ep;
 for (VAR_12 = 0; VAR_12 < VAR_6 && VAR_9 == 0; VAR_12++) {
  VAR_10 = FUNC_2(VAR_11, VAR_2);
  if (VAR_10) {
   VAR_10->complete = VAR_5;
   VAR_9 = FUNC_4(VAR_11, VAR_10, VAR_1);
   if (VAR_9) {
    FUNC_0(VAR_7, "%s queue req: %d\n", VAR_11->name, VAR_9);
   }
  } else {
   VAR_9 = -VAR_0;
  }
 }
fail:

 return VAR_9;
}
