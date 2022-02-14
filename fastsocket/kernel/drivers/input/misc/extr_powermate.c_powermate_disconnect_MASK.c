
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct powermate_device {int config; int irq; int input; scalar_t__ requires_update; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (struct powermate_device*) ;
 int FUNC_3 (int ,struct powermate_device*) ;
 int FUNC_4 (int ) ;
 struct powermate_device* FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_8(struct usb_interface *VAR_0)
{
 struct powermate_device *VAR_1 = FUNC_5 (VAR_0);

 FUNC_7(VAR_0, ((void*)0));
 if (VAR_1) {
  VAR_1->requires_update = 0;
  FUNC_6(VAR_1->irq);
  FUNC_0(VAR_1->input);
  FUNC_4(VAR_1->irq);
  FUNC_4(VAR_1->config);
  FUNC_3(FUNC_1(VAR_0), VAR_1);

  FUNC_2(VAR_1);
 }
}
