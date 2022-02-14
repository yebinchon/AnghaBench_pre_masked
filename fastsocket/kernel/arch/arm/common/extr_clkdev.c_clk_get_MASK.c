
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct clk {int dummy; } ;


 struct clk* FUNC_0 (char const*,char const*) ;
 char* FUNC_1 (struct device*) ;

struct clk *FUNC_2(struct device *VAR_0, const char *VAR_1)
{
 const char *VAR_2 = VAR_0 ? FUNC_1(VAR_0) : ((void*)0);

 return FUNC_0(VAR_2, VAR_1);
}
