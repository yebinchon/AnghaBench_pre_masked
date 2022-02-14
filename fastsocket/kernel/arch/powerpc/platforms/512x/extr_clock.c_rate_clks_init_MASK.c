
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int dummy; } ;


 int FUNC_0 (struct clk*) ;
 struct clk** VAR_0 ;

__attribute__((used)) static void FUNC_1(void)
{
 struct clk **VAR_1, *VAR_2;

 VAR_1 = VAR_0;
 while ((VAR_2 = *VAR_1++))
  FUNC_0(VAR_2);
}
