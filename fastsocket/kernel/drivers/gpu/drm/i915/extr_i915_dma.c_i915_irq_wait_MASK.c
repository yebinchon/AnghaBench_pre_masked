
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device {int * dev_private; } ;
typedef int drm_i915_private_t ;
struct TYPE_2__ {int irq_seq; } ;
typedef TYPE_1__ drm_i915_irq_wait_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct drm_device*,int ) ;
 int FUNC_2 (struct drm_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct drm_device *VAR_3, void *VAR_4,
    struct drm_file *VAR_5)
{
 drm_i915_private_t *VAR_6 = VAR_3->dev_private;
 drm_i915_irq_wait_t *VAR_7 = VAR_4;

 if (FUNC_1(VAR_3, VAR_0))
  return -VAR_2;

 if (!VAR_6) {
  FUNC_0("called with no initialization\n");
  return -VAR_1;
 }

 return FUNC_2(VAR_3, VAR_7->irq_seq);
}
