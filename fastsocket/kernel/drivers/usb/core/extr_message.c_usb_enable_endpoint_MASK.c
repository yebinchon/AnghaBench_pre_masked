
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_host_endpoint {int enabled; int desc; } ;
struct usb_device {struct usb_host_endpoint** ep_in; struct usb_host_endpoint** ep_out; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct usb_device*,struct usb_host_endpoint*) ;

void FUNC_4(struct usb_device *VAR_0, struct usb_host_endpoint *VAR_1,
  bool VAR_2)
{
 int VAR_3 = FUNC_1(&VAR_1->desc);
 int VAR_4 = FUNC_0(&VAR_1->desc);
 int VAR_5 = FUNC_2(&VAR_1->desc);

 if (VAR_2)
  FUNC_3(VAR_0, VAR_1);
 if (VAR_4 || VAR_5)
  VAR_0->ep_out[VAR_3] = VAR_1;
 if (!VAR_4 || VAR_5)
  VAR_0->ep_in[VAR_3] = VAR_1;
 VAR_1->enabled = 1;
}
