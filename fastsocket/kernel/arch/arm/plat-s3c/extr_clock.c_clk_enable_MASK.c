
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int (* enable ) (struct clk*,int) ;int usage; struct clk* parent; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct clk*,int) ;

int FUNC_4(struct clk *VAR_2)
{
 if (FUNC_0(VAR_2) || VAR_2 == ((void*)0))
  return -VAR_0;

 FUNC_4(VAR_2->parent);

 FUNC_1(&VAR_1);

 if ((VAR_2->usage++) == 0)
  (VAR_2->enable)(VAR_2, 1);

 FUNC_2(&VAR_1);
 return 0;
}
