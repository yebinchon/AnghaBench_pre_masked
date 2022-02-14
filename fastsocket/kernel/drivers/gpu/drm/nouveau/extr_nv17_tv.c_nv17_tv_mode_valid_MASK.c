
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ vrefresh; } ;
struct drm_display_mode {int clock; scalar_t__ hdisplay; scalar_t__ vdisplay; int flags; } ;
struct TYPE_3__ {struct drm_display_mode mode; } ;
struct nv17_tv_norm_params {scalar_t__ kind; TYPE_2__ tv_enc_mode; TYPE_1__ ctv_enc_mode; } ;
struct drm_encoder {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int const FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct drm_display_mode*) ;
 struct nv17_tv_norm_params* FUNC_2 (struct drm_encoder*) ;

__attribute__((used)) static int FUNC_3(struct drm_encoder *VAR_9,
         struct drm_display_mode *VAR_10)
{
 struct nv17_tv_norm_params *VAR_11 = FUNC_2(VAR_9);

 if (VAR_11->kind == VAR_0) {
  struct drm_display_mode *VAR_12 =
      &VAR_11->ctv_enc_mode.mode;

  if (VAR_10->clock > 400000)
   return VAR_4;

  if (VAR_10->hdisplay > VAR_12->hdisplay ||
      VAR_10->vdisplay > VAR_12->vdisplay)
   return VAR_3;

  if ((VAR_10->flags & VAR_2) !=
      (VAR_12->flags & VAR_2))
   return VAR_6;

  if (VAR_10->flags & VAR_1)
   return VAR_5;

 } else {
  const int VAR_13 = 600;

  if (VAR_10->clock > 70000)
   return VAR_4;

  if (FUNC_0(FUNC_1(VAR_10) * 1000 -
   VAR_11->tv_enc_mode.vrefresh) > VAR_13)
   return VAR_8;


  if (VAR_10->flags & VAR_2)
   return VAR_6;
 }

 return VAR_7;
}
