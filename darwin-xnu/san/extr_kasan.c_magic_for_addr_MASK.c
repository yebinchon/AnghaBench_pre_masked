
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int uint16_t ;



__attribute__((used)) static uint16_t
FUNC_0(vm_offset_t VAR_0, uint16_t VAR_1)
{
 uint16_t VAR_2 = VAR_0 & 0xFFFF;
 VAR_2 ^= (VAR_0 >> 16) & 0xFFFF;
 VAR_2 ^= (VAR_0 >> 32) & 0xFFFF;
 VAR_2 ^= (VAR_0 >> 48) & 0xFFFF;
 VAR_2 ^= VAR_1;
 return VAR_2;
}
