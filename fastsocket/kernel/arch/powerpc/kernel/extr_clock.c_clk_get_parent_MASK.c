
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk {int dummy; } ;
struct TYPE_2__ {struct clk* (* clk_get_parent ) (struct clk*) ;} ;


 int VAR_0 ;
 struct clk* FUNC_0 (int ) ;
 TYPE_1__ VAR_1 ;
 struct clk* FUNC_1 (struct clk*) ;

struct clk *FUNC_2(struct clk *VAR_2)
{
 if (VAR_1.clk_get_parent)
  return VAR_1.clk_get_parent(VAR_2);
 return FUNC_0(-VAR_0);
}
