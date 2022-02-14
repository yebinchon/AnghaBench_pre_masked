
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct dpll_data {int max_divider; int min_divider; } ;
struct clk {TYPE_1__* parent; struct dpll_data* dpll_data; } ;
struct TYPE_2__ {int rate; } ;


 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static int FUNC_1(struct clk *VAR_6, u8 VAR_7)
{
 struct dpll_data *VAR_8;
 long VAR_9;
 int VAR_10 = 0;

 VAR_8 = VAR_6->dpll_data;


 VAR_9 = VAR_6->parent->rate / (VAR_7 + 1);
 if (VAR_9 < VAR_1) {

  FUNC_0("rejecting n=%d due to Fint failure, "
    "lowering max_divider\n", VAR_7);
  VAR_8->max_divider = VAR_7;
  VAR_10 = VAR_5;

 } else if (VAR_9 > VAR_0 &&
     VAR_9 < VAR_3) {

  FUNC_0("rejecting n=%d due to Fint failure\n", VAR_7);
  VAR_10 = VAR_4;

 } else if (VAR_9 > VAR_2) {

  FUNC_0("rejecting n=%d due to Fint failure, "
    "boosting min_divider\n", VAR_7);
  VAR_8->min_divider = VAR_7;
  VAR_10 = VAR_4;

 }

 return VAR_10;
}
