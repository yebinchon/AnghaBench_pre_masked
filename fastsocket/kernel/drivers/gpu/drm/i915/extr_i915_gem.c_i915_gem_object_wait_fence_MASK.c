
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_gem_object {int fenced_gpu_access; scalar_t__ last_fenced_seqno; int ring; } ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(struct drm_i915_gem_object *VAR_0)
{
 if (VAR_0->last_fenced_seqno) {
  int VAR_1 = FUNC_0(VAR_0->ring, VAR_0->last_fenced_seqno);
  if (VAR_1)
   return VAR_1;

  VAR_0->last_fenced_seqno = 0;
 }

 VAR_0->fenced_gpu_access = 0;
 return 0;
}
