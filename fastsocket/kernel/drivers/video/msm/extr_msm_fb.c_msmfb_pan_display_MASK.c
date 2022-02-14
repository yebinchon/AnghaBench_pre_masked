
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msmfb_info {struct msm_panel_data* panel; } ;
struct msm_panel_data {int caps; } ;
struct fb_var_screeninfo {int* reserved; int yoffset; } ;
struct TYPE_2__ {int xres; int yres; } ;
struct fb_info {TYPE_1__ var; struct msmfb_info* par; } ;


 int VAR_0 ;
 int FUNC_0 (struct fb_info*,int,int,int,int,int ,int) ;

int FUNC_1(struct fb_var_screeninfo *VAR_1, struct fb_info *VAR_2)
{
 struct msmfb_info *VAR_3 = VAR_2->par;
 struct msm_panel_data *VAR_4 = VAR_3->panel;


 if ((VAR_4->caps & VAR_0) &&
     (VAR_1->reserved[0] == 0x54445055)) {
  FUNC_0(VAR_2, VAR_1->reserved[1] & 0xffff,
     VAR_1->reserved[1] >> 16,
     VAR_1->reserved[2] & 0xffff,
     VAR_1->reserved[2] >> 16, VAR_1->yoffset, 1);
 } else {
  FUNC_0(VAR_2, 0, 0, VAR_2->var.xres, VAR_2->var.yres,
     VAR_1->yoffset, 1);
 }
 return 0;
}
