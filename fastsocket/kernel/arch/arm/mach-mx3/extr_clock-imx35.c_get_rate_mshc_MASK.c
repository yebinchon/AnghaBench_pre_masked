
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long FUNC_0 (scalar_t__) ;
 unsigned long FUNC_1 () ;
 unsigned long FUNC_2 () ;

__attribute__((used)) static unsigned long FUNC_3(struct clk *VAR_2)
{
 unsigned long VAR_3 = FUNC_0(VAR_0 + VAR_1);
 unsigned long VAR_4, VAR_5, VAR_6;

 if (VAR_3 & (1 << 7))
  VAR_6 = FUNC_1();
 else
  VAR_6 = FUNC_2();

 VAR_4 = (VAR_3 >> 29) & 0x7;
 VAR_5 = (VAR_3 >> 22) & 0x3f;

 return VAR_6 / ((VAR_4 + 1) * (VAR_5 + 1));
}
