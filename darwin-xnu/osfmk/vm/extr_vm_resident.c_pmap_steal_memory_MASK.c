
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int vm_offset_t ;
typedef int uint64_t ;
typedef int ppnum_t ;
typedef scalar_t__ kern_return_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (void*,int) ;
 int VAR_7 ;
 int FUNC_1 (char*,unsigned long,...) ;
 scalar_t__ FUNC_2 (int ,int,int ,int,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (scalar_t__*,scalar_t__*) ;
 void* FUNC_6 (int) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

void *
FUNC_8(
 vm_size_t VAR_12)
{
 kern_return_t VAR_13;
 vm_offset_t VAR_14, VAR_15;
 ppnum_t VAR_16;





 VAR_12 = (VAR_12 + sizeof (void *) - 1) &~ (sizeof (void *) - 1);






 if (VAR_9 == VAR_8) {
  FUNC_5(&VAR_9, &VAR_8);






  VAR_9 = FUNC_6(VAR_9);
  VAR_8 = FUNC_7(VAR_8);
 }





 VAR_14 = VAR_9;
 VAR_9 += VAR_12;







 for (VAR_15 = FUNC_6(VAR_14);
      VAR_15 < VAR_14 + VAR_12;
      VAR_15 += VAR_2) {

  if (!FUNC_3(&VAR_16))
   FUNC_1("pmap_steal_memory() size: 0x%llx\n", (uint64_t)VAR_12);
  FUNC_4(VAR_7, VAR_15);



  VAR_13 = FUNC_2(VAR_7, VAR_15, VAR_16,
                  VAR_4|VAR_5, VAR_3,
                  VAR_6, VAR_0);

  if (VAR_13 != VAR_1) {
   FUNC_1("pmap_steal_memory() pmap_enter failed, vaddr=%#lx, phys_page=%u",
         (unsigned long)VAR_15, VAR_16);
  }




  VAR_11++;
  VAR_10++;
 }




 return (void *) VAR_14;
}
