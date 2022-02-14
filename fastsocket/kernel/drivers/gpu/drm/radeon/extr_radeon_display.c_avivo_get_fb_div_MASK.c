
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_pll {int reference_freq; int max_feedback_div; int min_feedback_div; } ;



__attribute__((used)) static void FUNC_0(struct radeon_pll *VAR_0,
        u32 VAR_1,
        u32 VAR_2,
        u32 VAR_3,
        u32 *VAR_4,
        u32 *VAR_5)
{
 u32 VAR_6 = VAR_2 * VAR_3;

 VAR_6 *= VAR_1;
 *VAR_4 = VAR_6 / VAR_0->reference_freq;
 *VAR_5 = VAR_6 % VAR_0->reference_freq;

        if (*VAR_4 > VAR_0->max_feedback_div)
  *VAR_4 = VAR_0->max_feedback_div;
        else if (*VAR_4 < VAR_0->min_feedback_div)
                *VAR_4 = VAR_0->min_feedback_div;
}
