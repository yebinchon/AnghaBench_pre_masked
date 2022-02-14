
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_ring_buffer {int dummy; } ;
struct drm_device {TYPE_1__* dev_private; } ;
struct TYPE_2__ {struct intel_ring_buffer* ring; } ;
typedef TYPE_1__ drm_i915_private_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (int) ;
 size_t VAR_0 ;
 int FUNC_3 (struct intel_ring_buffer*) ;
 int FUNC_4 (struct intel_ring_buffer*,int) ;
 int FUNC_5 (struct intel_ring_buffer*,int ) ;

__attribute__((used)) static int
FUNC_6(struct drm_device *VAR_1,
       struct intel_ring_buffer *VAR_2)
{
 drm_i915_private_t *VAR_3 = VAR_1->dev_private;
 int VAR_4, VAR_5;

 if (!FUNC_1(VAR_1) || VAR_2 != &VAR_3->ring[VAR_0])
  return 0;

 VAR_4 = FUNC_4(VAR_2, 4 * 3);
 if (VAR_4)
  return VAR_4;

 for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
  FUNC_5(VAR_2, FUNC_2(1));
  FUNC_5(VAR_2, FUNC_0(VAR_5));
  FUNC_5(VAR_2, 0);
 }

 FUNC_3(VAR_2);

 return 0;
}
