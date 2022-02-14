
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int max_delay; int min_delay; } ;
struct drm_i915_private {TYPE_1__ rps; } ;



__attribute__((used)) static u32 FUNC_0(struct drm_i915_private *VAR_0, u8 *VAR_1)
{
 u32 VAR_2;

 VAR_2 = 0;

 if (*VAR_1 >= VAR_0->rps.max_delay)
  *VAR_1 = VAR_0->rps.max_delay;
 VAR_2 |= VAR_0->rps.max_delay << 24;







 if (*VAR_1 <= VAR_0->rps.min_delay) {
  *VAR_1 = VAR_0->rps.min_delay;
  VAR_2 |= VAR_0->rps.min_delay << 16;
 }

 return VAR_2;
}
