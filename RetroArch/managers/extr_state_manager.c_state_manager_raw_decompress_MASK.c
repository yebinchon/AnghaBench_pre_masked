
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
typedef size_t uint16_t ;



__attribute__((used)) static void FUNC_0(const void *VAR_0,
      size_t VAR_1, void *VAR_2, size_t VAR_3)
{
   uint16_t *VAR_4 = (uint16_t*)VAR_2;
   const uint16_t *VAR_5 = (const uint16_t*)VAR_0;

   (void)VAR_1;
   (void)VAR_3;

   for (;;)
   {
      uint16_t VAR_6 = *(VAR_5++);

      if (VAR_6)
      {
         uint16_t VAR_7;

         VAR_4 += *VAR_5++;






         for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
            VAR_4[VAR_7] = VAR_5[VAR_7];

         VAR_5 += VAR_6;
         VAR_4 += VAR_6;
      }
      else
      {
         uint32_t VAR_8 = VAR_5[0] | (VAR_5[1] << 16);

         if (!VAR_8)
            break;
         VAR_5 += 2;
         VAR_4 += VAR_8;
      }
   }
}
