
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk {TYPE_1__* ops; } ;
struct TYPE_2__ {long (* round_rate ) (struct clk*,unsigned long) ;} ;


 int FUNC_0 (struct clk*) ;
 long FUNC_1 (struct clk*,unsigned long) ;
 scalar_t__ FUNC_2 (int) ;

long FUNC_3(struct clk *VAR_0, unsigned long VAR_1)
{
 if (FUNC_2(!FUNC_0(VAR_0)))
  return 0;

 if (VAR_0->ops->round_rate)
  return VAR_0->ops->round_rate(VAR_0, VAR_1);

 return 0;
}
