
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int program_bits; int period_in_ps; scalar_t__ post_divider; scalar_t__ locationAddr; } ;
union aty_pll {TYPE_1__ ics2595; } ;
typedef int u32 ;
typedef int u16 ;
struct fb_info {int dummy; } ;
typedef int save_m ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_0(const struct fb_info *VAR_7, u32 VAR_8,
          u32 VAR_9, union aty_pll *VAR_10)
{
 u32 VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;

 u32 VAR_17;
 u32 VAR_18;

 u32 VAR_19, VAR_20, VAR_21;
 u16 VAR_22, VAR_23, VAR_24 = 0, VAR_25, VAR_26, VAR_27;


 VAR_17 = 100000000 / VAR_8;
 VAR_19 = VAR_3;
 VAR_20 = VAR_0;
 VAR_21 = VAR_6;

 VAR_25 = 0;
 VAR_26 = 0;


 if (VAR_17 == 0)
  VAR_18 = 0xE0;
 else {
  if (VAR_17 < VAR_19)
   VAR_17 = VAR_19;
  if (VAR_17 > VAR_20)
   VAR_17 = VAR_20;

  VAR_14 = VAR_17 * 256 / 100;

  while (VAR_17 < (VAR_19 << 3)) {
   VAR_17 <<= 1;
   VAR_24++;
  }

  VAR_27 = 1 << VAR_24;
  VAR_15 = 0;
  VAR_16 = 0xFFFFFFFF;

  for (VAR_22 = VAR_4; VAR_22 <= VAR_1; VAR_22++) {
   for (VAR_23 = VAR_5; VAR_23 <= VAR_2; VAR_23++) {
    VAR_11 = 938356;
    VAR_11 *= (VAR_23 + 8);
    VAR_12 = VAR_27 * 256;
    VAR_12 *= (VAR_22 + 2);
    VAR_13 = VAR_11 / VAR_12;

    if (VAR_14 > VAR_13)
     VAR_15 = VAR_14 - VAR_13;
    else
     VAR_15 = VAR_13 - VAR_14;

    if (VAR_15 < VAR_16) {
     VAR_25 = VAR_22;
     VAR_26 = VAR_23;
     VAR_16 = VAR_15;
    }
   }
  }

  VAR_18 = (VAR_24 << 6) + (VAR_25) + (VAR_26 << 8);
 }

 VAR_10->ics2595.program_bits = VAR_18;
 VAR_10->ics2595.locationAddr = 0;
 VAR_10->ics2595.post_divider = 0;
 VAR_10->ics2595.period_in_ps = VAR_8;

 return 0;
}
