
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mode_registers {int bpp24_133; int bpp16_133; int bpp8_133; int bpp24_100; int bpp16_100; int bpp8_100; } ;
struct i810fb_par {int mem_freq; struct mode_registers regs; } ;
struct fb_var_screeninfo {int bits_per_pixel; } ;



u32 FUNC_0(struct fb_var_screeninfo *VAR_0,
         struct i810fb_par *VAR_1)
{
 struct mode_registers *VAR_2 = &VAR_1->regs;
 u32 VAR_3 = 0;

 if (VAR_1->mem_freq == 100) {
  switch (VAR_0->bits_per_pixel) {
  case 8:
   VAR_3 = VAR_2->bpp8_100;
   break;
  case 16:
   VAR_3 = VAR_2->bpp16_100;
   break;
  case 24:
  case 32:
   VAR_3 = VAR_2->bpp24_100;
  }
 } else {
  switch (VAR_0->bits_per_pixel) {
  case 8:
   VAR_3 = VAR_2->bpp8_133;
   break;
  case 16:
   VAR_3 = VAR_2->bpp16_133;
   break;
  case 24:
  case 32:
   VAR_3 = VAR_2->bpp24_133;
  }
 }
 return VAR_3;
}
