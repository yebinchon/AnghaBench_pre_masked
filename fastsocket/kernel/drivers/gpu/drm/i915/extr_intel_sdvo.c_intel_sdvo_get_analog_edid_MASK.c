
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct edid {int dummy; } ;
struct drm_i915_private {int crt_ddc_pin; } ;
struct drm_connector {TYPE_1__* dev; } ;
struct TYPE_2__ {struct drm_i915_private* dev_private; } ;


 struct edid* FUNC_0 (struct drm_connector*,int ) ;
 int FUNC_1 (struct drm_i915_private*,int ) ;

__attribute__((used)) static struct edid *
FUNC_2(struct drm_connector *VAR_0)
{
 struct drm_i915_private *VAR_1 = VAR_0->dev->dev_private;

 return FUNC_0(VAR_0,
       FUNC_1(VAR_1,
          VAR_1->crt_ddc_pin));
}
