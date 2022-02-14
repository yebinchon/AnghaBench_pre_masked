
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct usb_function {TYPE_1__* config; } ;
struct usb_ctrlrequest {int bRequest; int bRequestType; int wLength; int wValue; int wIndex; } ;
struct usb_composite_dev {int dummy; } ;
struct TYPE_2__ {struct usb_composite_dev* cdev; } ;


 int FUNC_0 (struct usb_composite_dev*,char*,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct usb_function *VAR_1, const struct usb_ctrlrequest *VAR_2)
{
 struct usb_composite_dev *VAR_3 = VAR_1->config->cdev;
 int VAR_4 = -VAR_0;
 u16 VAR_5 = FUNC_1(VAR_2->wIndex);
 u16 VAR_6 = FUNC_1(VAR_2->wValue);
 u16 VAR_7 = FUNC_1(VAR_2->wLength);

 FUNC_0(VAR_3, "invalid control req%02x.%02x v%04x i%04x l%d\n",
  VAR_2->bRequestType, VAR_2->bRequest,
  VAR_6, VAR_5, VAR_7);


 return VAR_4;
}
