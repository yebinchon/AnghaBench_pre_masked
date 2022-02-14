
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_xpad {scalar_t__ xtype; int irq_in; } ;
struct input_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct usb_xpad* FUNC_0 (struct input_dev*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct usb_xpad*) ;

__attribute__((used)) static void FUNC_3(struct input_dev *VAR_1)
{
 struct usb_xpad *VAR_2 = FUNC_0(VAR_1);

 if(VAR_2->xtype != VAR_0)
  FUNC_1(VAR_2->irq_in);
 FUNC_2(VAR_2);
}
