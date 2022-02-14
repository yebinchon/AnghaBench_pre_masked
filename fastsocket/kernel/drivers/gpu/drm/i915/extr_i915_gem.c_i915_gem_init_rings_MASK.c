
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct drm_i915_private {int * ring; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_device*) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (struct drm_device*,scalar_t__) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*) ;

__attribute__((used)) static int FUNC_7(struct drm_device *VAR_3)
{
 struct drm_i915_private *VAR_4 = VAR_3->dev_private;
 int VAR_5;

 VAR_5 = FUNC_6(VAR_3);
 if (VAR_5)
  return VAR_5;

 if (FUNC_0(VAR_3)) {
  VAR_5 = FUNC_5(VAR_3);
  if (VAR_5)
   goto cleanup_render_ring;
 }

 if (FUNC_3(VAR_3)) {
  VAR_5 = FUNC_4(VAR_3);
  if (VAR_5)
   goto cleanup_bsd_ring;
 }

 VAR_5 = FUNC_1(VAR_3, ((u32)~0 - 0x1000));
 if (VAR_5)
  goto cleanup_blt_ring;

 return 0;

cleanup_blt_ring:
 FUNC_2(&VAR_4->ring[VAR_0]);
cleanup_bsd_ring:
 FUNC_2(&VAR_4->ring[VAR_2]);
cleanup_render_ring:
 FUNC_2(&VAR_4->ring[VAR_1]);

 return VAR_5;
}
