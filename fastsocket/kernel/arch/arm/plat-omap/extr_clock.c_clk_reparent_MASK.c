
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {struct clk* parent; int children; int sibling; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct clk *VAR_0, struct clk *VAR_1)
{
 FUNC_1(&VAR_0->sibling);
 if (VAR_1)
  FUNC_0(&VAR_0->sibling, &VAR_1->children);
 VAR_0->parent = VAR_1;



}
