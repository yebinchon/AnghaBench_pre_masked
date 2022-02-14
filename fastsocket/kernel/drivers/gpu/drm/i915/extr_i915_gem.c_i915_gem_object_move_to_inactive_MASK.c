
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int inactive_list; } ;
struct drm_i915_private {TYPE_1__ mm; } ;
struct TYPE_4__ {int write_domain; struct drm_device* dev; } ;
struct drm_i915_gem_object {int fenced_gpu_access; TYPE_2__ base; scalar_t__ active; scalar_t__ last_fenced_seqno; scalar_t__ last_write_seqno; scalar_t__ last_read_seqno; int * ring; int ring_list; int mm_list; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static void
FUNC_6(struct drm_i915_gem_object *VAR_1)
{
 struct drm_device *VAR_2 = VAR_1->base.dev;
 struct drm_i915_private *VAR_3 = VAR_2->dev_private;

 FUNC_0(VAR_1->base.write_domain & ~VAR_0);
 FUNC_0(!VAR_1->active);

 FUNC_5(&VAR_1->mm_list, &VAR_3->mm.inactive_list);

 FUNC_4(&VAR_1->ring_list);
 VAR_1->ring = ((void*)0);

 VAR_1->last_read_seqno = 0;
 VAR_1->last_write_seqno = 0;
 VAR_1->base.write_domain = 0;

 VAR_1->last_fenced_seqno = 0;
 VAR_1->fenced_gpu_access = 0;

 VAR_1->active = 0;
 FUNC_2(&VAR_1->base);

 FUNC_1(FUNC_3(VAR_2));
}
