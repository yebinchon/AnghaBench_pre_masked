
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct intel_crtc {int pipe; } ;
struct drm_i915_master_private {TYPE_1__* sarea_priv; } ;
struct drm_device {TYPE_3__* primary; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct TYPE_6__ {TYPE_2__* master; } ;
struct TYPE_5__ {struct drm_i915_master_private* driver_priv; } ;
struct TYPE_4__ {int pipeA_x; int pipeA_y; int pipeB_x; int pipeB_y; } ;


 struct intel_crtc* FUNC_0 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_1(struct drm_crtc *VAR_0, int VAR_1, int VAR_2)
{
 struct drm_device *VAR_3 = VAR_0->dev;
 struct drm_i915_master_private *VAR_4;
 struct intel_crtc *VAR_5 = FUNC_0(VAR_0);

 if (!VAR_3->primary->master)
  return;

 VAR_4 = VAR_3->primary->master->driver_priv;
 if (!VAR_4->sarea_priv)
  return;

 switch (VAR_5->pipe) {
 case 0:
  VAR_4->sarea_priv->pipeA_x = VAR_1;
  VAR_4->sarea_priv->pipeA_y = VAR_2;
  break;
 case 1:
  VAR_4->sarea_priv->pipeB_x = VAR_1;
  VAR_4->sarea_priv->pipeB_y = VAR_2;
  break;
 default:
  break;
 }
}
