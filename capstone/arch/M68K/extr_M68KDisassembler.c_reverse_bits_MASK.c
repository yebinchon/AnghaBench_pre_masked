
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int uint ;



__attribute__((used)) static uint16_t FUNC_0(uint VAR_0)
{
 uint VAR_1 = VAR_0;
 uint VAR_2 = 16 - 1;

 for (VAR_0 >>= 1; VAR_0; VAR_0 >>= 1) {
  VAR_1 <<= 1;
  VAR_1 |= VAR_0 & 1;
  VAR_2--;
 }

 return VAR_1 <<= VAR_2;
}
