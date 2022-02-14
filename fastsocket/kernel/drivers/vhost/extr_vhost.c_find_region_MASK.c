
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct vhost_memory_region {int guest_phys_addr; int memory_size; } const vhost_memory_region ;
struct vhost_memory {int nregions; struct vhost_memory_region const* regions; } ;
typedef int __u64 ;
typedef int __u32 ;



__attribute__((used)) static const struct vhost_memory_region *FUNC_0(struct vhost_memory *VAR_0,
           __u64 VAR_1, __u32 VAR_2)
{
 struct vhost_memory_region *VAR_3;
 int VAR_4;


 for (VAR_4 = 0; VAR_4 < VAR_0->nregions; ++VAR_4) {
  VAR_3 = VAR_0->regions + VAR_4;
  if (VAR_3->guest_phys_addr <= VAR_1 &&
      VAR_3->guest_phys_addr + VAR_3->memory_size - 1 >= VAR_1)
   return VAR_3;
 }
 return ((void*)0);
}
