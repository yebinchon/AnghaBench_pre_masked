
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_pll {int min_ref_div; int flags; int reference_div; int reference_freq; int max_ref_div; } ;


 int FUNC_0 (char*,int,int,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct radeon_pll*,int,int,int,int*,int*) ;
 int FUNC_2 (struct radeon_pll*,int) ;

void FUNC_3(struct radeon_pll *VAR_3,
         u32 VAR_4,
         u32 *VAR_5,
         u32 *VAR_6,
         u32 *VAR_7,
         u32 *VAR_8,
         u32 *VAR_9)
{
 u32 VAR_10 = VAR_4 / 10;
 u32 VAR_11 = FUNC_2(VAR_3, VAR_10);
 u32 VAR_12 = VAR_3->min_ref_div;
 u32 VAR_13 = 0, VAR_14 = 0, VAR_15;

 if (VAR_3->flags & VAR_2)
  VAR_12 = VAR_3->reference_div;

 if (VAR_3->flags & VAR_1) {
  FUNC_1(VAR_3, VAR_10, VAR_11, VAR_12, &VAR_13, &VAR_14);
  VAR_14 = (100 * VAR_14) / VAR_3->reference_freq;
  if (VAR_14 >= 5) {
   VAR_14 -= 5;
   VAR_14 = VAR_14 / 10;
   VAR_14++;
  }
  if (VAR_14 >= 10) {
   VAR_13++;
   VAR_14 = 0;
  }
 } else {
  while (VAR_12 <= VAR_3->max_ref_div) {
   FUNC_1(VAR_3, VAR_10, VAR_11, VAR_12,
      &VAR_13, &VAR_14);
   if (VAR_14 >= (VAR_3->reference_freq / 2))
    VAR_13++;
   VAR_14 = 0;
   VAR_15 = (VAR_3->reference_freq * VAR_13) / (VAR_11 * VAR_12);
   VAR_15 = (VAR_15 * 10000) / VAR_10;

   if (VAR_15 > (10000 + VAR_0))
    VAR_12++;
   else if (VAR_15 >= (10000 - VAR_0))
    break;
   else
    VAR_12++;
  }
 }

 *VAR_5 = ((VAR_3->reference_freq * VAR_13 * 10) + (VAR_3->reference_freq * VAR_14)) /
  (VAR_12 * VAR_11 * 10);
 *VAR_6 = VAR_13;
 *VAR_7 = VAR_14;
 *VAR_8 = VAR_12;
 *VAR_9 = VAR_11;
 FUNC_0("%d, pll dividers - fb: %d.%d ref: %d, post %d\n",
        *VAR_5, VAR_13, VAR_14, VAR_12, VAR_11);
}
