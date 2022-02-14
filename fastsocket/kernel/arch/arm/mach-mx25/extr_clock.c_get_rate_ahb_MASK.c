
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long FUNC_0 (int *) ;
 unsigned long FUNC_1 (scalar_t__) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk *VAR_2)
{
 unsigned long VAR_3 = FUNC_1(VAR_1 + VAR_0);

 return FUNC_0(((void*)0)) / (((VAR_3 >> 28) & 0x3) + 1);
}
