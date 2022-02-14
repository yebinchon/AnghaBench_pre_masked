
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i915_hw_context {int dummy; } ;
struct drm_i915_file_private {int context_idr; } ;


 scalar_t__ FUNC_0 (int *,int ) ;

__attribute__((used)) static struct i915_hw_context *
FUNC_1(struct drm_i915_file_private *VAR_0, u32 VAR_1)
{
 return (struct i915_hw_context *)FUNC_0(&VAR_0->context_idr, VAR_1);
}
