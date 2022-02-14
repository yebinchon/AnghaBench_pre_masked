
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct wm_info {size_t freq; size_t wm; } ;
struct i810fb_par {int mem_freq; } ;
struct fb_var_screeninfo {int bits_per_pixel; int pixclock; } ;


 size_t FUNC_0 (struct wm_info*) ;
 struct wm_info* VAR_0 ;
 struct wm_info* VAR_1 ;
 struct wm_info* VAR_2 ;
 struct wm_info* VAR_3 ;
 struct wm_info* VAR_4 ;
 struct wm_info* VAR_5 ;

u32 FUNC_1(const struct fb_var_screeninfo *VAR_6,
         struct i810fb_par *VAR_7)
{
 struct wm_info *VAR_8 = ((void*)0);
 u32 VAR_9, VAR_10 = 0, VAR_11, VAR_12 = 0, VAR_13, VAR_14;

 if (VAR_7->mem_freq == 100) {
  switch (VAR_6->bits_per_pixel) {
  case 8:
   VAR_8 = VAR_4;
   VAR_10 = FUNC_0(VAR_4);
   break;
  case 16:
   VAR_8 = VAR_0;
   VAR_10 = FUNC_0(VAR_0);
   break;
  case 24:
  case 32:
   VAR_8 = VAR_2;
   VAR_10 = FUNC_0(VAR_2);
  }
 } else {
  switch(VAR_6->bits_per_pixel) {
  case 8:
   VAR_8 = VAR_5;
   VAR_10 = FUNC_0(VAR_5);
   break;
  case 16:
   VAR_8 = VAR_1;
   VAR_10 = FUNC_0(VAR_1);
   break;
  case 24:
  case 32:
   VAR_8 = VAR_3;
   VAR_10 = FUNC_0(VAR_3);
  }
 }

 VAR_11 = 1000000/VAR_6->pixclock;
 VAR_13 = ~0;
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  if (VAR_11 <= VAR_8[VAR_9].freq)
   VAR_14 = VAR_8[VAR_9].freq - VAR_11;
  else
   VAR_14 = VAR_11 - VAR_8[VAR_9].freq;
  if (VAR_14 < VAR_13) {
   VAR_12 = VAR_8[VAR_9].wm;
   VAR_13 = VAR_14;
  }
 }
 return VAR_12;
}
