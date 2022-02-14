
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tv_mode {int nbr_end; int progressive; } ;
struct intel_tv {int dummy; } ;
struct drm_display_mode {int vdisplay; int type; } ;
struct drm_connector {int dummy; } ;


 int VAR_0 ;
 struct intel_tv* FUNC_0 (struct drm_connector*) ;
 struct tv_mode* FUNC_1 (struct intel_tv*) ;

__attribute__((used)) static void
FUNC_2(struct drm_connector *VAR_1,
          struct drm_display_mode *VAR_2)
{
 struct intel_tv *VAR_3 = FUNC_0(VAR_1);
 const struct tv_mode *VAR_4 = FUNC_1(VAR_3);

 if (VAR_4->nbr_end < 480 && VAR_2->vdisplay == 480)
  VAR_2->type |= VAR_0;
 else if (VAR_4->nbr_end > 480) {
  if (VAR_4->progressive == 1 && VAR_4->nbr_end < 720) {
   if (VAR_2->vdisplay == 720)
    VAR_2->type |= VAR_0;
  } else if (VAR_2->vdisplay == 1080)
    VAR_2->type |= VAR_0;
 }
}
