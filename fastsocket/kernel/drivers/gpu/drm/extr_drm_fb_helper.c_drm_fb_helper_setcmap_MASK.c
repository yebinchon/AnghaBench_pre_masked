
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct fb_info {struct drm_fb_helper* par; } ;
struct fb_cmap {int* red; int* green; int* blue; int* transp; int start; int len; } ;
struct drm_fb_helper {int crtc_count; TYPE_2__* crtc_info; } ;
struct drm_crtc_helper_funcs {int (* load_lut ) (struct drm_crtc*) ;} ;
struct drm_crtc {struct drm_crtc_helper_funcs* helper_private; } ;
struct TYPE_3__ {struct drm_crtc* crtc; } ;
struct TYPE_4__ {TYPE_1__ mode_set; } ;


 int FUNC_0 (struct drm_crtc*,int,int,int,int ,struct fb_info*) ;
 int FUNC_1 (struct drm_crtc*) ;

int FUNC_2(struct fb_cmap *VAR_0, struct fb_info *VAR_1)
{
 struct drm_fb_helper *VAR_2 = VAR_1->par;
 struct drm_crtc_helper_funcs *VAR_3;
 u16 *VAR_4, *VAR_5, *VAR_6, *VAR_7;
 struct drm_crtc *VAR_8;
 int VAR_9, VAR_10, VAR_11 = 0;
 int VAR_12;

 for (VAR_9 = 0; VAR_9 < VAR_2->crtc_count; VAR_9++) {
  VAR_8 = VAR_2->crtc_info[VAR_9].mode_set.crtc;
  VAR_3 = VAR_8->helper_private;

  VAR_4 = VAR_0->red;
  VAR_5 = VAR_0->green;
  VAR_6 = VAR_0->blue;
  VAR_7 = VAR_0->transp;
  VAR_12 = VAR_0->start;

  for (VAR_10 = 0; VAR_10 < VAR_0->len; VAR_10++) {
   u16 VAR_13, VAR_14, VAR_15, VAR_16 = 0xffff;

   VAR_13 = *VAR_4++;
   VAR_14 = *VAR_5++;
   VAR_15 = *VAR_6++;

   if (VAR_7)
    VAR_16 = *VAR_7++;

   VAR_11 = FUNC_0(VAR_8, VAR_13, VAR_14, VAR_15, VAR_12++, VAR_1);
   if (VAR_11)
    return VAR_11;
  }
  VAR_3->load_lut(VAR_8);
 }
 return VAR_11;
}
