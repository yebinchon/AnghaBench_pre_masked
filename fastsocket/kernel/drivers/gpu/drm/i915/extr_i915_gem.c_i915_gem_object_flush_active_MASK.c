
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_gem_object {int ring; int last_read_seqno; scalar_t__ active; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct drm_i915_gem_object *VAR_0)
{
 int VAR_1;

 if (VAR_0->active) {
  VAR_1 = FUNC_0(VAR_0->ring, VAR_0->last_read_seqno);
  if (VAR_1)
   return VAR_1;

  FUNC_1(VAR_0->ring);
 }

 return 0;
}
