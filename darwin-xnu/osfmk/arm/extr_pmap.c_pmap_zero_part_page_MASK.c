
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ ppnum_t ;
typedef int addr64_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;

void
FUNC_3(
 ppnum_t VAR_2,
 vm_offset_t VAR_3,
 vm_size_t VAR_4)
{
 FUNC_0(VAR_2 != VAR_1);
 FUNC_0(VAR_3 + VAR_4 <= VAR_0);
 FUNC_1((addr64_t) (FUNC_2(VAR_2) + VAR_3), VAR_4);
}
