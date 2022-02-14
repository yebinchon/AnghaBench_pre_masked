
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;

__attribute__((used)) static uint32_t FUNC_0(uint32_t VAR_1, unsigned char const *VAR_2, size_t VAR_3)
{
 int VAR_4;
 while (VAR_3--) {
  VAR_1 ^= *VAR_2++;
  for (VAR_4 = 0; VAR_4 < 8; VAR_4++)
   VAR_1 = (VAR_1 >> 1) ^ ((VAR_1 & 1) ? VAR_0 : 0);
 }
 return VAR_1;
}
