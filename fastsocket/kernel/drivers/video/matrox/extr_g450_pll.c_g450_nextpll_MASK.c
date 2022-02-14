
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct matrox_pll_limits {unsigned int vcomin; } ;
struct TYPE_3__ {unsigned int ref_freq; } ;
struct TYPE_4__ {TYPE_1__ pll; } ;
struct matrox_fb_info {TYPE_2__ features; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(const struct matrox_fb_info *VAR_1,
     const struct matrox_pll_limits *VAR_2,
     unsigned int *VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5, VAR_6, VAR_7;
 unsigned int VAR_8 = *VAR_3;

 VAR_5 = (VAR_4 >> 16) & 0xFF;
 VAR_7 = VAR_4 & 0xFF;

 do {
  if (VAR_5 == 0 || VAR_5 == 0xFF) {
   if (VAR_5 == 0) {
    if (VAR_7 & 0x40) {
     return VAR_0;
    }
           if (VAR_7 & 3) {
     VAR_7--;
    } else {
     VAR_7 = 0x40;
    }
    VAR_8 >>= 1;
    if (VAR_8 < VAR_2->vcomin) {
     return VAR_0;
    }
    *VAR_3 = VAR_8;
   }

   VAR_7 &= 0x43;
   if (VAR_8 < 550000) {

   } else if (VAR_8 < 700000) {
    VAR_7 |= 0x08;
   } else if (VAR_8 < 1000000) {
    VAR_7 |= 0x10;
   } else if (VAR_8 < 1150000) {
    VAR_7 |= 0x18;
   } else {
    VAR_7 |= 0x20;
   }
   VAR_5 = 9;
  } else {
   VAR_5--;
  }
  VAR_6 = ((VAR_8 * (VAR_5+1) + VAR_1->features.pll.ref_freq) / (VAR_1->features.pll.ref_freq * 2)) - 2;
 } while (VAR_6 < 0x03 || VAR_6 > 0x7A);
 return (VAR_5 << 16) | (VAR_6 << 8) | VAR_7;
}
