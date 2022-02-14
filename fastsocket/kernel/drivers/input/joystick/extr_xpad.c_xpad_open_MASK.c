
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_xpad {scalar_t__ xtype; TYPE_1__* irq_in; int udev; } ;
struct input_dev {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct usb_xpad* FUNC_0 (struct input_dev*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_2(struct input_dev *VAR_3)
{
 struct usb_xpad *VAR_4 = FUNC_0(VAR_3);


 if(VAR_4->xtype == VAR_2)
  return 0;

 VAR_4->irq_in->dev = VAR_4->udev;
 if (FUNC_1(VAR_4->irq_in, VAR_1))
  return -VAR_0;

 return 0;
}
