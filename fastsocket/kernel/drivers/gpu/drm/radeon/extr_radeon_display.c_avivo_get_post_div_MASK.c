
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_pll {int flags; int post_div; int lcd_pll_out_min; int pll_out_min; int lcd_pll_out_max; int pll_out_max; int max_post_div; int min_post_div; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static u32 FUNC_0(struct radeon_pll *VAR_3,
         u32 VAR_4)
{
 u32 VAR_5, VAR_6, VAR_7;

 if (VAR_3->flags & VAR_2)
  return VAR_3->post_div;

 if (VAR_3->flags & VAR_1) {
  if (VAR_3->flags & VAR_0)
   VAR_5 = VAR_3->lcd_pll_out_min;
  else
   VAR_5 = VAR_3->pll_out_min;
 } else {
  if (VAR_3->flags & VAR_0)
   VAR_5 = VAR_3->lcd_pll_out_max;
  else
   VAR_5 = VAR_3->pll_out_max;
 }

 VAR_6 = VAR_5 / VAR_4;
 VAR_7 = VAR_5 % VAR_4;

 if (VAR_3->flags & VAR_1) {
  if (VAR_7)
   VAR_6++;
 } else {
  if (!VAR_7)
   VAR_6--;
 }

 if (VAR_6 > VAR_3->max_post_div)
  VAR_6 = VAR_3->max_post_div;
 else if (VAR_6 < VAR_3->min_post_div)
  VAR_6 = VAR_3->min_post_div;

 return VAR_6;
}
