
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk {int dummy; } ;
struct TYPE_2__ {int (* clk_enable ) (struct clk*) ;} ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (struct clk*) ;

int FUNC_1(struct clk *VAR_2)
{
 if (VAR_1.clk_enable)
  return VAR_1.clk_enable(VAR_2);
 return -VAR_0;
}
