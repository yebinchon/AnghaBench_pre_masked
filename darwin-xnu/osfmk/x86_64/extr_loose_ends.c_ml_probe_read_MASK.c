
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int pmap_paddr_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int ) ;

boolean_t
FUNC_1(vm_offset_t VAR_4, unsigned int *VAR_5)
{
    if ((VAR_2 - (VAR_4 & VAR_1)) < 4)
        return VAR_0;

    *VAR_5 = FUNC_0((pmap_paddr_t)VAR_4);

    return VAR_3;
}
