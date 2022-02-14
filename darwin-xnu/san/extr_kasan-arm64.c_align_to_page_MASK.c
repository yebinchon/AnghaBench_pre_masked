
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_2(vm_offset_t *VAR_1, vm_offset_t *VAR_2)
{
 vm_offset_t VAR_3 = FUNC_1(*VAR_1, VAR_0);
 *VAR_2 = FUNC_0(*VAR_2 + (*VAR_1 - VAR_3), VAR_0);
 *VAR_1 = VAR_3;
}
