
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int id; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (int ,unsigned long) ;

int FUNC_2(struct clk *VAR_1, unsigned long VAR_2)
{
 if (VAR_1 == ((void*)0) || FUNC_0(VAR_1))
  return -VAR_0;
 return FUNC_1(VAR_1->id, VAR_2);
}
