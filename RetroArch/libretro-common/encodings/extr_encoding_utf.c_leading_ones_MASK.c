
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static unsigned FUNC_0(uint8_t VAR_0)
{
   unsigned VAR_1 = 0;
   while (VAR_0 & 0x80)
   {
      VAR_1++;
      VAR_0 <<= 1;
   }

   return VAR_1;
}
