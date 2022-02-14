
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_gem_execbuffer2 {int flags; int batch_start_offset; int batch_len; } ;


 int VAR_0 ;

__attribute__((used)) static bool
FUNC_0(struct drm_i915_gem_execbuffer2 *VAR_1)
{
 if (VAR_1->flags & VAR_0)
  return 0;

 return ((VAR_1->batch_start_offset | VAR_1->batch_len) & 0x7) == 0;
}
