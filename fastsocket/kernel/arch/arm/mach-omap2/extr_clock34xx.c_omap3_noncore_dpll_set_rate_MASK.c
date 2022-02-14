
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dpll_data {int modes; unsigned long last_rounded_rate; struct clk* clk_bypass; struct clk* clk_ref; int last_rounded_n; int last_rounded_m; } ;
struct clk {unsigned long rate; struct clk* parent; scalar_t__ usecount; int name; struct dpll_data* dpll_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct clk*,int ) ;
 int FUNC_2 (struct clk*) ;
 int FUNC_3 (struct clk*,struct clk*) ;
 int FUNC_4 (struct clk*) ;
 int FUNC_5 (struct clk*) ;
 int FUNC_6 (struct clk*,unsigned long) ;
 unsigned long FUNC_7 (struct clk*) ;
 int FUNC_8 (struct clk*,int ,int ,int ) ;
 int FUNC_9 (char*,int ,...) ;

__attribute__((used)) static int FUNC_10(struct clk *VAR_2, unsigned long VAR_3)
{
 struct clk *VAR_4 = ((void*)0);
 u16 VAR_5;
 struct dpll_data *VAR_6;
 int VAR_7;

 if (!VAR_2 || !VAR_3)
  return -VAR_1;

 VAR_6 = VAR_2->dpll_data;
 if (!VAR_6)
  return -VAR_1;

 if (VAR_3 == FUNC_7(VAR_2))
  return 0;






 FUNC_5(VAR_6->clk_bypass);
 FUNC_5(VAR_6->clk_ref);

 if (VAR_6->clk_bypass->rate == VAR_3 &&
     (VAR_2->dpll_data->modes & (1 << VAR_0))) {
  FUNC_9("clock: %s: set rate: entering bypass.\n", VAR_2->name);

  VAR_7 = FUNC_2(VAR_2);
  if (!VAR_7)
   VAR_4 = VAR_6->clk_bypass;
 } else {
  if (VAR_6->last_rounded_rate != VAR_3)
   FUNC_6(VAR_2, VAR_3);

  if (VAR_6->last_rounded_rate == 0)
   return -VAR_1;

  VAR_5 = FUNC_1(VAR_2, VAR_6->last_rounded_n);
  if (!VAR_5)
   FUNC_0(1);

  FUNC_9("clock: %s: set rate: locking rate to %lu.\n",
    VAR_2->name, VAR_3);

  VAR_7 = FUNC_8(VAR_2, VAR_6->last_rounded_m,
       VAR_6->last_rounded_n, VAR_5);
  if (!VAR_7)
   VAR_4 = VAR_6->clk_ref;
 }
 if (!VAR_7) {






  if (VAR_2->usecount) {
   FUNC_5(VAR_4);
   FUNC_4(VAR_2->parent);
  }
  FUNC_3(VAR_2, VAR_4);
  VAR_2->rate = VAR_3;
 }
 FUNC_4(VAR_6->clk_ref);
 FUNC_4(VAR_6->clk_bypass);

 return 0;
}
