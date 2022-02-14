
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_1__* ptr; } ;
struct clockdomain {TYPE_2__ pwrdm; int clktrctrl_mask; } ;
struct TYPE_3__ {int prcm_offs; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int ,int ) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct clockdomain *VAR_5, int VAR_6)
{
 u32 VAR_7;

 if (FUNC_3()) {
  if (VAR_6)
   VAR_7 = VAR_2;
  else
   VAR_7 = VAR_1;
 } else if (FUNC_4()) {
  if (VAR_6)
   VAR_7 = VAR_4;
  else
   VAR_7 = VAR_3;
 } else {
  FUNC_0();
 }

 FUNC_2(VAR_5->clktrctrl_mask,
       VAR_7 << FUNC_1(VAR_5->clktrctrl_mask),
       VAR_5->pwrdm.ptr->prcm_offs, VAR_0);
}
