
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_endpoint_descriptor {int dummy; } ;
struct usb_host_endpoint {struct usb_endpoint_descriptor desc; } ;
struct usb_device {int dummy; } ;
struct stub_device {TYPE_1__* interface; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,int) ;
 struct usb_host_endpoint* FUNC_2 (struct usb_device*,int) ;
 struct usb_device* FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_5 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_6 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_7 (struct usb_endpoint_descriptor*) ;
 int FUNC_8 (struct usb_device*,int) ;
 int FUNC_9 (struct usb_device*,int) ;
 int FUNC_10 (struct usb_device*,int) ;
 int FUNC_11 (struct usb_device*,int) ;
 int FUNC_12 (struct usb_device*,int) ;
 int FUNC_13 (struct usb_device*,int) ;
 int FUNC_14 (struct usb_device*,int) ;
 int FUNC_15 (struct usb_device*,int) ;

__attribute__((used)) static int FUNC_16(struct stub_device *VAR_1, int VAR_2, int VAR_3)
{
 struct usb_device *VAR_4 = FUNC_3(VAR_1->interface);
 struct usb_host_endpoint *VAR_5;
 struct usb_endpoint_descriptor *VAR_6 = ((void*)0);

 VAR_5 = FUNC_2(VAR_4, VAR_2);
 if (!VAR_5) {
  FUNC_1(&VAR_1->interface->dev, "no such endpoint?, %d\n",
   VAR_2);
  FUNC_0();
 }

 VAR_6 = &VAR_5->desc;
 if (FUNC_5(VAR_6)) {
  if (VAR_3 == VAR_0)
   return FUNC_13(VAR_4, VAR_2);
  else
   return FUNC_9(VAR_4, VAR_2);
 }

 if (FUNC_4(VAR_6)) {
  if (VAR_3 == VAR_0)
   return FUNC_12(VAR_4, VAR_2);
  else
   return FUNC_8(VAR_4, VAR_2);
 }

 if (FUNC_6(VAR_6)) {
  if (VAR_3 == VAR_0)
   return FUNC_14(VAR_4, VAR_2);
  else
   return FUNC_10(VAR_4, VAR_2);
 }

 if (FUNC_7(VAR_6)) {
  if (VAR_3 == VAR_0)
   return FUNC_15(VAR_4, VAR_2);
  else
   return FUNC_11(VAR_4, VAR_2);
 }


 FUNC_1(&VAR_1->interface->dev, "get pipe, epnum %d\n", VAR_2);
 return 0;
}
