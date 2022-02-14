
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int * ring; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct drm_device*,int *) ;

__attribute__((used)) static void FUNC_1(struct drm_device *VAR_5,
          struct drm_i915_private *VAR_6,
          u32 VAR_7)
{
 if (VAR_7 & (VAR_2 | VAR_1))
  FUNC_0(VAR_5, &VAR_6->ring[VAR_3]);
 if (VAR_7 & VAR_0)
  FUNC_0(VAR_5, &VAR_6->ring[VAR_4]);
}
