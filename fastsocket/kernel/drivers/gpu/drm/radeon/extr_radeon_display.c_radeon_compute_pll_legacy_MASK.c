
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int u32 ;
struct radeon_pll {int min_ref_div; int max_ref_div; int min_post_div; int max_post_div; int best_vco; int flags; int lcd_pll_out_min; int lcd_pll_out_max; int pll_out_min; int pll_out_max; int reference_div; int reference_freq; int pll_in_min; int pll_in_max; int post_div; int min_frac_feedback_div; int max_frac_feedback_div; int min_feedback_div; int max_feedback_div; } ;


 int FUNC_0 (char*,long long,int,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;

void FUNC_3(struct radeon_pll *VAR_13,
          uint64_t VAR_14,
          uint32_t *VAR_15,
          uint32_t *VAR_16,
          uint32_t *VAR_17,
          uint32_t *VAR_18,
          uint32_t *VAR_19)
{
 uint32_t VAR_20 = VAR_13->min_ref_div;
 uint32_t VAR_21 = VAR_13->max_ref_div;
 uint32_t VAR_22 = VAR_13->min_post_div;
 uint32_t VAR_23 = VAR_13->max_post_div;
 uint32_t VAR_24 = 0;
 uint32_t VAR_25 = 0;
 uint32_t VAR_26 = VAR_13->best_vco;
 uint32_t VAR_27 = 1;
 uint32_t VAR_28 = 1;
 uint32_t VAR_29 = 1;
 uint32_t VAR_30 = 0;
 uint32_t VAR_31 = -1;
 uint32_t VAR_32 = 0xffffffff;
 uint32_t VAR_33 = 1;
 uint32_t VAR_34;
 u32 VAR_35, VAR_36;

 FUNC_0("PLL freq %llu %u %u\n", VAR_14, VAR_13->min_ref_div, VAR_13->max_ref_div);
 VAR_14 = VAR_14 * 1000;

 if (VAR_13->flags & VAR_0) {
  VAR_35 = VAR_13->lcd_pll_out_min;
  VAR_36 = VAR_13->lcd_pll_out_max;
 } else {
  VAR_35 = VAR_13->pll_out_min;
  VAR_36 = VAR_13->pll_out_max;
 }

 if (VAR_35 > 64800)
  VAR_35 = 64800;

 if (VAR_13->flags & VAR_12)
  VAR_20 = VAR_21 = VAR_13->reference_div;
 else {
  while (VAR_20 < VAR_21-1) {
   uint32_t VAR_37 = (VAR_20 + VAR_21) / 2;
   uint32_t VAR_38 = VAR_13->reference_freq / VAR_37;
   if (VAR_38 < VAR_13->pll_in_min)
    VAR_21 = VAR_37;
   else if (VAR_38 > VAR_13->pll_in_max)
    VAR_20 = VAR_37;
   else
    break;
  }
 }

 if (VAR_13->flags & VAR_11)
  VAR_22 = VAR_23 = VAR_13->post_div;

 if (VAR_13->flags & VAR_10) {
  VAR_24 = VAR_13->min_frac_feedback_div;
  VAR_25 = VAR_13->max_frac_feedback_div;
 }

 for (VAR_34 = VAR_23; VAR_34 >= VAR_22; --VAR_34) {
  uint32_t VAR_39;

  if ((VAR_13->flags & VAR_2) && (VAR_34 & 1))
   continue;


  if (VAR_13->flags & VAR_1) {
   if ((VAR_34 == 5) ||
       (VAR_34 == 7) ||
       (VAR_34 == 9) ||
       (VAR_34 == 10) ||
       (VAR_34 == 11) ||
       (VAR_34 == 13) ||
       (VAR_34 == 14) ||
       (VAR_34 == 15))
    continue;
  }

  for (VAR_39 = VAR_20; VAR_39 <= VAR_21; ++VAR_39) {
   uint32_t VAR_40, VAR_41 = 0, VAR_42, VAR_43;
   uint32_t VAR_44 = VAR_13->reference_freq / VAR_39;
   uint32_t VAR_45 = VAR_13->min_feedback_div;
   uint32_t VAR_46 = VAR_13->max_feedback_div + 1;

   if (VAR_44 < VAR_13->pll_in_min || VAR_44 > VAR_13->pll_in_max)
    continue;

   while (VAR_45 < VAR_46) {
    uint32_t VAR_47;
    uint32_t VAR_48 = VAR_24;
    uint32_t VAR_49 = VAR_25 + 1;
    uint32_t VAR_50;
    uint64_t VAR_51;

    VAR_40 = (VAR_45 + VAR_46) / 2;

    VAR_51 = (uint64_t)VAR_13->reference_freq * VAR_40;
    VAR_47 = FUNC_2(VAR_51, VAR_39);

    if (VAR_47 < VAR_35) {
     VAR_45 = VAR_40 + 1;
     continue;
    } else if (VAR_47 > VAR_36) {
     VAR_46 = VAR_40;
     continue;
    }

    while (VAR_48 < VAR_49) {
     VAR_50 = (VAR_48 + VAR_49) / 2;
     VAR_51 = (uint64_t)VAR_13->reference_freq * 10000 * VAR_40;
     VAR_51 += (uint64_t)VAR_13->reference_freq * 1000 * VAR_50;
     VAR_41 = FUNC_2(VAR_51, VAR_39 * VAR_34);

     if (VAR_13->flags & VAR_3) {
      if (VAR_14 < VAR_41)
       VAR_42 = 0xffffffff;
      else
       VAR_42 = VAR_14 - VAR_41;
     } else
      VAR_42 = FUNC_1(VAR_41 - VAR_14);
     VAR_43 = FUNC_1(VAR_47 - VAR_26);

     if ((VAR_26 == 0 && VAR_42 < VAR_32) ||
         (VAR_26 != 0 &&
          ((VAR_32 > 100 && VAR_42 < VAR_32 - 100) ||
           (FUNC_1(VAR_42 - VAR_32) < 100 && VAR_43 < VAR_33)))) {
      VAR_27 = VAR_34;
      VAR_28 = VAR_39;
      VAR_29 = VAR_40;
      VAR_30 = VAR_50;
      VAR_31 = VAR_41;
      VAR_32 = VAR_42;
      VAR_33 = VAR_43;
     } else if (VAR_41 == VAR_14) {
      if (VAR_31 == -1) {
       VAR_27 = VAR_34;
       VAR_28 = VAR_39;
       VAR_29 = VAR_40;
       VAR_30 = VAR_50;
       VAR_31 = VAR_41;
       VAR_32 = VAR_42;
       VAR_33 = VAR_43;
      } else if (((VAR_13->flags & VAR_9) && (VAR_39 < VAR_28)) ||
          ((VAR_13->flags & VAR_6) && (VAR_39 > VAR_28)) ||
          ((VAR_13->flags & VAR_7) && (VAR_40 < VAR_29)) ||
          ((VAR_13->flags & VAR_4) && (VAR_40 > VAR_29)) ||
          ((VAR_13->flags & VAR_8) && (VAR_34 < VAR_27)) ||
          ((VAR_13->flags & VAR_5) && (VAR_34 > VAR_27))) {
       VAR_27 = VAR_34;
       VAR_28 = VAR_39;
       VAR_29 = VAR_40;
       VAR_30 = VAR_50;
       VAR_31 = VAR_41;
       VAR_32 = VAR_42;
       VAR_33 = VAR_43;
      }
     }
     if (VAR_41 < VAR_14)
      VAR_48 = VAR_50 + 1;
     else
      VAR_49 = VAR_50;
    }
    if (VAR_41 < VAR_14)
     VAR_45 = VAR_40 + 1;
    else
     VAR_46 = VAR_40;
   }
  }
 }

 *VAR_15 = VAR_31 / 10000;
 *VAR_16 = VAR_29;
 *VAR_17 = VAR_30;
 *VAR_18 = VAR_28;
 *VAR_19 = VAR_27;
 FUNC_0("%lld %d, pll dividers - fb: %d.%d ref: %d, post %d\n",
        (long long)VAR_14,
        VAR_31 / 1000, VAR_29, VAR_30,
        VAR_28, VAR_27);

}
