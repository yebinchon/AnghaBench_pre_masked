
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int owner; } ;


 int FUNC_0 (struct clk*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct clk *VAR_0)
{
 if (VAR_0 && !FUNC_0(VAR_0))
  FUNC_1(VAR_0->owner);
}
