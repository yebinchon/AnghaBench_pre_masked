
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; } ;
struct fb_var_screeninfo {int bits_per_pixel; TYPE_1__ green; } ;



__attribute__((used)) static inline int FUNC_0(const struct fb_var_screeninfo *VAR_0)
{
 if (VAR_0->bits_per_pixel != 16)
  return VAR_0->bits_per_pixel;
 return (VAR_0->green.length == 5) ? 15 : 16;
}
