
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dpll_data {unsigned long max_multiplier; long last_rounded_rate; int min_divider; int max_divider; int rate_tolerance; int last_rounded_m; int last_rounded_n; TYPE_1__* clk_ref; } ;
struct clk {long name; struct dpll_data* dpll_data; } ;
struct TYPE_2__ {unsigned long rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 long FUNC_0 (unsigned long,int,int) ;
 int FUNC_1 (struct clk*,int) ;
 int FUNC_2 (int*,int,unsigned long*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char*,...) ;

long FUNC_5(struct clk *VAR_4, unsigned long VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 unsigned long VAR_11, VAR_12;
 int VAR_13 = -1, VAR_14 = -1, VAR_15 = -1;
 struct dpll_data *VAR_16;

 if (!VAR_4 || !VAR_4->dpll_data)
  return ~0;

 VAR_16 = VAR_4->dpll_data;

 FUNC_4("clock: starting DPLL round_rate for clock %s, target rate "
   "%ld\n", VAR_4->name, VAR_5);

 VAR_11 = VAR_5 / (VAR_16->clk_ref->rate / VAR_3);
 VAR_10 = VAR_16->max_multiplier * VAR_3;

 VAR_16->last_rounded_rate = 0;

 for (VAR_7 = VAR_16->min_divider; VAR_7 <= VAR_16->max_divider; VAR_7++) {


  VAR_8 = FUNC_1(VAR_4, VAR_7);
  if (VAR_8 == VAR_1)
   break;
  else if (VAR_8 == VAR_0)
   continue;


  VAR_6 = VAR_11 * VAR_7;







  if (VAR_6 > VAR_10)
   break;

  VAR_8 = FUNC_2(&VAR_6, VAR_7, &VAR_12, VAR_5,
        VAR_16->clk_ref->rate);


  if (VAR_8 == VAR_2)
   continue;

  VAR_9 = VAR_5 - VAR_12;
  FUNC_4("clock: n = %d: m = %d: rate error is %d "
    "(new_rate = %ld)\n", VAR_7, VAR_6, VAR_9, VAR_12);

  if (VAR_13 == -1 ||
      VAR_13 >= (int)(FUNC_3(VAR_9) - VAR_16->rate_tolerance)) {
   VAR_13 = VAR_9;
   VAR_14 = VAR_6;
   VAR_15 = VAR_7;

   FUNC_4("clock: found new least error %d\n", VAR_13);


   if (VAR_13 <= VAR_16->rate_tolerance)
    break;
  }
 }

 if (VAR_13 < 0) {
  FUNC_4("clock: error: target rate or tolerance too low\n");
  return ~0;
 }

 VAR_16->last_rounded_m = VAR_14;
 VAR_16->last_rounded_n = VAR_15;
 VAR_16->last_rounded_rate = FUNC_0(VAR_16->clk_ref->rate,
             VAR_14, VAR_15);

 FUNC_4("clock: final least error: e = %d, m = %d, n = %d\n",
   VAR_13, VAR_14, VAR_15);
 FUNC_4("clock: final rate: %ld  (target rate: %ld)\n",
   VAR_16->last_rounded_rate, VAR_5);

 return VAR_16->last_rounded_rate;
}
