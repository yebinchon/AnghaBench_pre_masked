
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int node; int sibling; } ;


 scalar_t__ FUNC_0 (struct clk*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct clk *VAR_1)
{
 if (VAR_1 == ((void*)0) || FUNC_0(VAR_1))
  return;

 FUNC_2(&VAR_0);
 FUNC_1(&VAR_1->sibling);
 FUNC_1(&VAR_1->node);
 FUNC_3(&VAR_0);
}
