
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u32 FUNC_0(struct clk *VAR_2, u32 VAR_3)
{
 if (VAR_3 > VAR_1)
  VAR_3 = VAR_1;
 return (VAR_3 - VAR_3 % VAR_0);
}
