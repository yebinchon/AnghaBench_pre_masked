
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_hwmod {struct clk* _clk; int clkdev_con_id; int clkdev_dev_id; int name; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (scalar_t__,char*,int ,int ,int ) ;
 struct clk* FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct omap_hwmod *VAR_1)
{
 struct clk *VAR_2;
 int VAR_3 = 0;

 if (!VAR_1->clkdev_con_id)
  return 0;

 VAR_2 = FUNC_2(VAR_1->clkdev_dev_id, VAR_1->clkdev_con_id);
 FUNC_1(FUNC_0(VAR_2), "omap_hwmod: %s: cannot clk_get main_clk %s.%s\n",
      VAR_1->name, VAR_1->clkdev_dev_id, VAR_1->clkdev_con_id);
 if (FUNC_0(VAR_2))
  VAR_3 = -VAR_0;
 VAR_1->_clk = VAR_2;

 return VAR_3;
}
