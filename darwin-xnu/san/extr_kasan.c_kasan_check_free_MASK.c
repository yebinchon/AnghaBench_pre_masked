
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_offset_t ;
struct kasan_alloc_header {scalar_t__ magic; scalar_t__ crc; scalar_t__ user_size; scalar_t__ alloc_size; scalar_t__ left_rz; } ;
typedef int access_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct kasan_alloc_header* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (void*,scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,scalar_t__,int ) ;
 int FUNC_4 (scalar_t__,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;

void
FUNC_6(vm_offset_t VAR_12, vm_size_t VAR_13, unsigned VAR_14)
{
 struct kasan_alloc_header *VAR_15 = FUNC_0(VAR_12);


 access_t VAR_16 = VAR_14 == VAR_3 ? VAR_10 :
                 VAR_14 == VAR_4 ? VAR_11 :
                 VAR_14 == VAR_2 ? VAR_9 : 0;


 if (VAR_15->magic != FUNC_5(VAR_12, VAR_5)) {
  FUNC_4(VAR_12, VAR_13, VAR_16, VAR_6);
 }
 if (VAR_15->crc != FUNC_1(VAR_12)) {
  FUNC_4(VAR_12, VAR_13, VAR_16, VAR_8);
 }


 if (VAR_15->user_size != VAR_13) {
  FUNC_4(VAR_12, VAR_13, VAR_16, VAR_7);
 }

 vm_size_t VAR_17 = VAR_15->alloc_size - VAR_15->left_rz - VAR_15->user_size;


 if (!FUNC_3(VAR_12 - VAR_15->left_rz, VAR_15->left_rz, VAR_0) ||
  !FUNC_3(VAR_12 + VAR_15->user_size, VAR_17, VAR_1)) {
  FUNC_4(VAR_12, VAR_13, VAR_16, VAR_6);
 }


 FUNC_2((void *)VAR_12, VAR_13, VAR_16);
}
