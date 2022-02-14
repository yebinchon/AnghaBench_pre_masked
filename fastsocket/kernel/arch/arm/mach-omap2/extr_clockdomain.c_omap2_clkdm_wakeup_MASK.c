
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_1__* ptr; } ;
struct clockdomain {int flags; TYPE_2__ pwrdm; int clktrctrl_mask; int name; } ;
struct TYPE_3__ {int prcm_offs; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int,int ,int ) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (char*,int ) ;

int FUNC_7(struct clockdomain *VAR_6)
{
 if (!VAR_6)
  return -VAR_2;

 if (!(VAR_6->flags & VAR_0)) {
  FUNC_6("clockdomain: %s does not support forcing "
    "wakeup via software\n", VAR_6->name);
  return -VAR_2;
 }

 FUNC_6("clockdomain: forcing wakeup on %s\n", VAR_6->name);

 if (FUNC_4()) {

  FUNC_2(VAR_3,
          VAR_6->pwrdm.ptr->prcm_offs, VAR_5);

 } else if (FUNC_5()) {

  u32 VAR_7 = (VAR_4 <<
    FUNC_1(VAR_6->clktrctrl_mask));

  FUNC_3(VAR_6->clktrctrl_mask, VAR_7,
        VAR_6->pwrdm.ptr->prcm_offs, VAR_1);

 } else {
  FUNC_0();
 };

 return 0;
}
