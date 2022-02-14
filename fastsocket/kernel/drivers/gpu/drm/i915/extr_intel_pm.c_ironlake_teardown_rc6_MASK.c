
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* pwrctx; TYPE_2__* renderctx; } ;
struct drm_i915_private {TYPE_1__ ips; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct TYPE_4__ {int base; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(struct drm_device *VAR_0)
{
 struct drm_i915_private *VAR_1 = VAR_0->dev_private;

 if (VAR_1->ips.renderctx) {
  FUNC_1(VAR_1->ips.renderctx);
  FUNC_0(&VAR_1->ips.renderctx->base);
  VAR_1->ips.renderctx = ((void*)0);
 }

 if (VAR_1->ips.pwrctx) {
  FUNC_1(VAR_1->ips.pwrctx);
  FUNC_0(&VAR_1->ips.pwrctx->base);
  VAR_1->ips.pwrctx = ((void*)0);
 }
}
