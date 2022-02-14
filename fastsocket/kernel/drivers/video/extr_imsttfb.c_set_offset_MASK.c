
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imstt_par {int dc_regs; } ;
struct fb_var_screeninfo {int yoffset; int xoffset; int bits_per_pixel; } ;
struct TYPE_2__ {int line_length; } ;
struct fb_info {TYPE_1__ fix; struct imstt_par* par; } ;
typedef int __u32 ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static inline void
FUNC_1 (struct fb_var_screeninfo *VAR_1, struct fb_info *VAR_2)
{
 struct imstt_par *VAR_3 = VAR_2->par;
 __u32 VAR_4 = VAR_1->yoffset * (VAR_2->fix.line_length >> 3)
      + ((VAR_1->xoffset * (VAR_1->bits_per_pixel >> 3)) >> 3);
 FUNC_0(VAR_3->dc_regs, VAR_0, VAR_4);
}
