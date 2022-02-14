
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct clk *VAR_2)
{
 int VAR_3 = 0;

 if (VAR_2 == ((void*)0) || FUNC_0(VAR_2))
  return -VAR_0;

 FUNC_2(&VAR_1);
 VAR_3 = FUNC_1(VAR_2);
 FUNC_3(&VAR_1);

 return VAR_3;
}
