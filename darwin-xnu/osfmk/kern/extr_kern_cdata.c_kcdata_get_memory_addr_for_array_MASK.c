
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int mach_vm_address_t ;
typedef int kern_return_t ;
typedef int kcdata_descriptor_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int,int,int *) ;

kern_return_t FUNC_2(
  kcdata_descriptor_t VAR_1,
  uint32_t VAR_2,
  uint32_t VAR_3,
  uint32_t VAR_4,
  mach_vm_address_t *VAR_5)
{


 uint64_t VAR_6 = VAR_2;
 VAR_6 = (VAR_6 << 32) | VAR_4;
 uint32_t VAR_7 = VAR_4 * VAR_3;
 uint32_t VAR_8 = FUNC_0(VAR_7);

 return FUNC_1(VAR_1, VAR_0 | VAR_8, VAR_7, VAR_6, VAR_5);
}
