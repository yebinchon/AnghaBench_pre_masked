
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 struct clk* FUNC_0 (int ) ;
 int FUNC_1 (char const*,char*) ;
 scalar_t__ VAR_1 ;

struct clk *FUNC_2(struct device *VAR_2, const char *VAR_3)
{
 if (!FUNC_1(VAR_3, "spi-baseclk"))
  return (struct clk *)((unsigned long)VAR_1 / 2 / 2);
 if (!FUNC_1(VAR_3, "imbus_clk"))
  return (struct clk *)((unsigned long)VAR_1 / 2);
 return FUNC_0(-VAR_0);
}
