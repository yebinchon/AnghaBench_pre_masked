
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int p ;


 scalar_t__ FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_1(
      const uint8_t *VAR_7, size_t VAR_8,
      const uint8_t *VAR_9, size_t VAR_10,
      const uint8_t *VAR_11, size_t VAR_12,
      const uint8_t *VAR_13, size_t VAR_14,
      uint8_t *VAR_15, size_t VAR_16)
{
   uint16_t VAR_17[256 + 2];
   size_t VAR_18 = 0, VAR_19 = 0;

   const uint8_t *VAR_20, *VAR_21;
   uint32_t VAR_22, VAR_23 = 0;
   uint8_t VAR_24 = 0;

   unsigned int VAR_25;
   for (VAR_25 = 0; VAR_25 < sizeof(VAR_17) / sizeof(VAR_17[0]); VAR_25++)
      VAR_17[VAR_25] = VAR_3 >> 1;

   VAR_20 = VAR_13;
   VAR_21 = VAR_20 + VAR_14;
   VAR_22 = 0xFFFFFFFF;

   for (VAR_25 = 0; VAR_25 < 5; VAR_25++)
   {
      if (VAR_20 == VAR_21)
         return VAR_1;
      VAR_23 = (VAR_23 << 8) | VAR_0;
   }

      if (VAR_16 == 0)
         return VAR_2;

   for (;;)
   {
      uint8_t VAR_26;
      uint16_t *VAR_27;
      uint32_t VAR_28;
      uint32_t VAR_29;

      size_t VAR_30 = VAR_8 - VAR_18;
      if (VAR_16 - VAR_19 < VAR_30)
         VAR_30 = VAR_16 - VAR_19;
      while (VAR_30 != 0)
      {
         VAR_26 = VAR_7[VAR_18];
         VAR_15[VAR_19++] = VAR_26;
         if (FUNC_0(VAR_24, VAR_26))
            break;
         VAR_18++;
         VAR_24 = VAR_26;
         VAR_30--;
      }

      if (VAR_30 == 0 || VAR_19 == VAR_16)
         break;

      VAR_26 = VAR_7[VAR_18++];

      if (VAR_26 == 0xE8)
         VAR_27 = VAR_17 + VAR_24;
      else if (VAR_26 == 0xE9)
         VAR_27 = VAR_17 + 256;
      else
         VAR_27 = VAR_17 + 257;

      VAR_29 = *(VAR_27);
      VAR_28 = (VAR_22 >> VAR_4) * VAR_29;

      if (VAR_23 < VAR_28)
      {
         VAR_22 = VAR_28;
         *(VAR_27) = (uint16_t)(VAR_29 + ((VAR_3 - VAR_29) >> VAR_5));

         if (VAR_22 < VAR_6)
         {
            if (VAR_20 == VAR_21)
               return VAR_1;
            VAR_22 <<= 8;
            VAR_23 = (VAR_23 << 8) | VAR_0;
         }
         VAR_24 = VAR_26;
      }
      else
      {
         uint32_t VAR_31;
         const uint8_t *VAR_32;

         VAR_22 -= VAR_28;
         VAR_23 -= VAR_28;
         *(VAR_27) = (uint16_t)(VAR_29 - (VAR_29 >> VAR_5));

         if (VAR_22 < VAR_6)
         {
            if (VAR_20 == VAR_21)
               return VAR_1;
            VAR_22 <<= 8;
            VAR_23 = (VAR_23 << 8) | VAR_0;
         }

            if (VAR_26 == 0xE8)
            {
               VAR_32 = VAR_9;
               if (VAR_10 < 4)
                  return VAR_1;
               VAR_9 += 4;
               VAR_10 -= 4;
            }
            else
            {
               VAR_32 = VAR_11;
               if (VAR_12 < 4)
                  return VAR_1;
               VAR_11 += 4;
               VAR_12 -= 4;
            }
         VAR_31 = (((uint32_t)VAR_32[0] << 24) | ((uint32_t)VAR_32[1] << 16) |
               ((uint32_t)VAR_32[2] << 8) | ((uint32_t)VAR_32[3])) - ((uint32_t)VAR_19 + 4);
         VAR_15[VAR_19++] = (uint8_t)VAR_31;
         if (VAR_19 == VAR_16)
            break;
         VAR_15[VAR_19++] = (uint8_t)(VAR_31 >> 8);
         if (VAR_19 == VAR_16)
            break;
         VAR_15[VAR_19++] = (uint8_t)(VAR_31 >> 16);
         if (VAR_19 == VAR_16)
            break;
         VAR_15[VAR_19++] = VAR_24 = (uint8_t)(VAR_31 >> 24);
      }
   }
   return (VAR_19 == VAR_16) ? VAR_2 : VAR_1;
}
