
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct usb_request {scalar_t__ length; int complete; } ;
struct usb_ep {int dummy; } ;
struct gmidi_in_port {scalar_t__ active; } ;
struct gmidi_device {int in_substream; struct gmidi_in_port in_port; struct usb_ep* in_ep; } ;


 int FUNC_0 (struct gmidi_device*,char*) ;
 int VAR_0 ;
 struct usb_request* FUNC_1 (struct usb_ep*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct usb_ep*,struct usb_request*) ;
 int VAR_2 ;
 int FUNC_3 (struct usb_request*,struct gmidi_in_port*,int ) ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (struct usb_ep*,struct usb_request*,int ) ;

__attribute__((used)) static void FUNC_6(struct gmidi_device *VAR_3, struct usb_request *VAR_4)
{
 struct usb_ep *VAR_5 = VAR_3->in_ep;
 struct gmidi_in_port *VAR_6 = &VAR_3->in_port;

 if (!VAR_5) {
  return;
 }
 if (!VAR_4) {
  VAR_4 = FUNC_1(VAR_5, VAR_1);
 }
 if (!VAR_4) {
  FUNC_0(VAR_3, "gmidi_transmit: alloc_ep_request failed\n");
  return;
 }
 VAR_4->length = 0;
 VAR_4->complete = VAR_2;

 if (VAR_6->active) {
  while (VAR_4->length + 3 < VAR_1) {
   uint8_t VAR_7;
   if (FUNC_4(VAR_3->in_substream, &VAR_7, 1)
    != 1)
   {
    VAR_6->active = 0;
    break;
   }
   FUNC_3(VAR_4, VAR_6, VAR_7);
  }
 }
 if (VAR_4->length > 0) {
  FUNC_5(VAR_5, VAR_4, VAR_0);
 } else {
  FUNC_2(VAR_5, VAR_4);
 }
}
