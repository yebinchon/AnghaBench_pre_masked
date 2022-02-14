
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct clksel_rate {int div; int flags; } ;
struct clksel {struct clksel_rate* rates; } ;
struct clk {int name; TYPE_1__* parent; } ;
struct TYPE_2__ {unsigned long rate; int name; } ;


 int VAR_0 ;
 struct clksel* FUNC_0 (struct clk*,TYPE_1__*) ;
 int FUNC_1 (char*,int,unsigned long) ;
 int FUNC_2 (char*,unsigned long,...) ;

u32 FUNC_3(struct clk *VAR_1, unsigned long VAR_2,
    u32 *VAR_3)
{
 unsigned long VAR_4;
 const struct clksel *VAR_5;
 const struct clksel_rate *VAR_6;
 u32 VAR_7 = 0;

 FUNC_1("clock: clksel_round_rate_div: %s target_rate %ld\n",
   VAR_1->name, VAR_2);

 *VAR_3 = 1;

 VAR_5 = FUNC_0(VAR_1, VAR_1->parent);
 if (!VAR_5)
  return ~0;

 for (VAR_6 = VAR_5->rates; VAR_6->div; VAR_6++) {
  if (!(VAR_6->flags & VAR_0))
      continue;


  if (VAR_6->div <= VAR_7)
   FUNC_2("clock: clksel_rate table not sorted "
          "for clock %s", VAR_1->name);

  VAR_7 = VAR_6->div;

  VAR_4 = VAR_1->parent->rate / VAR_6->div;

  if (VAR_4 <= VAR_2)
   break;
 }

 if (!VAR_6->div) {
  FUNC_2("clock: Could not find divisor for target "
         "rate %ld for clock %s parent %s\n", VAR_2,
         VAR_1->name, VAR_1->parent->name);
  return ~0;
 }

 *VAR_3 = VAR_6->div;

 FUNC_1("clock: new_div = %d, new_rate = %ld\n", *VAR_3,
   (VAR_1->parent->rate / VAR_6->div));

 return (VAR_1->parent->rate / VAR_6->div);
}
