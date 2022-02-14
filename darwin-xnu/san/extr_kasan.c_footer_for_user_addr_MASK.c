
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_offset_t ;
struct kasan_alloc_header {scalar_t__ user_size; scalar_t__ left_rz; scalar_t__ alloc_size; } ;
typedef void kasan_alloc_footer ;


 struct kasan_alloc_header* FUNC_0 (scalar_t__) ;

__attribute__((used)) static struct kasan_alloc_footer *
FUNC_1(vm_offset_t VAR_0, vm_size_t *VAR_1)
{
 struct kasan_alloc_header *VAR_2 = FUNC_0(VAR_0);
 vm_size_t VAR_3 = VAR_2->alloc_size - VAR_2->user_size - VAR_2->left_rz;
 *VAR_1 = VAR_3;
 return (void *)(VAR_0 + VAR_2->user_size);
}
