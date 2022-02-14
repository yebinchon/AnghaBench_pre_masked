
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct omap_hwmod {TYPE_3__* _clk; } ;
struct TYPE_6__ {TYPE_2__* clkdm; } ;
struct TYPE_4__ {int ptr; } ;
struct TYPE_5__ {TYPE_1__ pwrdm; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct omap_hwmod *VAR_1, struct omap_hwmod *VAR_2)
{
 if (!VAR_1->_clk)
  return -VAR_0;

 return FUNC_0(VAR_1->_clk->clkdm->pwrdm.ptr,
      VAR_2->_clk->clkdm->pwrdm.ptr);
}
