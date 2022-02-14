
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct intel_set_config {scalar_t__ mode_changed; scalar_t__ fb_changed; } ;
struct drm_mode_set {scalar_t__ num_connectors; TYPE_4__* fb; int y; int x; int * mode; TYPE_3__* crtc; } ;
struct drm_device {int dummy; } ;
struct TYPE_7__ {int id; } ;
struct TYPE_10__ {TYPE_1__ base; } ;
struct TYPE_8__ {int id; } ;
struct TYPE_9__ {TYPE_2__ base; TYPE_4__* fb; int y; int x; int mode; struct drm_device* dev; int helper_private; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct drm_device*,struct drm_mode_set*,struct intel_set_config*) ;
 int FUNC_5 (TYPE_3__*,int ,int ,TYPE_4__*) ;
 int FUNC_6 (struct drm_mode_set*,struct intel_set_config*) ;
 int FUNC_7 (struct intel_set_config*) ;
 int FUNC_8 (struct drm_device*,struct intel_set_config*) ;
 int FUNC_9 (struct drm_device*,struct intel_set_config*) ;
 int FUNC_10 (TYPE_3__*,int *,int ,int ,TYPE_4__*) ;
 struct intel_set_config* FUNC_11 (int,int ) ;

__attribute__((used)) static int FUNC_12(struct drm_mode_set *VAR_2)
{
 struct drm_device *VAR_3;
 struct drm_mode_set VAR_4;
 struct intel_set_config *VAR_5;
 int VAR_6;

 FUNC_0(!VAR_2);
 FUNC_0(!VAR_2->crtc);
 FUNC_0(!VAR_2->crtc->helper_private);


 FUNC_0(!VAR_2->mode && VAR_2->fb);
 FUNC_0(VAR_2->fb && VAR_2->num_connectors == 0);

 if (VAR_2->fb) {
  FUNC_1("[CRTC:%d] [FB:%d] #connectors=%d (x y) (%i %i)\n",
    VAR_2->crtc->base.id, VAR_2->fb->base.id,
    (int)VAR_2->num_connectors, VAR_2->x, VAR_2->y);
 } else {
  FUNC_1("[CRTC:%d] [NOFB]\n", VAR_2->crtc->base.id);
 }

 VAR_3 = VAR_2->crtc->dev;

 VAR_6 = -VAR_0;
 VAR_5 = FUNC_11(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  goto out_config;

 VAR_6 = FUNC_9(VAR_3, VAR_5);
 if (VAR_6)
  goto out_config;

 VAR_4.crtc = VAR_2->crtc;
 VAR_4.mode = &VAR_2->crtc->mode;
 VAR_4.x = VAR_2->crtc->x;
 VAR_4.y = VAR_2->crtc->y;
 VAR_4.fb = VAR_2->crtc->fb;





 FUNC_6(VAR_2, VAR_5);

 VAR_6 = FUNC_4(VAR_3, VAR_2, VAR_5);
 if (VAR_6)
  goto fail;

 if (VAR_5->mode_changed) {
  if (VAR_2->mode) {
   FUNC_1("attempting to set mode from"
     " userspace\n");
   FUNC_3(VAR_2->mode);
  }

  VAR_6 = FUNC_10(VAR_2->crtc, VAR_2->mode,
         VAR_2->x, VAR_2->y, VAR_2->fb);
  if (VAR_6) {
   FUNC_2("failed to set mode on [CRTC:%d], err = %d\n",
      VAR_2->crtc->base.id, VAR_6);
   goto fail;
  }
 } else if (VAR_5->fb_changed) {
  VAR_6 = FUNC_5(VAR_2->crtc,
       VAR_2->x, VAR_2->y, VAR_2->fb);
 }

 FUNC_7(VAR_5);

 return 0;

fail:
 FUNC_8(VAR_3, VAR_5);


 if (VAR_5->mode_changed &&
     FUNC_10(VAR_4.crtc, VAR_4.mode,
      VAR_4.x, VAR_4.y, VAR_4.fb))
  FUNC_2("failed to restore config after modeset failure\n");

out_config:
 FUNC_7(VAR_5);
 return VAR_6;
}
