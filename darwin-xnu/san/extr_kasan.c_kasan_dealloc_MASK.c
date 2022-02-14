
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ vm_address_t ;
struct kasan_alloc_header {scalar_t__ left_rz; int alloc_size; } ;


 int FUNC_0 (int) ;
 struct kasan_alloc_header* FUNC_1 (scalar_t__) ;

vm_address_t
FUNC_2(vm_offset_t VAR_0, vm_size_t *VAR_1)
{
 FUNC_0(VAR_1 && VAR_0);
 struct kasan_alloc_header *VAR_2 = FUNC_1(VAR_0);
 *VAR_1 = VAR_2->alloc_size;
 return VAR_0 - VAR_2->left_rz;
}
