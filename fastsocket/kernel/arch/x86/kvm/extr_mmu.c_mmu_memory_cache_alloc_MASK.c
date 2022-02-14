
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_mmu_memory_cache {size_t nobjs; void** objects; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void *FUNC_1(struct kvm_mmu_memory_cache *VAR_0,
        size_t VAR_1)
{
 void *VAR_2;

 FUNC_0(!VAR_0->nobjs);
 VAR_2 = VAR_0->objects[--VAR_0->nobjs];
 return VAR_2;
}
