
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long FUNC_0 (scalar_t__) ;
 unsigned long FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 () ;
 unsigned long FUNC_3 () ;

__attribute__((used)) static unsigned long FUNC_4(struct clk *VAR_2)
{
 unsigned long VAR_3 = FUNC_0(VAR_0 + VAR_1);
 unsigned long VAR_4;

 if (VAR_3 & (1 << 7))
  VAR_4 = FUNC_2();
 else
  VAR_4 = FUNC_3();

 return VAR_4 / FUNC_1((VAR_3 >> 16) & 0x3f);
}
