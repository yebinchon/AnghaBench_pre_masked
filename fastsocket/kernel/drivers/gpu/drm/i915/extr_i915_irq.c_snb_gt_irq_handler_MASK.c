
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int * ring; } ;
struct drm_device {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int FUNC_1 (struct drm_device*,int) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*,int *) ;

__attribute__((used)) static void FUNC_4(struct drm_device *VAR_11,
          struct drm_i915_private *VAR_12,
          u32 VAR_13)
{

 if (VAR_13 & (VAR_4 |
        VAR_3))
  FUNC_3(VAR_11, &VAR_12->ring[VAR_9]);
 if (VAR_13 & VAR_2)
  FUNC_3(VAR_11, &VAR_12->ring[VAR_10]);
 if (VAR_13 & VAR_1)
  FUNC_3(VAR_11, &VAR_12->ring[VAR_0]);

 if (VAR_13 & (VAR_5 |
        VAR_6 |
        VAR_8)) {
  FUNC_0("GT error interrupt 0x%08x\n", VAR_13);
  FUNC_1(VAR_11, 0);
 }

 if (VAR_13 & VAR_7)
  FUNC_2(VAR_11);
}
