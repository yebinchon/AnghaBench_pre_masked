
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int program_bits; int post_divider; int period_in_ps; scalar_t__ locationAddr; } ;
union aty_pll {TYPE_1__ ics2595; } ;
typedef int u32 ;
struct fb_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_0(const struct fb_info *VAR_8, u32 VAR_9,
    u32 VAR_10, union aty_pll *VAR_11)
{
 u32 VAR_12;
 u32 VAR_13;
 u32 VAR_14;


 VAR_12 = 100000000 / VAR_9;

 VAR_13 = -1;
 VAR_14 = 1;

 if (VAR_12 > VAR_2) {
  VAR_12 = VAR_2;
  return -VAR_1;
 } else if (VAR_12 < VAR_0) {
  VAR_13 = 0;
  return -VAR_1;
 } else {
  while (VAR_12 < VAR_3) {
   VAR_12 *= 2;
   VAR_14 *= 2;
  }
 }
 VAR_12 *= 1000;
 VAR_12 = (VAR_5 * VAR_12) / VAR_6;

 VAR_12 += 500;
 VAR_12 /= 1000;

 if (VAR_13 == -1) {
  VAR_13 = VAR_12 - VAR_4;
  switch (VAR_14) {
  case 1:
   VAR_13 |= 0x0600;
   break;
  case 2:
   VAR_13 |= 0x0400;
   break;
  case 4:
   VAR_13 |= 0x0200;
   break;
  case 8:
  default:
   break;
  }
 }

 VAR_13 |= VAR_7;

 VAR_11->ics2595.program_bits = VAR_13;
 VAR_11->ics2595.locationAddr = 0;
 VAR_11->ics2595.post_divider = VAR_14;
 VAR_11->ics2595.period_in_ps = VAR_9;

 return 0;
}
