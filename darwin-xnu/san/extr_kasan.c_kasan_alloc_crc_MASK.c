
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ uint16_t ;
struct kasan_alloc_header {scalar_t__ crc; scalar_t__ user_size; scalar_t__ left_rz; scalar_t__ alloc_size; } ;


 scalar_t__ FUNC_0 (scalar_t__,void*,scalar_t__) ;
 struct kasan_alloc_header* FUNC_1 (scalar_t__) ;

__attribute__((used)) static uint16_t
FUNC_2(vm_offset_t VAR_0)
{
 struct kasan_alloc_header *VAR_1 = FUNC_1(VAR_0);
 vm_size_t VAR_2 = VAR_1->alloc_size - VAR_1->user_size - VAR_1->left_rz;

 uint16_t VAR_3 = VAR_1->crc;
 VAR_1->crc = 0;

 uint16_t VAR_4 = 0;
 VAR_4 = FUNC_0(VAR_4, (void *)(VAR_0 - VAR_1->left_rz), VAR_1->left_rz);
 VAR_4 = FUNC_0(VAR_4, (void *)(VAR_0 + VAR_1->user_size), VAR_2);

 VAR_1->crc = VAR_3;

 return VAR_4;
}
