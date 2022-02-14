
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk {int dummy; } ;
struct TYPE_2__ {unsigned long (* clk_get_rate ) (struct clk*) ;} ;


 TYPE_1__ VAR_0 ;
 unsigned long FUNC_0 (struct clk*) ;

unsigned long FUNC_1(struct clk *VAR_1)
{
 if (VAR_0.clk_get_rate)
  return VAR_0.clk_get_rate(VAR_1);
 return 0;
}
