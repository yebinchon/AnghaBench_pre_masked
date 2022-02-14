
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_1__* ptr; } ;
struct clockdomain {int clktrctrl_mask; TYPE_2__ pwrdm; } ;
struct TYPE_3__ {int prcm_offs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct clockdomain *VAR_2)
{
 u32 VAR_3;

 if (!VAR_2)
  return -VAR_1;

 VAR_3 = FUNC_1(VAR_2->pwrdm.ptr->prcm_offs, VAR_0);
 VAR_3 &= VAR_2->clktrctrl_mask;
 VAR_3 >>= FUNC_0(VAR_2->clktrctrl_mask);

 return VAR_3;
}
