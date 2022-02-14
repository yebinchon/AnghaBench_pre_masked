
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int pch_pf_pos; int pch_pf_size; } ;
struct drm_display_mode {scalar_t__ hdisplay; scalar_t__ vdisplay; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;






void
FUNC_0(struct drm_device *VAR_0,
   int VAR_1,
   const struct drm_display_mode *VAR_2,
   struct drm_display_mode *VAR_3)
{
 struct drm_i915_private *VAR_4 = VAR_0->dev_private;
 int VAR_5, VAR_6, VAR_7, VAR_8;

 VAR_5 = VAR_6 = VAR_7 = VAR_8 = 0;


 if (VAR_3->hdisplay == VAR_2->hdisplay &&
     VAR_3->vdisplay == VAR_2->vdisplay)
  goto done;

 switch (VAR_1) {
 case 129:
  VAR_7 = VAR_2->hdisplay;
  VAR_8 = VAR_2->vdisplay;
  VAR_5 = (VAR_3->hdisplay - VAR_7 + 1)/2;
  VAR_6 = (VAR_3->vdisplay - VAR_8 + 1)/2;
  break;

 case 130:

  {
   u32 VAR_9 = VAR_3->hdisplay * VAR_2->vdisplay;
   u32 VAR_10 = VAR_2->hdisplay * VAR_3->vdisplay;
   if (VAR_9 > VAR_10) {
    VAR_7 = VAR_10 / VAR_2->vdisplay;
    if (VAR_7 & 1)
     VAR_7++;
    VAR_5 = (VAR_3->hdisplay - VAR_7 + 1) / 2;
    VAR_6 = 0;
    VAR_8 = VAR_3->vdisplay;
   } else if (VAR_9 < VAR_10) {
    VAR_8 = VAR_9 / VAR_2->hdisplay;
    if (VAR_8 & 1)
        VAR_8++;
    VAR_6 = (VAR_3->vdisplay - VAR_8 + 1) / 2;
    VAR_5 = 0;
    VAR_7 = VAR_3->hdisplay;
   } else {
    VAR_5 = VAR_6 = 0;
    VAR_7 = VAR_3->hdisplay;
    VAR_8 = VAR_3->vdisplay;
   }
  }
  break;

 default:
 case 128:
  VAR_5 = VAR_6 = 0;
  VAR_7 = VAR_3->hdisplay;
  VAR_8 = VAR_3->vdisplay;
  break;
 }

done:
 VAR_4->pch_pf_pos = (VAR_5 << 16) | VAR_6;
 VAR_4->pch_pf_size = (VAR_7 << 16) | VAR_8;
}
