
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef uintptr_t vm_size_t ;
typedef uintptr_t vm_offset_t ;
typedef scalar_t__ ppnum_t ;
typedef scalar_t__ pmap_paddr_t ;
typedef scalar_t__ addr64_t ;


 uintptr_t VAR_0 ;
 uintptr_t VAR_1 ;
 uintptr_t VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,scalar_t__,uintptr_t) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

void
FUNC_3(
 ppnum_t VAR_5,
 vm_offset_t VAR_6,
 ppnum_t VAR_7,
 vm_offset_t VAR_8,
 vm_size_t VAR_9)
{
        pmap_paddr_t VAR_10, VAR_11;

 FUNC_0(VAR_5 != VAR_3);
 FUNC_0(VAR_7 != VAR_3);
 FUNC_0(VAR_5 != VAR_4);
 FUNC_0(VAR_7 != VAR_4);

 VAR_10 = FUNC_2(VAR_5);
 VAR_11 = FUNC_2(VAR_7);

 FUNC_0((((uintptr_t)VAR_11 & VAR_1) + VAR_8 + VAR_9) <= VAR_2);
 FUNC_0((((uintptr_t)VAR_10 & VAR_1) + VAR_6 + VAR_9) <= VAR_2);

 FUNC_1((addr64_t)VAR_10 + (VAR_6 & VAR_0),
     (addr64_t)VAR_11 + (VAR_8 & VAR_0),
     VAR_9);
}
