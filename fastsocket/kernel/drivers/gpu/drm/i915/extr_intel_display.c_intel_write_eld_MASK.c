
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int (* write_eld ) (struct drm_connector*,struct drm_crtc*) ;} ;
struct drm_i915_private {TYPE_3__ display; } ;
struct drm_encoder {struct drm_device* dev; struct drm_crtc* crtc; } ;
struct drm_display_mode {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct drm_crtc {int dummy; } ;
struct TYPE_5__ {int id; } ;
struct drm_connector {int* eld; TYPE_4__* encoder; TYPE_1__ base; } ;
struct TYPE_6__ {int id; } ;
struct TYPE_8__ {TYPE_2__ base; } ;


 int FUNC_0 (char*,int ,int ,int ,int ) ;
 int FUNC_1 (struct drm_connector*,struct drm_display_mode*) ;
 int FUNC_2 (struct drm_connector*) ;
 int FUNC_3 (TYPE_4__*) ;
 struct drm_connector* FUNC_4 (struct drm_encoder*,struct drm_display_mode*) ;
 int FUNC_5 (struct drm_connector*,struct drm_crtc*) ;

void FUNC_6(struct drm_encoder *VAR_0,
       struct drm_display_mode *VAR_1)
{
 struct drm_crtc *VAR_2 = VAR_0->crtc;
 struct drm_connector *VAR_3;
 struct drm_device *VAR_4 = VAR_0->dev;
 struct drm_i915_private *VAR_5 = VAR_4->dev_private;

 VAR_3 = FUNC_4(VAR_0, VAR_1);
 if (!VAR_3)
  return;

 FUNC_0("ELD on [CONNECTOR:%d:%s], [ENCODER:%d:%s]\n",
    VAR_3->base.id,
    FUNC_2(VAR_3),
    VAR_3->encoder->base.id,
    FUNC_3(VAR_3->encoder));

 VAR_3->eld[6] = FUNC_1(VAR_3, VAR_1) / 2;

 if (VAR_5->display.write_eld)
  VAR_5->display.write_eld(VAR_3, VAR_2);
}
