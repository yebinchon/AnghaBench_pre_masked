
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wacom {int lock; int irq; } ;
struct usb_interface {int dummy; } ;
typedef int pm_message_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct wacom* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct usb_interface *VAR_0, pm_message_t VAR_1)
{
 struct wacom *VAR_2 = FUNC_2(VAR_0);

 FUNC_0(&VAR_2->lock);
 FUNC_3(VAR_2->irq);
 FUNC_1(&VAR_2->lock);

 return 0;
}
