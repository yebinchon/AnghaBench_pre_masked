
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef enum patch_error { ____Placeholder_patch_error } patch_error ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (size_t) ;

__attribute__((used)) static enum patch_error FUNC_2(
      const uint8_t *VAR_3, uint64_t VAR_4,
      uint64_t VAR_5,
      uint8_t **VAR_6, uint64_t *VAR_7)
{
   uint8_t *VAR_8;
   uint32_t VAR_9 = 5;
   *VAR_7 = VAR_5;

   for (;;)
   {
      uint32_t VAR_10;
      unsigned VAR_11;

      if (VAR_9 > VAR_4 - 3)
         break;

      VAR_10 = VAR_3[VAR_9++] << 16;
      VAR_10 |= VAR_3[VAR_9++] << 8;
      VAR_10 |= VAR_3[VAR_9++] << 0;

      if (VAR_10 == 0x454f46)
      {
         if (VAR_9 == VAR_4)
         {
            VAR_8=(uint8_t*)FUNC_1((size_t)*VAR_7);
            if (!VAR_8)
               return VAR_2;
            FUNC_0(*VAR_6);
            *VAR_6=VAR_8;
            return VAR_1;
         }
         else if (VAR_9 == VAR_4 - 3)
         {
            uint32_t VAR_12 = VAR_3[VAR_9++] << 16;
            VAR_12 |= VAR_3[VAR_9++] << 8;
            VAR_12 |= VAR_3[VAR_9++] << 0;
            *VAR_7 = VAR_12;
            VAR_8=(uint8_t*)FUNC_1((size_t)*VAR_7);
            if (!VAR_8)
               return VAR_2;
            FUNC_0(*VAR_6);
            *VAR_6=VAR_8;
            return VAR_1;
         }
      }

      if (VAR_9 > VAR_4 - 2)
         break;

      VAR_11 = VAR_3[VAR_9++] << 8;
      VAR_11 |= VAR_3[VAR_9++] << 0;

      if (VAR_11)
      {
         if (VAR_9 > VAR_4 - VAR_11)
            break;

         while (VAR_11--)
         {
            VAR_10++;
            VAR_9++;
         }
      }
      else
      {
         if (VAR_9 > VAR_4 - 3)
            break;

         VAR_11 = VAR_3[VAR_9++] << 8;
         VAR_11 |= VAR_3[VAR_9++] << 0;

         if (VAR_11 == 0)
            break;

         while (VAR_11--)
            VAR_10++;

         VAR_9++;
      }

      if (VAR_10 > *VAR_7)
         *VAR_7 = VAR_10;
   }

   return VAR_0;
}
