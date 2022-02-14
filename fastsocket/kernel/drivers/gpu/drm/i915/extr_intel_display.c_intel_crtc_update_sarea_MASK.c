
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct intel_crtc {int pipe; } ;
struct drm_i915_master_private {TYPE_3__* sarea_priv; } ;
struct drm_device {TYPE_2__* primary; } ;
struct TYPE_8__ {int vdisplay; int hdisplay; } ;
struct drm_crtc {TYPE_4__ mode; struct drm_device* dev; } ;
struct TYPE_7__ {int pipeB_h; int pipeB_w; int pipeA_h; int pipeA_w; } ;
struct TYPE_6__ {TYPE_1__* master; } ;
struct TYPE_5__ {struct drm_i915_master_private* driver_priv; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int) ;
 struct intel_crtc* FUNC_2 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_3(struct drm_crtc *VAR_0,
        bool VAR_1)
{
 struct drm_device *VAR_2 = VAR_0->dev;
 struct drm_i915_master_private *VAR_3;
 struct intel_crtc *VAR_4 = FUNC_2(VAR_0);
 int VAR_5 = VAR_4->pipe;

 if (!VAR_2->primary->master)
  return;

 VAR_3 = VAR_2->primary->master->driver_priv;
 if (!VAR_3->sarea_priv)
  return;

 switch (VAR_5) {
 case 0:
  VAR_3->sarea_priv->pipeA_w = VAR_1 ? VAR_0->mode.hdisplay : 0;
  VAR_3->sarea_priv->pipeA_h = VAR_1 ? VAR_0->mode.vdisplay : 0;
  break;
 case 1:
  VAR_3->sarea_priv->pipeB_w = VAR_1 ? VAR_0->mode.hdisplay : 0;
  VAR_3->sarea_priv->pipeB_h = VAR_1 ? VAR_0->mode.vdisplay : 0;
  break;
 default:
  FUNC_0("Can't update pipe %c in SAREA\n", FUNC_1(VAR_5));
  break;
 }
}
