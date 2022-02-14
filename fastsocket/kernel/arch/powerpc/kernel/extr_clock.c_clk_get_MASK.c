
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct clk {int dummy; } ;
struct TYPE_2__ {struct clk* (* clk_get ) (struct device*,char const*) ;} ;


 int VAR_0 ;
 struct clk* FUNC_0 (int ) ;
 TYPE_1__ VAR_1 ;
 struct clk* FUNC_1 (struct device*,char const*) ;

struct clk *FUNC_2(struct device *VAR_2, const char *VAR_3)
{
 if (VAR_1.clk_get)
  return VAR_1.clk_get(VAR_2, VAR_3);
 return FUNC_0(-VAR_0);
}
