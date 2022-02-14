
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static vm_offset_t
FUNC_0(vm_offset_t VAR_2)
{
 vm_offset_t VAR_3 = VAR_1 << VAR_0;
 return ((VAR_2 + (VAR_3 - 1)) & ~(VAR_3 - 1));
}
