
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_hwmod_opt_clk {struct clk* _clk; int clkdev_con_id; int clkdev_dev_id; } ;
struct omap_hwmod {int opt_clks_cnt; int name; struct omap_hwmod_opt_clk* opt_clks; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (scalar_t__,char*,int ,int ,int ) ;
 struct clk* FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct omap_hwmod *VAR_1)
{
 struct omap_hwmod_opt_clk *VAR_2;
 struct clk *VAR_3;
 int VAR_4;
 int VAR_5 = 0;

 for (VAR_4 = VAR_1->opt_clks_cnt, VAR_2 = VAR_1->opt_clks; VAR_4 > 0; VAR_4--, VAR_2++) {
  VAR_3 = FUNC_2(VAR_2->clkdev_dev_id, VAR_2->clkdev_con_id);
  FUNC_1(FUNC_0(VAR_3), "omap_hwmod: %s: cannot clk_get opt_clk "
       "%s.%s\n", VAR_1->name, VAR_2->clkdev_dev_id,
       VAR_2->clkdev_con_id);
  if (FUNC_0(VAR_3))
   VAR_5 = -VAR_0;
  VAR_2->_clk = VAR_3;
 }

 return VAR_5;
}
