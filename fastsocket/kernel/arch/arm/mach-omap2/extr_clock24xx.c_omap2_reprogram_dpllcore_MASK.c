
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct prcm_config {int cm_clksel1_pll; int cm_clksel2_pll; int base_sdrc_rfr; } ;
struct dpll_data {int mult_mask; int div1_mask; int mult_div1_reg; } ;
struct clk {struct dpll_data* dpll_data; } ;
struct TYPE_2__ {int dpll_speed; int xtal_speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ,int ) ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,int) ;

__attribute__((used)) static int FUNC_9(struct clk *VAR_9, unsigned long VAR_10)
{
 u32 VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 u32 VAR_17 = 0;
 struct prcm_config VAR_18;
 const struct dpll_data *VAR_19;

 VAR_11 = FUNC_5(&VAR_8);
 VAR_13 = FUNC_2(VAR_5, VAR_0);
 VAR_13 &= VAR_4;

 if ((VAR_10 == (VAR_11 / 2)) && (VAR_13 == 2)) {
  FUNC_8(VAR_1, 1);
 } else if ((VAR_10 == (VAR_11 * 2)) && (VAR_13 == 1)) {
  FUNC_8(VAR_2, 1);
 } else if (VAR_10 != VAR_11) {
  VAR_15 = FUNC_3(VAR_10);
  if (VAR_15 != VAR_10)
   return -VAR_3;

  if (VAR_13 == 1)
   VAR_12 = VAR_7->dpll_speed;
  else
   VAR_12 = VAR_7->dpll_speed / 2;

  VAR_19 = VAR_9->dpll_data;
  if (!VAR_19)
   return -VAR_3;

  VAR_18.cm_clksel1_pll = FUNC_1(VAR_19->mult_div1_reg);
  VAR_18.cm_clksel1_pll &= ~(VAR_19->mult_mask |
        VAR_19->div1_mask);
  VAR_14 = ((VAR_7->xtal_speed / 1000000) - 1);
  VAR_18.cm_clksel2_pll = FUNC_2(VAR_5, VAR_0);
  VAR_18.cm_clksel2_pll &= ~VAR_4;
  if (VAR_10 > VAR_12) {
   VAR_18.cm_clksel2_pll |= VAR_2;
   VAR_13 = ((VAR_10 / 2) / 1000000);
   VAR_16 = VAR_2;
  } else {
   VAR_18.cm_clksel2_pll |= VAR_1;
   VAR_13 = (VAR_10 / 1000000);
   VAR_16 = VAR_1;
  }
  VAR_18.cm_clksel1_pll |= (VAR_14 << FUNC_0(VAR_19->mult_mask));
  VAR_18.cm_clksel1_pll |= (VAR_13 << FUNC_0(VAR_19->div1_mask));


  VAR_18.base_sdrc_rfr = VAR_6;

  if (VAR_10 == VAR_7->xtal_speed)
   VAR_17 = 1;


  FUNC_8(VAR_2, 1);


  FUNC_4(VAR_18.cm_clksel1_pll, VAR_18.base_sdrc_rfr,
          VAR_17);


  FUNC_7(FUNC_6());
  FUNC_8(VAR_16, 0);
 }

 return 0;
}
