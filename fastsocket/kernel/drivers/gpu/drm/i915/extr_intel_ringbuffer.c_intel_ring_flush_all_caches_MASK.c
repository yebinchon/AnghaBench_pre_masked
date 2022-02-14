
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_ring_buffer {int gpu_caches_dirty; int (* flush ) (struct intel_ring_buffer*,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct intel_ring_buffer*,int ,int ) ;
 int FUNC_1 (struct intel_ring_buffer*,int ,int ) ;

int
FUNC_2(struct intel_ring_buffer *VAR_1)
{
 int VAR_2;

 if (!VAR_1->gpu_caches_dirty)
  return 0;

 VAR_2 = VAR_1->flush(VAR_1, 0, VAR_0);
 if (VAR_2)
  return VAR_2;

 FUNC_1(VAR_1, 0, VAR_0);

 VAR_1->gpu_caches_dirty = 0;
 return 0;
}
