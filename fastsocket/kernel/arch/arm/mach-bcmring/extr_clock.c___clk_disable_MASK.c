
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {scalar_t__ use_cnt; struct clk* parent; int csp_id; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct clk*) ;
 scalar_t__ FUNC_6 (struct clk*) ;
 int FUNC_7 (struct clk*) ;
 scalar_t__ FUNC_8 (struct clk*) ;

__attribute__((used)) static void FUNC_9(struct clk *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_0(VAR_0->use_cnt == 0);

 if (--VAR_0->use_cnt == 0) {
  if (FUNC_5(VAR_0)) {
   FUNC_2();
  } else if (FUNC_6(VAR_0)) {
   FUNC_3();
  } else if (FUNC_8(VAR_0)) {
   if (!FUNC_7(VAR_0))
    FUNC_1(VAR_0->csp_id);
  } else {
   FUNC_4(VAR_0->csp_id);
  }
 }

 if (VAR_0->parent)
  FUNC_9(VAR_0->parent);
}
