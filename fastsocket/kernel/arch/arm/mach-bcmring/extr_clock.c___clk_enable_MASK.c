
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int csp_id; int rate_hz; int use_cnt; struct clk* parent; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct clk*) ;
 scalar_t__ FUNC_5 (struct clk*) ;
 int FUNC_6 (struct clk*) ;
 scalar_t__ FUNC_7 (struct clk*) ;

__attribute__((used)) static void FUNC_8(struct clk *VAR_0)
{
 if (!VAR_0)
  return;


 if (VAR_0->parent)
  FUNC_8(VAR_0->parent);

 if (VAR_0->use_cnt++ == 0) {
  if (FUNC_4(VAR_0)) {
   FUNC_1(VAR_0->rate_hz, 0);
  } else if (FUNC_5(VAR_0)) {
   FUNC_2(VAR_0->rate_hz);
  } else if (FUNC_7(VAR_0)) {
   if (!FUNC_6(VAR_0))
    FUNC_0(VAR_0->csp_id);
  } else {
   FUNC_3(VAR_0->csp_id);
  }
 }
}
