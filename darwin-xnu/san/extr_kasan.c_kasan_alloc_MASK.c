
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int vm_offset_t ;
typedef int vm_address_t ;
struct kasan_alloc_header {int left_rz; int alloc_size; int user_size; int crc; int frames; int magic; } ;
struct kasan_alloc_footer {int backtrace; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct kasan_alloc_footer* FUNC_1 (int,int*) ;
 struct kasan_alloc_header* FUNC_2 (int) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int,int,int,int ) ;
 int FUNC_6 (int,int,int,int) ;
 int FUNC_7 (int,int ) ;

vm_address_t
FUNC_8(vm_offset_t VAR_2, vm_size_t VAR_3, vm_size_t VAR_4, vm_size_t VAR_5)
{
 if (!VAR_2) {
  return 0;
 }
 FUNC_0(VAR_3 > 0);
 FUNC_0((VAR_2 % 8) == 0);
 FUNC_0((VAR_3 % 8) == 0);

 vm_size_t VAR_6 = VAR_3 - VAR_4 - VAR_5;

 FUNC_5(VAR_2, VAR_4, VAR_5, VAR_6, VAR_0);
 FUNC_6(VAR_2, VAR_4, VAR_5, VAR_6);

 VAR_2 += VAR_5;


 struct kasan_alloc_header *VAR_7 = FUNC_2(VAR_2);
 VAR_7->magic = FUNC_7(VAR_2, VAR_1);
 VAR_7->left_rz = VAR_5;
 VAR_7->alloc_size = VAR_3;
 VAR_7->user_size = VAR_4;


 vm_size_t VAR_8;
 struct kasan_alloc_footer *VAR_9 = FUNC_1(VAR_2, &VAR_8);
 VAR_7->frames = FUNC_3(VAR_9->backtrace, VAR_8, 2);


 VAR_7->crc = FUNC_4(VAR_2);

 return VAR_2;
}
