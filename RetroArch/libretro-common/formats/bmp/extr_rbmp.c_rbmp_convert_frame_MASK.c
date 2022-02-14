
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static void FUNC_0(uint32_t *VAR_0, unsigned VAR_1, unsigned VAR_2)
{
   uint32_t *VAR_3 = VAR_0 + (VAR_1 * VAR_2 * sizeof(uint32_t))/4;

   while(VAR_0 < VAR_3)
   {
      uint32_t VAR_4 = *VAR_0;
      *VAR_0 = (VAR_4 & 0xff00ff00) | ((VAR_4 << 16) & 0x00ff0000) | ((VAR_4 >> 16) & 0xff);
      VAR_0++;
   }
}
