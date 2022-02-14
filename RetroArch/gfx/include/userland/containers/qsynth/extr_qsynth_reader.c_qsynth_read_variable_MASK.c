
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static int FUNC_0(uint8_t *VAR_0, uint32_t *VAR_1)
{
   int VAR_2 = 0;
   *VAR_1 = 0;
   do {
      *VAR_1 = (*VAR_1 << 7) + (VAR_0[VAR_2] & 0x7f);
   } while(VAR_0[VAR_2++] & 0x80);

   return VAR_2;
}
