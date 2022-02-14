
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct intel_load_detect_pipe {scalar_t__ dpms_mode; scalar_t__ release_fb; scalar_t__ load_detect_temp; } ;
struct TYPE_6__ {int id; } ;
struct drm_encoder {TYPE_2__ base; struct drm_crtc* crtc; } ;
struct intel_encoder {int * new_crtc; struct drm_encoder base; } ;
struct drm_crtc {int mutex; } ;
struct TYPE_5__ {int id; } ;
struct drm_connector {TYPE_3__* funcs; TYPE_1__ base; } ;
struct TYPE_8__ {int * new_encoder; } ;
struct TYPE_7__ {int (* dpms ) (struct drm_connector*,scalar_t__) ;} ;


 int FUNC_0 (char*,int ,int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct drm_connector*) ;
 int FUNC_4 (struct drm_encoder*) ;
 struct intel_encoder* FUNC_5 (struct drm_connector*) ;
 int FUNC_6 (struct drm_crtc*,int *,int ,int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct drm_connector*,scalar_t__) ;
 TYPE_4__* FUNC_9 (struct drm_connector*) ;

void FUNC_10(struct drm_connector *VAR_1,
        struct intel_load_detect_pipe *VAR_2)
{
 struct intel_encoder *VAR_3 =
  FUNC_5(VAR_1);
 struct drm_encoder *VAR_4 = &VAR_3->base;
 struct drm_crtc *VAR_5 = VAR_4->crtc;

 FUNC_0("[CONNECTOR:%d:%s], [ENCODER:%d:%s]\n",
        VAR_1->base.id, FUNC_3(VAR_1),
        VAR_4->base.id, FUNC_4(VAR_4));

 if (VAR_2->load_detect_temp) {
  FUNC_9(VAR_1)->new_encoder = ((void*)0);
  VAR_3->new_crtc = ((void*)0);
  FUNC_6(VAR_5, ((void*)0), 0, 0, ((void*)0));

  if (VAR_2->release_fb) {
   FUNC_2(VAR_2->release_fb);
   FUNC_1(VAR_2->release_fb);
  }

  FUNC_7(&VAR_5->mutex);
  return;
 }


 if (VAR_2->dpms_mode != VAR_0)
  VAR_1->funcs->dpms(VAR_1, VAR_2->dpms_mode);

 FUNC_7(&VAR_5->mutex);
}
