
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nouveau_encoder {TYPE_3__* dcb; } ;
struct TYPE_6__ {scalar_t__ fp_no_ddc; } ;
struct nouveau_drm {TYPE_2__ vbios; } ;
struct nouveau_connector {scalar_t__ type; struct drm_display_mode* native_mode; scalar_t__ edid; struct nouveau_encoder* detected_encoder; } ;
struct drm_encoder {int dummy; } ;
struct drm_display_mode {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_connector {scalar_t__ connector_type; struct drm_device* dev; } ;
struct TYPE_8__ {int (* get_modes ) (struct drm_encoder*,struct drm_connector*) ;} ;
struct TYPE_5__ {scalar_t__ use_straps_for_mode; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_1__ lvdsconf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct drm_connector*,scalar_t__) ;
 int FUNC_1 (struct drm_device*,struct drm_display_mode*) ;
 void* FUNC_2 (struct drm_device*,struct drm_display_mode*) ;
 int FUNC_3 (struct drm_connector*,struct drm_display_mode*) ;
 TYPE_4__* FUNC_4 (struct drm_encoder*) ;
 scalar_t__ FUNC_5 (struct drm_device*,struct drm_display_mode*) ;
 struct nouveau_connector* FUNC_6 (struct drm_connector*) ;
 int FUNC_7 (struct drm_connector*) ;
 struct drm_display_mode* FUNC_8 (struct drm_connector*) ;
 scalar_t__ FUNC_9 (struct drm_connector*) ;
 struct nouveau_drm* FUNC_10 (struct drm_device*) ;
 int FUNC_11 (struct drm_encoder*,struct drm_connector*) ;
 struct drm_encoder* FUNC_12 (struct nouveau_encoder*) ;

__attribute__((used)) static int
FUNC_13(struct drm_connector *VAR_6)
{
 struct drm_device *VAR_7 = VAR_6->dev;
 struct nouveau_drm *VAR_8 = FUNC_10(VAR_7);
 struct nouveau_connector *VAR_9 = FUNC_6(VAR_6);
 struct nouveau_encoder *VAR_10 = VAR_9->detected_encoder;
 struct drm_encoder *VAR_11 = FUNC_12(VAR_10);
 int VAR_12 = 0;



 if (VAR_9->native_mode) {
  FUNC_1(VAR_7, VAR_9->native_mode);
  VAR_9->native_mode = ((void*)0);
 }

 if (VAR_9->edid)
  VAR_12 = FUNC_0(VAR_6, VAR_9->edid);
 else
 if (VAR_10->dcb->type == VAR_3 &&
     (VAR_10->dcb->lvdsconf.use_straps_for_mode ||
      VAR_8->vbios.fp_no_ddc) && FUNC_5(VAR_7, ((void*)0))) {
  struct drm_display_mode VAR_13;

  FUNC_5(VAR_7, &VAR_13);
  VAR_9->native_mode = FUNC_2(VAR_7, &VAR_13);
 }




 if (VAR_6->connector_type != VAR_5)
  FUNC_7(VAR_6);





 if (!VAR_9->native_mode)
  VAR_9->native_mode =
   FUNC_8(VAR_6);
 if (VAR_12 == 0 && VAR_9->native_mode) {
  struct drm_display_mode *VAR_14;

  VAR_14 = FUNC_2(VAR_7, VAR_9->native_mode);
  FUNC_3(VAR_6, VAR_14);
  VAR_12 = 1;
 }





 if (VAR_6->connector_type == VAR_5)
  FUNC_7(VAR_6);

 if (VAR_10->dcb->type == VAR_4)
  VAR_12 = FUNC_4(VAR_11)->get_modes(VAR_11, VAR_6);

 if (VAR_9->type == VAR_0 ||
     VAR_9->type == VAR_1 ||
     VAR_9->type == VAR_2)
  VAR_12 += FUNC_9(VAR_6);

 return VAR_12;
}
