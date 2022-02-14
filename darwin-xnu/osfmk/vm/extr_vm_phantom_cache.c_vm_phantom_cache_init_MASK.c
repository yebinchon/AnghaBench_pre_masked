
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_phantom_hash_entry_t ;
typedef int vm_offset_t ;
typedef unsigned int uint32_t ;
struct vm_ghost {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int) ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ,int *,int,int ,int,int ) ;
 int VAR_8 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 int VAR_15 ;

void
FUNC_4()
{
 unsigned int VAR_16;
 unsigned int VAR_17;
 unsigned int VAR_18;

 if ( !VAR_4)
  return;



 VAR_16 = (uint32_t)(((VAR_8 / VAR_3) / 4) / VAR_5);

 VAR_14 = 1;

 while (VAR_14 < VAR_16)
  VAR_14 <<= 1;

 VAR_15 = sizeof(struct vm_ghost) * VAR_14;
 VAR_13 = sizeof(vm_phantom_hash_entry_t) * VAR_14;

 if (FUNC_1(VAR_7, (vm_offset_t *)(&VAR_11), VAR_15, 0, VAR_1 | VAR_2, VAR_6) != VAR_0)
  FUNC_2("vm_phantom_cache_init: kernel_memory_allocate failed\n");
 FUNC_0(VAR_11, VAR_15);

 if (FUNC_1(VAR_7, (vm_offset_t *)(&VAR_12), VAR_13, 0, VAR_1 | VAR_2, VAR_6) != VAR_0)
  FUNC_2("vm_phantom_cache_init: kernel_memory_allocate failed\n");
 FUNC_0(VAR_12, VAR_13);


 VAR_10 = VAR_14 - 1;
 VAR_18 = VAR_14;
 for (VAR_17 = 0; VAR_18 > 1; VAR_17++)
  VAR_18 /= 2;

 VAR_9 = 1 << ((VAR_17 + 1) >> 1);
 VAR_9 |= 1 << ((VAR_17 + 1) >> 2);
 VAR_9 |= 1;

 if (VAR_10 & VAR_14)
  FUNC_3("vm_phantom_cache_init: WARNING -- strange page hash\n");
}
