
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk {int dummy; } ;
struct TYPE_2__ {int (* clk_put ) (struct clk*) ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (struct clk*) ;

void FUNC_1(struct clk *VAR_1)
{
 if (VAR_0.clk_put)
  VAR_0.clk_put(VAR_1);
}
