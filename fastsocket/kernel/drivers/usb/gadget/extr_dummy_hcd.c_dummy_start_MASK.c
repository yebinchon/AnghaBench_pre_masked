
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int otg_port; } ;
struct usb_hcd {int uses_new_polling; TYPE_1__ self; int state; int power_budget; } ;
struct TYPE_4__ {unsigned long data; int function; } ;
struct dummy {int urbp_list; int rh_state; TYPE_2__ timer; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct dummy*) ;
 int VAR_4 ;
 struct dummy* FUNC_3 (struct usb_hcd*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6 (struct usb_hcd *VAR_5)
{
 struct dummy *VAR_6;

 VAR_6 = FUNC_3 (VAR_5);






 FUNC_5 (&VAR_6->lock);
 FUNC_4 (&VAR_6->timer);
 VAR_6->timer.function = VAR_4;
 VAR_6->timer.data = (unsigned long) VAR_6;
 VAR_6->rh_state = VAR_0;

 FUNC_0 (&VAR_6->urbp_list);

 VAR_5->power_budget = VAR_2;
 VAR_5->state = VAR_1;
 VAR_5->uses_new_polling = 1;






 return FUNC_1 (FUNC_2(VAR_6), &VAR_3);
}
