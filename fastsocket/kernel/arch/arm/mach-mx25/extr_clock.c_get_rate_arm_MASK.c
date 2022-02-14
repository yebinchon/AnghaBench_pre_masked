
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long FUNC_0 () ;
 unsigned long FUNC_1 (scalar_t__) ;

unsigned long FUNC_2(struct clk *VAR_2)
{
 unsigned long VAR_3 = FUNC_1(VAR_1 + VAR_0);
 unsigned long VAR_4 = FUNC_0();

 if (VAR_3 & (1 << 14))
  VAR_4 = (VAR_4 * 3) >> 1;

 return VAR_4 / ((VAR_3 >> 30) + 1);
}
