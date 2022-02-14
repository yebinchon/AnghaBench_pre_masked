
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long FUNC_0 (scalar_t__) ;
 unsigned long FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 () ;
 unsigned long FUNC_3 () ;

__attribute__((used)) static unsigned long FUNC_4(struct clk *VAR_3)
{
 unsigned long VAR_4 = FUNC_0(VAR_0 + VAR_1);
 unsigned long VAR_5 = FUNC_0(VAR_0 + VAR_2);
 unsigned long VAR_6 = FUNC_1(VAR_5 >> 10);

 if (VAR_4 & (1 << 14))
  return FUNC_2() / VAR_6;
 else
  return FUNC_3() / VAR_6;
}
