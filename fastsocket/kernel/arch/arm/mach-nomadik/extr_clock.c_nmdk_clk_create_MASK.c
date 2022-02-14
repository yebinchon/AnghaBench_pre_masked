
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_lookup {int dummy; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct clk_lookup*) ;
 struct clk_lookup* FUNC_1 (struct clk*,int *,char const*) ;

int FUNC_2(struct clk *VAR_1, const char *VAR_2)
{
 struct clk_lookup *VAR_3;

 VAR_3 = FUNC_1(VAR_1, ((void*)0), VAR_2);
 if (!VAR_3)
  return -VAR_0;
 FUNC_0(VAR_3);
 return 0;
}
