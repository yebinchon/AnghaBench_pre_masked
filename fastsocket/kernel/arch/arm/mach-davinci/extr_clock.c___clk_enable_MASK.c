
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int flags; int lpsc; int psc_ctlr; int usecount; struct clk* parent; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (struct clk*) ;

__attribute__((used)) static void FUNC_2(struct clk *VAR_1)
{
 if (VAR_1->parent)
  FUNC_2(VAR_1->parent);
 if (VAR_1->usecount++ == 0 && (VAR_1->flags & VAR_0))
  FUNC_0(FUNC_1(VAR_1), VAR_1->psc_ctlr,
    VAR_1->lpsc, 1);
}
