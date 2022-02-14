
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,scalar_t__*,size_t) ;

__attribute__((used)) static void FUNC_1(
      uint16_t *VAR_1,
      unsigned VAR_2, unsigned VAR_3,
      unsigned VAR_4, unsigned VAR_5,
      unsigned VAR_6, unsigned VAR_7,
      uint16_t VAR_8, uint16_t VAR_9,
      bool VAR_10)
{
   unsigned VAR_11, VAR_12;
   unsigned VAR_13 = VAR_4 <= VAR_2 ? VAR_4 : VAR_2;
   unsigned VAR_14 = VAR_5 <= VAR_3 ? VAR_5 : VAR_3;
   unsigned VAR_15 = VAR_4 + VAR_6;
   unsigned VAR_16 = VAR_5 + VAR_7;
   size_t VAR_17;
   uint16_t VAR_18[VAR_0];
   uint16_t VAR_19[VAR_0];






   VAR_15 = VAR_15 <= VAR_2 ? VAR_15 : VAR_2;
   VAR_16 = VAR_16 <= VAR_3 ? VAR_16 : VAR_3;
   VAR_17 = (VAR_15 - VAR_13) * sizeof(uint16_t);


   if (VAR_17 == 0)
      return;



   if (VAR_8 == VAR_9)
   {
      uint16_t *VAR_20 = VAR_18 + VAR_13;
      uint16_t *VAR_21 = VAR_1 + VAR_13;


      for (VAR_11 = VAR_13; VAR_11 < VAR_15; VAR_11++)
         *(VAR_18 + VAR_11) = VAR_8;


      for (VAR_12 = VAR_14; VAR_12 < VAR_16; VAR_12++)
         FUNC_0(VAR_21 + (VAR_12 * VAR_2), VAR_20, VAR_17);
   }
   else if (VAR_10)
   {
      uint16_t *VAR_22 = ((void*)0);
      uint16_t *VAR_23 = ((void*)0);
      uint16_t *VAR_24 = ((void*)0);
      uint16_t *VAR_25 = ((void*)0);
      uint16_t *VAR_26 = VAR_1 + VAR_13;



      switch (VAR_14 & 0x3)
      {
         case 0x1:
            VAR_22 = VAR_18 + VAR_13;
            VAR_23 = VAR_19 + VAR_13;
            VAR_24 = VAR_23;
            VAR_25 = VAR_22;
            break;
         case 0x2:
            VAR_22 = VAR_19 + VAR_13;
            VAR_23 = VAR_22;
            VAR_24 = VAR_18 + VAR_13;
            VAR_25 = VAR_24;
            break;
         case 0x3:
            VAR_22 = VAR_19 + VAR_13;
            VAR_23 = VAR_18 + VAR_13;
            VAR_24 = VAR_23;
            VAR_25 = VAR_22;
            break;
         case 0x0:
         default:
            VAR_22 = VAR_18 + VAR_13;
            VAR_23 = VAR_22;
            VAR_24 = VAR_19 + VAR_13;
            VAR_25 = VAR_24;
            break;
      }


      for (VAR_11 = VAR_13; VAR_11 < VAR_15; VAR_11++)
      {
         bool VAR_27 = (((VAR_11 >> 1) & 1) == 0);
         *(VAR_18 + VAR_11) = VAR_27 ? VAR_8 : VAR_9;
         *(VAR_19 + VAR_11) = VAR_27 ? VAR_9 : VAR_8;
      }


      for (VAR_12 = VAR_14 ; VAR_12 < VAR_16; VAR_12 += 4)
         FUNC_0(VAR_26 + (VAR_12 * VAR_2), VAR_22, VAR_17);

      for (VAR_12 = VAR_14 + 1; VAR_12 < VAR_16; VAR_12 += 4)
         FUNC_0(VAR_26 + (VAR_12 * VAR_2), VAR_23, VAR_17);

      for (VAR_12 = VAR_14 + 2; VAR_12 < VAR_16; VAR_12 += 4)
         FUNC_0(VAR_26 + (VAR_12 * VAR_2), VAR_24, VAR_17);

      for (VAR_12 = VAR_14 + 3; VAR_12 < VAR_16; VAR_12 += 4)
         FUNC_0(VAR_26 + (VAR_12 * VAR_2), VAR_25, VAR_17);
   }
   else
   {
      uint16_t *VAR_28 = ((void*)0);
      uint16_t *VAR_29 = ((void*)0);
      uint16_t *VAR_30 = VAR_1 + VAR_13;



      if ((VAR_14 & 1) == 0)
      {
         VAR_28 = VAR_18 + VAR_13;
         VAR_29 = VAR_19 + VAR_13;
      }
      else
      {
         VAR_28 = VAR_19 + VAR_13;
         VAR_29 = VAR_18 + VAR_13;
      }


      for (VAR_11 = VAR_13; VAR_11 < VAR_15; VAR_11++)
      {
         bool VAR_31 = ((VAR_11 & 1) == 0);
         *(VAR_18 + VAR_11) = VAR_31 ? VAR_8 : VAR_9;
         *(VAR_19 + VAR_11) = VAR_31 ? VAR_9 : VAR_8;
      }


      for (VAR_12 = VAR_14 ; VAR_12 < VAR_16; VAR_12 += 2)
         FUNC_0(VAR_30 + (VAR_12 * VAR_2), VAR_28, VAR_17);

      for (VAR_12 = VAR_14 + 1; VAR_12 < VAR_16; VAR_12 += 2)
         FUNC_0(VAR_30 + (VAR_12 * VAR_2), VAR_29, VAR_17);
   }
}
