
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vrefresh; scalar_t__ hdisplay; scalar_t__ vdisplay; } ;
struct nv17_tv_norm_params {TYPE_1__ tv_enc_mode; } ;
struct drm_encoder {int dev; } ;
struct drm_display_mode {scalar_t__ hdisplay; int clock; int htotal; int vtotal; int flags; scalar_t__ vdisplay; int type; } ;
struct drm_connector {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct drm_display_mode* FUNC_0 (int ,struct drm_display_mode const*) ;
 int FUNC_1 (struct drm_connector*,struct drm_display_mode*) ;
 struct nv17_tv_norm_params* FUNC_2 (struct drm_encoder*) ;
 struct drm_display_mode* VAR_2 ;

__attribute__((used)) static int FUNC_3(struct drm_encoder *VAR_3,
    struct drm_connector *VAR_4)
{
 struct nv17_tv_norm_params *VAR_5 = FUNC_2(VAR_3);
 const struct drm_display_mode *VAR_6;
 int VAR_7 = 0;

 for (VAR_6 = VAR_2; VAR_6->hdisplay; VAR_6++) {
  struct drm_display_mode *VAR_8;

  VAR_8 = FUNC_0(VAR_3->dev, VAR_6);

  VAR_8->clock = VAR_5->tv_enc_mode.vrefresh *
   VAR_8->htotal / 1000 *
   VAR_8->vtotal / 1000;

  if (VAR_8->flags & VAR_0)
   VAR_8->clock *= 2;

  if (VAR_8->hdisplay == VAR_5->tv_enc_mode.hdisplay &&
      VAR_8->vdisplay == VAR_5->tv_enc_mode.vdisplay)
   VAR_8->type |= VAR_1;

  FUNC_1(VAR_4, VAR_8);
  VAR_7++;
 }

 return VAR_7;
}
