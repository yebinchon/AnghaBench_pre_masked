
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usb_ctrlrequest {int bRequest; int wValue; int wLength; int wIndex; } ;
struct usb_configuration {struct usb_composite_dev* cdev; } ;
struct usb_composite_dev {int dummy; } ;


 int FUNC_0 (struct usb_composite_dev*,char*,int ,int ,int ,int ) ;
 int VAR_0 ;





 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct usb_configuration *VAR_1,
  const struct usb_ctrlrequest *VAR_2)
{
 struct usb_composite_dev *VAR_3 = VAR_1->cdev;
 int VAR_4 = -VAR_0;
 u16 VAR_5 = FUNC_1(VAR_2->wIndex);
 u16 VAR_6 = FUNC_1(VAR_2->wLength);
 u16 VAR_7 = FUNC_1(VAR_2->wValue);

 FUNC_0(VAR_3, "bRequest 0x%x, w_value 0x%04x, len %d, endpoint %d\n",
   VAR_2->bRequest, VAR_7, VAR_6, VAR_5);

 switch (VAR_2->bRequest) {
 case 132:
  VAR_4 = 0;
  break;

 case 129:
  break;

 case 131:
  break;

 case 128:
  break;

 case 130:
  break;

 default:
  break;
 }

 return VAR_4;
}
