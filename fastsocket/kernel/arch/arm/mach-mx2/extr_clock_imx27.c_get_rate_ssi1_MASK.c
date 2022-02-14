
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 unsigned long FUNC_1 (struct clk*,int) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk *VAR_1)
{
 return FUNC_1(VAR_1, (FUNC_0(VAR_0) >> 16) & 0x3f);
}
