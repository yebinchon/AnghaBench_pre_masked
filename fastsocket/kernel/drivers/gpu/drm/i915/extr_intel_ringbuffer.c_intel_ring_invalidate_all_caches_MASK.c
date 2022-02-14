
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct intel_ring_buffer {int gpu_caches_dirty; int (* flush ) (struct intel_ring_buffer*,scalar_t__,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct intel_ring_buffer*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct intel_ring_buffer*,scalar_t__,scalar_t__) ;

int
FUNC_2(struct intel_ring_buffer *VAR_1)
{
 uint32_t VAR_2;
 int VAR_3;

 VAR_2 = 0;
 if (VAR_1->gpu_caches_dirty)
  VAR_2 = VAR_0;

 VAR_3 = VAR_1->flush(VAR_1, VAR_0, VAR_2);
 if (VAR_3)
  return VAR_3;

 FUNC_1(VAR_1, VAR_0, VAR_2);

 VAR_1->gpu_caches_dirty = 0;
 return 0;
}
