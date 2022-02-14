
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long sm_addr; } ;
struct sm501fb_par {TYPE_1__ screen; struct sm501fb_info* info; } ;
struct sm501fb_info {scalar_t__ regs; } ;
struct fb_var_screeninfo {int bits_per_pixel; unsigned int xoffset; unsigned long yoffset; } ;
struct TYPE_4__ {unsigned long line_length; } ;
struct fb_info {TYPE_2__ fix; struct sm501fb_par* par; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct sm501fb_info*) ;
 int FUNC_2 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct fb_var_screeninfo *VAR_4,
      struct fb_info *VAR_5)
{
 struct sm501fb_par *VAR_6 = VAR_5->par;
 struct sm501fb_info *VAR_7 = VAR_6->info;
 unsigned int VAR_8 = VAR_4->bits_per_pixel / 8;
 unsigned long VAR_9;
 unsigned long VAR_10;

 VAR_10 = VAR_4->xoffset * VAR_8;

 VAR_9 = FUNC_0(VAR_7->regs + VAR_1);

 VAR_9 &= ~VAR_2;
 VAR_9 |= ((VAR_10 & 15) / VAR_8) << 4;
 FUNC_2(VAR_9, VAR_7->regs + VAR_1);

 VAR_9 = (VAR_6->screen.sm_addr + VAR_10 +
        VAR_4->yoffset * VAR_5->fix.line_length);
 FUNC_2(VAR_9 | VAR_0, VAR_7->regs + VAR_3);

 FUNC_1(VAR_7);
 return 0;
}
