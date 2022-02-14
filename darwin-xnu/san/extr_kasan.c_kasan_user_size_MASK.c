
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int vm_offset_t ;
struct kasan_alloc_header {scalar_t__ magic; int user_size; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct kasan_alloc_header* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;

vm_size_t
FUNC_3(vm_offset_t VAR_1)
{
 struct kasan_alloc_header *VAR_2 = FUNC_1(VAR_1);
 FUNC_0(VAR_2->magic == FUNC_2(VAR_1, VAR_0));
 return VAR_2->user_size;
}
