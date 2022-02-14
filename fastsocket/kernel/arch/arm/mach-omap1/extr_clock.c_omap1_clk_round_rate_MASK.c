
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int flags; long rate; long (* round_rate ) (struct clk*,unsigned long) ;} ;


 int VAR_0 ;
 long FUNC_0 (struct clk*,unsigned long) ;

__attribute__((used)) static long FUNC_1(struct clk *VAR_1, unsigned long VAR_2)
{
 if (VAR_1->flags & VAR_0)
  return VAR_1->rate;

 if (VAR_1->round_rate != ((void*)0))
  return VAR_1->round_rate(VAR_1, VAR_2);

 return VAR_1->rate;
}
