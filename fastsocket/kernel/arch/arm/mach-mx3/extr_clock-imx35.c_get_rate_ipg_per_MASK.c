
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long FUNC_0 (scalar_t__) ;
 unsigned long FUNC_1 (int *) ;
 unsigned long FUNC_2 () ;

__attribute__((used)) static unsigned long FUNC_3(struct clk *VAR_3)
{
 unsigned long VAR_4 = FUNC_0(VAR_0 + VAR_1);
 unsigned long VAR_5 = FUNC_0(VAR_0 + VAR_2);
 unsigned long VAR_6, VAR_7;

 if (VAR_4 & (1 << 26)) {
  VAR_6 = (VAR_5 >> 19) & 0x7;
  VAR_7 = (VAR_5 >> 16) & 0x7;
  return FUNC_2() / ((VAR_6 + 1) * (VAR_7 + 1));
 } else {
  VAR_6 = (VAR_4 >> 12) & 0x7;
  return FUNC_1(((void*)0)) / VAR_6;
 }
}
