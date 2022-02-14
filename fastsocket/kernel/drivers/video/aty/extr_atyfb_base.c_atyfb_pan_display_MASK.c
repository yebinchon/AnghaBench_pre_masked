
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct fb_var_screeninfo {int xoffset; int yoffset; int activate; } ;
struct TYPE_4__ {int xoffset; int yoffset; } ;
struct fb_info {TYPE_1__ var; scalar_t__ par; } ;
struct TYPE_6__ {int h_tot_disp; int v_tot_disp; int gen_cntl; int vxres; int vyres; int off_pitch; } ;
struct TYPE_5__ {int pan_display; } ;
struct atyfb_par {TYPE_3__ crtc; TYPE_2__ vblank; scalar_t__ asleep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct atyfb_par*,int ) ;
 int FUNC_1 (int ,int ,struct atyfb_par*) ;
 int FUNC_2 (struct atyfb_par*,struct fb_info*) ;

__attribute__((used)) static int FUNC_3(struct fb_var_screeninfo *VAR_4,
        struct fb_info *VAR_5)
{
 struct atyfb_par *VAR_6 = (struct atyfb_par *) VAR_5->par;
 u32 VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_7 = (((VAR_6->crtc.h_tot_disp >> 16) & 0xff) + 1) * 8;
 VAR_8 = ((VAR_6->crtc.v_tot_disp >> 16) & 0x7ff) + 1;
 if (VAR_6->crtc.gen_cntl & VAR_0)
  VAR_8 >>= 1;
 VAR_9 = (VAR_4->xoffset + 7) & ~7;
 VAR_10 = VAR_4->yoffset;
 if (VAR_9 + VAR_7 > VAR_6->crtc.vxres ||
     VAR_10 + VAR_8 > VAR_6->crtc.vyres)
  return -VAR_2;
 VAR_5->var.xoffset = VAR_9;
 VAR_5->var.yoffset = VAR_10;
 if (VAR_6->asleep)
  return 0;

 FUNC_2(VAR_6, VAR_5);
 if ((VAR_4->activate & VAR_3) && !FUNC_0(VAR_6, 0)) {
  VAR_6->vblank.pan_display = 1;
 } else {
  VAR_6->vblank.pan_display = 0;
  FUNC_1(VAR_1, VAR_6->crtc.off_pitch, VAR_6);
 }

 return 0;
}
