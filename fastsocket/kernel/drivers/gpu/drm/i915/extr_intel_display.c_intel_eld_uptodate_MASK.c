
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct drm_i915_private {int dummy; } ;
struct drm_connector {int* eld; TYPE_1__* dev; } ;
struct TYPE_2__ {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static bool FUNC_2(struct drm_connector *VAR_0,
          int VAR_1, uint32_t VAR_2,
          int VAR_3, uint32_t VAR_4,
          int VAR_5)
{
 struct drm_i915_private *VAR_6 = VAR_0->dev->dev_private;
 uint8_t *VAR_7 = VAR_0->eld;
 uint32_t VAR_8;

 VAR_8 = FUNC_0(VAR_1);
 VAR_8 &= VAR_2;

 if (!VAR_7[0])
  return !VAR_8;

 if (!VAR_8)
  return 0;

 VAR_8 = FUNC_0(VAR_3);
 VAR_8 &= ~VAR_4;
 FUNC_1(VAR_3, VAR_8);

 for (VAR_8 = 0; VAR_8 < VAR_7[2]; VAR_8++)
  if (FUNC_0(VAR_5) != *((uint32_t *)VAR_7 + VAR_8))
   return 0;

 return 1;
}
