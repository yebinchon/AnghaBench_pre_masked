
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {int state; } ;
struct oxu_hcd {TYPE_1__* regs; int lock; scalar_t__ async; int watchdog; } ;
struct TYPE_2__ {int status; int configured_flag; int intr_enable; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct oxu_hcd*,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct oxu_hcd*) ;
 int FUNC_4 (struct oxu_hcd*,int ) ;
 int FUNC_5 (struct oxu_hcd*) ;
 int FUNC_6 (struct oxu_hcd*) ;
 int FUNC_7 (struct oxu_hcd*) ;
 struct oxu_hcd* FUNC_8 (struct usb_hcd*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int *) ;

__attribute__((used)) static void FUNC_13(struct usb_hcd *VAR_0)
{
 struct oxu_hcd *VAR_1 = FUNC_8(VAR_0);


 FUNC_4(VAR_1, 0);


 FUNC_2(&VAR_1->watchdog);

 FUNC_10(&VAR_1->lock);
 if (FUNC_0(VAR_0->state))
  FUNC_5(VAR_1);

 FUNC_6(VAR_1);
 FUNC_12(0, &VAR_1->regs->intr_enable);
 FUNC_11(&VAR_1->lock);


 FUNC_12(0, &VAR_1->regs->configured_flag);


 FUNC_10(&VAR_1->lock);
 if (VAR_1->async)
  FUNC_7(VAR_1);
 FUNC_11(&VAR_1->lock);
 FUNC_3(VAR_1);

 FUNC_1(VAR_1, "oxu_stop completed", FUNC_9(&VAR_1->regs->status));
}
