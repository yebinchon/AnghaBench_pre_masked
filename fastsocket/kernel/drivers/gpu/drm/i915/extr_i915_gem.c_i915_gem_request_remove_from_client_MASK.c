
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_i915_gem_request {struct drm_i915_file_private* file_priv; int client_list; } ;
struct TYPE_2__ {int lock; } ;
struct drm_i915_file_private {TYPE_1__ mm; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void
FUNC_3(struct drm_i915_gem_request *VAR_0)
{
 struct drm_i915_file_private *VAR_1 = VAR_0->file_priv;

 if (!VAR_1)
  return;

 FUNC_1(&VAR_1->mm.lock);
 if (VAR_0->file_priv) {
  FUNC_0(&VAR_0->client_list);
  VAR_0->file_priv = ((void*)0);
 }
 FUNC_2(&VAR_1->mm.lock);
}
