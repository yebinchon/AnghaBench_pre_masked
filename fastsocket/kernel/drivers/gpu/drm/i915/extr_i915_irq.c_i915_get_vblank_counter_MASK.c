
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_device {scalar_t__ dev_private; } ;
typedef int drm_i915_private_t ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (int) ;
 unsigned long FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct drm_device*,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static u32 FUNC_6(struct drm_device *VAR_4, int VAR_5)
{
 drm_i915_private_t *VAR_6 = (drm_i915_private_t *) VAR_4->dev_private;
 unsigned long VAR_7;
 unsigned long VAR_8;
 u32 VAR_9, VAR_10, VAR_11;

 if (!FUNC_4(VAR_4, VAR_5)) {
  FUNC_0("trying to get vblank count for disabled "
    "pipe %c\n", FUNC_5(VAR_5));
  return 0;
 }

 VAR_7 = FUNC_2(VAR_5);
 VAR_8 = FUNC_3(VAR_5);






 do {
  VAR_9 = FUNC_1(VAR_7) & VAR_0;
  VAR_11 = FUNC_1(VAR_8) & VAR_2;
  VAR_10 = FUNC_1(VAR_7) & VAR_0;
 } while (VAR_9 != VAR_10);

 VAR_9 >>= VAR_1;
 VAR_11 >>= VAR_3;
 return (VAR_9 << 8) | VAR_11;
}
