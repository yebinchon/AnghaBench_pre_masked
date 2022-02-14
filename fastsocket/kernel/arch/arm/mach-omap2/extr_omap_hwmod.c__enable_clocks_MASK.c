
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_hwmod_ocp_if {int flags; struct clk* _clk; } ;
struct omap_hwmod {int slaves_cnt; struct omap_hwmod_ocp_if** slaves; struct clk* _clk; int name; } ;
struct clk {int dummy; } ;


 int FUNC_0 (struct clk*) ;
 int VAR_0 ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static int FUNC_3(struct omap_hwmod *VAR_1)
{
 struct omap_hwmod_ocp_if *VAR_2;
 int VAR_3;

 FUNC_2("omap_hwmod: %s: enabling clocks\n", VAR_1->name);

 if (VAR_1->_clk && !FUNC_0(VAR_1->_clk))
  FUNC_1(VAR_1->_clk);

 if (VAR_1->slaves_cnt > 0) {
  for (VAR_3 = 0, VAR_2 = *VAR_1->slaves; VAR_3 < VAR_1->slaves_cnt; VAR_3++, VAR_2++) {
   struct clk *VAR_4 = VAR_2->_clk;

   if (VAR_4 && !FUNC_0(VAR_4) && (VAR_2->flags & VAR_0))
    FUNC_1(VAR_4);
  }
 }



 return 0;
}
