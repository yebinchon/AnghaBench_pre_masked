
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int uint32_t ;
typedef scalar_t__ addr64_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (char*) ;

void
FUNC_3(
    addr64_t VAR_1,
    addr64_t VAR_2,
    vm_size_t VAR_3)
{

 if (((((uint32_t)VAR_1 & (VAR_0-1)) + VAR_3) > VAR_0) ||
            ((((uint32_t)VAR_2 & (VAR_0-1)) + VAR_3) > VAR_0) ) {
         FUNC_2("bcopy_phys alignment");
 }
 FUNC_1(FUNC_0(VAR_1), FUNC_0(VAR_2), VAR_3);
}
