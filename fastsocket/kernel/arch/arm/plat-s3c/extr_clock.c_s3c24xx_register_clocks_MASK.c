
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int dummy; } ;


 scalar_t__ FUNC_0 (struct clk*) ;

int FUNC_1(struct clk **VAR_0, int VAR_1)
{
 int VAR_2 = 0;

 for (; VAR_1 > 0; VAR_1--, VAR_0++) {
  if (FUNC_0(*VAR_0) < 0)
   VAR_2++;
 }

 return VAR_2;
}
