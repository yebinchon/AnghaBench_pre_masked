
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mfb_info {int y_aoi_d; int x_aoi_d; struct diu_ad* ad; } ;
struct fb_var_screeninfo {int yoffset; int xoffset; } ;
struct fb_info {struct mfb_info* par; struct fb_var_screeninfo var; } ;
struct diu_ad {void* offset_xyd; void* offset_xyi; } ;


 void* FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct fb_info *VAR_0)
{
 struct fb_var_screeninfo *VAR_1 = &VAR_0->var;
 struct mfb_info *VAR_2 = VAR_0->par;
 struct diu_ad *VAR_3 = VAR_2->ad;


 VAR_3->offset_xyi = FUNC_0((VAR_1->yoffset << 16) | VAR_1->xoffset);
 VAR_3->offset_xyd = FUNC_0((VAR_2->y_aoi_d << 16) | VAR_2->x_aoi_d);
 return 0;
}
