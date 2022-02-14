
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_encoder {int dummy; } ;
struct drm_display_mode {scalar_t__ hdisplay; scalar_t__ vdisplay; scalar_t__ vtotal; scalar_t__ htotal; scalar_t__ clock; } ;
struct ch7006_priv {int norm; } ;
struct TYPE_2__ {scalar_t__ clock; scalar_t__ hdisplay; scalar_t__ vdisplay; scalar_t__ vtotal; scalar_t__ htotal; } ;
struct ch7006_mode {int valid_norms; TYPE_1__ mode; } ;


 struct ch7006_mode* VAR_0 ;
 struct ch7006_priv* FUNC_0 (struct drm_encoder*) ;

struct ch7006_mode *FUNC_1(struct drm_encoder *VAR_1,
           const struct drm_display_mode *VAR_2)
{
 struct ch7006_priv *VAR_3 = FUNC_0(VAR_1);
 struct ch7006_mode *VAR_4;

 for (VAR_4 = VAR_0; VAR_4->mode.clock; VAR_4++) {

  if (~VAR_4->valid_norms & 1<<VAR_3->norm)
   continue;

  if (VAR_4->mode.hdisplay != VAR_2->hdisplay ||
      VAR_4->mode.vdisplay != VAR_2->vdisplay ||
      VAR_4->mode.vtotal != VAR_2->vtotal ||
      VAR_4->mode.htotal != VAR_2->htotal ||
      VAR_4->mode.clock != VAR_2->clock)
   continue;

  return VAR_4;
 }

 return ((void*)0);
}
