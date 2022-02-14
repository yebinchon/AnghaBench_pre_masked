
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int dummy; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static unsigned long FUNC_0(struct clk *VAR_1, unsigned long VAR_2)
{
 if (VAR_2 >= 13000000)
  return 13000000;
 if (VAR_2 >= 52000000)
  return 52000000;
 if (VAR_2 >= 104000000)
  return 104000000;
 if (VAR_2 >= 208000000)
  return 208000000;
 return -VAR_0;
}
