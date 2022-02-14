
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {long (* round_rate ) (struct clk*,unsigned long) ;} ;


 int FUNC_0 (struct clk*) ;
 long FUNC_1 (struct clk*,unsigned long) ;

long FUNC_2(struct clk *VAR_0, unsigned long VAR_1)
{
 if (!FUNC_0(VAR_0) && VAR_0->round_rate)
  return (VAR_0->round_rate)(VAR_0, VAR_1);

 return VAR_1;
}
