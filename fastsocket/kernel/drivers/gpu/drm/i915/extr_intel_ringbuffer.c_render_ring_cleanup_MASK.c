
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_ring_buffer {int private; struct drm_device* dev; } ;
struct drm_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct intel_ring_buffer*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct intel_ring_buffer *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;

 if (!VAR_0->private)
  return;

 if (FUNC_0(VAR_1))
  FUNC_2(FUNC_3(VAR_0->private));

 FUNC_1(VAR_0);
}
