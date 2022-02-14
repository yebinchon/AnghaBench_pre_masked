
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int dummy; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static unsigned long FUNC_0(struct clk *VAR_1, unsigned long VAR_2)
{
 if (VAR_2 >= 18900000)
  return 18900000;
 if (VAR_2 >= 20800000)
  return 20800000;
 if (VAR_2 >= 23100000)
  return 23100000;
 if (VAR_2 >= 26000000)
  return 26000000;
 if (VAR_2 >= 29700000)
  return 29700000;
 if (VAR_2 >= 34700000)
  return 34700000;
 if (VAR_2 >= 41600000)
  return 41600000;
 if (VAR_2 >= 52000000)
  return 52000000;
 return -VAR_0;
}
