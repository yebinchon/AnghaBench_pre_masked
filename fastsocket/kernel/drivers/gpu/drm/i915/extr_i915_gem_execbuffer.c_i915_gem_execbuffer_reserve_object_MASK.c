
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct intel_ring_buffer {int dev; } ;
struct TYPE_6__ {scalar_t__ aliasing_ppgtt; } ;
struct drm_i915_private {TYPE_2__ mm; } ;
struct TYPE_7__ {void* pending_write_domain; void* pending_read_domains; TYPE_1__* dev; } ;
struct drm_i915_gem_object {scalar_t__ tiling_mode; int pending_fenced_gpu_access; int has_aliasing_ppgtt_mapping; scalar_t__ gtt_offset; int cache_level; int has_global_gtt_mapping; TYPE_3__ base; struct drm_i915_gem_exec_object2* exec_entry; } ;
struct drm_i915_gem_exec_object2 {int flags; scalar_t__ offset; int alignment; } ;
struct TYPE_8__ {int gen; } ;
struct TYPE_5__ {struct drm_i915_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_4__* FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct drm_i915_gem_object*,int ) ;
 int FUNC_2 (struct drm_i915_gem_object*) ;
 int FUNC_3 (struct drm_i915_gem_object*,int ,int,int) ;
 scalar_t__ FUNC_4 (struct drm_i915_gem_object*) ;
 int FUNC_5 (scalar_t__,struct drm_i915_gem_object*,int ) ;
 scalar_t__ FUNC_6 (struct drm_i915_gem_object*) ;

__attribute__((used)) static int
FUNC_7(struct drm_i915_gem_object *VAR_7,
       struct intel_ring_buffer *VAR_8,
       bool *VAR_9)
{
 struct drm_i915_private *VAR_10 = VAR_7->base.dev->dev_private;
 struct drm_i915_gem_exec_object2 *VAR_11 = VAR_7->exec_entry;
 bool VAR_12 = FUNC_0(VAR_8->dev)->gen < 4;
 bool VAR_13, VAR_14;
 int VAR_15;

 VAR_13 =
  VAR_12 &&
  VAR_11->flags & VAR_0 &&
  VAR_7->tiling_mode != VAR_4;
 VAR_14 = VAR_13 || FUNC_6(VAR_7);

 VAR_15 = FUNC_3(VAR_7, VAR_11->alignment, VAR_14, 0);
 if (VAR_15)
  return VAR_15;

 VAR_11->flags |= VAR_6;

 if (VAR_12) {
  if (VAR_11->flags & VAR_0) {
   VAR_15 = FUNC_2(VAR_7);
   if (VAR_15)
    return VAR_15;

   if (FUNC_4(VAR_7))
    VAR_11->flags |= VAR_5;

   VAR_7->pending_fenced_gpu_access = 1;
  }
 }


 if (VAR_10->mm.aliasing_ppgtt && !VAR_7->has_aliasing_ppgtt_mapping) {
  FUNC_5(VAR_10->mm.aliasing_ppgtt,
           VAR_7, VAR_7->cache_level);

  VAR_7->has_aliasing_ppgtt_mapping = 1;
 }

 if (VAR_11->offset != VAR_7->gtt_offset) {
  VAR_11->offset = VAR_7->gtt_offset;
  *VAR_9 = 1;
 }

 if (VAR_11->flags & VAR_2) {
  VAR_7->base.pending_read_domains = VAR_3;
  VAR_7->base.pending_write_domain = VAR_3;
 }

 if (VAR_11->flags & VAR_1 &&
     !VAR_7->has_global_gtt_mapping)
  FUNC_1(VAR_7, VAR_7->cache_level);

 return 0;
}
