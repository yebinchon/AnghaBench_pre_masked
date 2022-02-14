
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int16_t ;



__attribute__((used)) static void FUNC_0( uint8_t **VAR_0, uint8_t *VAR_1, size_t VAR_2)
{
   int16_t *VAR_3 = (int16_t *)*VAR_0;
   uint8_t VAR_4;

   while(VAR_2--)
   {
      VAR_4 = *VAR_1++;
      *VAR_3++ = ((VAR_4 - 128) << 8) | VAR_4;
   }
   *VAR_0 = (uint8_t *)VAR_3;
}
