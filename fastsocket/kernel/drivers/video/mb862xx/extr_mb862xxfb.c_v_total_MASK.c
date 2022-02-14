
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_var_screeninfo {int yres; int upper_margin; int lower_margin; int vsync_len; } ;



__attribute__((used)) static inline int FUNC_0(struct fb_var_screeninfo *VAR_0)
{
 return VAR_0->yres + VAR_0->upper_margin +
  VAR_0->lower_margin + VAR_0->vsync_len;
}
