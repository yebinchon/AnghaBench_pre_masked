
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * pwrctx; int * renderctx; } ;
struct drm_i915_private {TYPE_1__ ips; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int VAR_0 ;
 void* FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*) ;

__attribute__((used)) static int FUNC_2(struct drm_device *VAR_1)
{
 struct drm_i915_private *VAR_2 = VAR_1->dev_private;

 if (VAR_2->ips.renderctx == ((void*)0))
  VAR_2->ips.renderctx = FUNC_0(VAR_1);
 if (!VAR_2->ips.renderctx)
  return -VAR_0;

 if (VAR_2->ips.pwrctx == ((void*)0))
  VAR_2->ips.pwrctx = FUNC_0(VAR_1);
 if (!VAR_2->ips.pwrctx) {
  FUNC_1(VAR_1);
  return -VAR_0;
 }

 return 0;
}
