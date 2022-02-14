
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u32 ;
struct clk {unsigned long rate; TYPE_1__* parent; int name; } ;
struct TYPE_2__ {unsigned long rate; } ;


 unsigned long FUNC_0 (struct clk*) ;
 int FUNC_1 (char*,unsigned long,...) ;

unsigned long FUNC_2(struct clk *VAR_0)
{
 unsigned long VAR_1;
 u32 VAR_2 = 0;

 FUNC_1("clock: recalc'ing clksel clk %s\n", VAR_0->name);

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2 == 0)
  return VAR_0->rate;

 VAR_1 = VAR_0->parent->rate / VAR_2;

 FUNC_1("clock: new clock rate is %ld (div %d)\n", VAR_1, VAR_2);

 return VAR_1;
}
