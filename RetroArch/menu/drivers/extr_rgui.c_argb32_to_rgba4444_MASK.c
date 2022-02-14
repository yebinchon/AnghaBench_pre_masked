
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef unsigned int uint16_t ;



__attribute__((used)) static uint16_t FUNC_0(uint32_t VAR_0)
{
   unsigned VAR_1 = ((VAR_0 >> 24) & 0xff) >> 4;
   unsigned VAR_2 = ((VAR_0 >> 16) & 0xff) >> 4;
   unsigned VAR_3 = ((VAR_0 >> 8) & 0xff) >> 4;
   unsigned VAR_4 = ((VAR_0 & 0xff) ) >> 4;
   return (VAR_2 << 12) | (VAR_3 << 8) | (VAR_4 << 4) | VAR_1;
}
