
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef enum patch_error { ____Placeholder_patch_error } patch_error ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,int,int,char**,int*) ;
 int FUNC_1 (char*,char const*,size_t) ;

__attribute__((used)) static enum patch_error FUNC_2(
      const uint8_t *VAR_3, uint64_t VAR_4,
      const uint8_t *VAR_5, uint64_t VAR_6,
      uint8_t **VAR_7, uint64_t *VAR_8)
{
   uint32_t VAR_9 = 5;
   enum patch_error VAR_10 = VAR_2;
   if (VAR_4 < 8 ||
         VAR_3[0] != 'P' ||
         VAR_3[1] != 'A' ||
         VAR_3[2] != 'T' ||
         VAR_3[3] != 'C' ||
         VAR_3[4] != 'H')
      return VAR_0;

   VAR_10 = FUNC_0( VAR_3, VAR_4,
                                       VAR_6, VAR_7,
                                                      VAR_8);
   if ( VAR_10 != VAR_1)
      return VAR_10;

   FUNC_1(*VAR_7, VAR_5, (size_t)VAR_6);

   for (;;)
   {
      uint32_t VAR_11;
      unsigned VAR_12;

      if (VAR_9 > VAR_4 - 3)
         break;

      VAR_11 = VAR_3[VAR_9++] << 16;
      VAR_11 |= VAR_3[VAR_9++] << 8;
      VAR_11 |= VAR_3[VAR_9++] << 0;

      if (VAR_11 == 0x454f46)
      {
         if (VAR_9 == VAR_4)
            return VAR_1;
         else if (VAR_9 == VAR_4 - 3)
         {
            uint32_t VAR_13 = VAR_3[VAR_9++] << 16;
            VAR_13 |= VAR_3[VAR_9++] << 8;
            VAR_13 |= VAR_3[VAR_9++] << 0;
            return VAR_1;
         }
      }

      if (VAR_9 > VAR_4 - 2)
         break;

      VAR_12 = VAR_3[VAR_9++] << 8;
      VAR_12 |= VAR_3[VAR_9++] << 0;

      if (VAR_12)
      {
         if (VAR_9 > VAR_4 - VAR_12)
            break;

         while (VAR_12--)
            (*VAR_7)[VAR_11++] = VAR_3[VAR_9++];
      }
      else
      {
         if (VAR_9 > VAR_4 - 3)
            break;

         VAR_12 = VAR_3[VAR_9++] << 8;
         VAR_12 |= VAR_3[VAR_9++] << 0;

         if (VAR_12 == 0)
            break;

         while (VAR_12--)
            (*VAR_7)[VAR_11++] = VAR_3[VAR_9];

         VAR_9++;
      }
   }

   return VAR_0;
}
