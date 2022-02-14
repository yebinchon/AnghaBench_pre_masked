
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {scalar_t__ usecount; int flags; struct clk* parent; int lpsc; int psc_ctlr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct clk*) ;

__attribute__((used)) static void FUNC_3(struct clk *VAR_1)
{
 if (FUNC_0(VAR_1->usecount == 0))
  return;
 if (--VAR_1->usecount == 0 && !(VAR_1->flags & VAR_0))
  FUNC_1(FUNC_2(VAR_1), VAR_1->psc_ctlr,
    VAR_1->lpsc, 0);
 if (VAR_1->parent)
  FUNC_3(VAR_1->parent);
}
