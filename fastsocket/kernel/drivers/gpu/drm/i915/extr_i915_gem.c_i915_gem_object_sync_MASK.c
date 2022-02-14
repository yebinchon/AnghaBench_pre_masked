
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct intel_ring_buffer {scalar_t__* sync_seqno; int (* sync_to ) (struct intel_ring_buffer*,struct intel_ring_buffer*,scalar_t__) ;} ;
struct TYPE_2__ {int dev; } ;
struct drm_i915_gem_object {scalar_t__ last_read_seqno; struct intel_ring_buffer* ring; TYPE_1__ base; } ;


 int FUNC_0 (struct intel_ring_buffer*,scalar_t__) ;
 int FUNC_1 (struct drm_i915_gem_object*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct intel_ring_buffer*,struct intel_ring_buffer*) ;
 int FUNC_4 (struct intel_ring_buffer*,struct intel_ring_buffer*,scalar_t__) ;

int
FUNC_5(struct drm_i915_gem_object *VAR_0,
       struct intel_ring_buffer *VAR_1)
{
 struct intel_ring_buffer *VAR_2 = VAR_0->ring;
 u32 VAR_3;
 int VAR_4, VAR_5;

 if (VAR_2 == ((void*)0) || VAR_1 == VAR_2)
  return 0;

 if (VAR_1 == ((void*)0) || !FUNC_2(VAR_0->base.dev))
  return FUNC_1(VAR_0, 0);

 VAR_5 = FUNC_3(VAR_2, VAR_1);

 VAR_3 = VAR_0->last_read_seqno;
 if (VAR_3 <= VAR_2->sync_seqno[VAR_5])
  return 0;

 VAR_4 = FUNC_0(VAR_0->ring, VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = VAR_1->sync_to(VAR_1, VAR_2, VAR_3);
 if (!VAR_4)




  VAR_2->sync_seqno[VAR_5] = VAR_0->last_read_seqno;

 return VAR_4;
}
