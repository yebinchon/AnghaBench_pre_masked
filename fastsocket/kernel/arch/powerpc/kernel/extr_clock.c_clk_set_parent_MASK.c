
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk {int dummy; } ;
struct TYPE_2__ {int (* clk_set_parent ) (struct clk*,struct clk*) ;} ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (struct clk*,struct clk*) ;

int FUNC_1(struct clk *VAR_2, struct clk *VAR_3)
{
 if (VAR_1.clk_set_parent)
  return VAR_1.clk_set_parent(VAR_2, VAR_3);
 return -VAR_0;
}
