
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int u32 ;



__attribute__((used)) static uint32_t FUNC_0(uint32_t *VAR_0, u32 VAR_1)
{
 uint64_t VAR_2 = 0;
 int VAR_3 = VAR_1 / sizeof(uint32_t);
 while (VAR_3-- > 0)
  VAR_2 += *VAR_0++;
 while (VAR_2 >> 32)
  VAR_2 = (VAR_2 & 0xFFFFFFFF) + (VAR_2 >> 32);
 return ~VAR_2;
}
