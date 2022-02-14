
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fb_var_screeninfo {int xoffset; int yoffset; } ;
struct TYPE_3__ {int xres_virtual; int bits_per_pixel; } ;
struct fb_info {TYPE_1__ var; scalar_t__ par; } ;
struct atafb_par {scalar_t__ screen_base; } ;
struct TYPE_4__ {int (* set_screen_base ) (scalar_t__) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct fb_var_screeninfo *VAR_4, struct fb_info *VAR_5)
{
 struct atafb_par *VAR_6 = (struct atafb_par *)VAR_5->par;

 if (!VAR_2->set_screen_base ||
     (!FUNC_0(VAR_1) && VAR_4->xoffset))
  return -VAR_0;
 VAR_4->xoffset = FUNC_2(VAR_4->xoffset, 16);
 VAR_6->screen_base = VAR_3 +
         (VAR_4->yoffset * VAR_5->var.xres_virtual + VAR_4->xoffset)
         * VAR_5->var.bits_per_pixel / 8;
 VAR_2->set_screen_base(VAR_6->screen_base);
 return 0;
}
