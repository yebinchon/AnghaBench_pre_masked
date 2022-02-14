
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int*,int) ;

__attribute__((used)) static uint32_t FUNC_1(uint8_t *VAR_2,
      uint32_t VAR_3)
{
   uint32_t VAR_4 = 0;
   uint8_t VAR_5 = VAR_2[VAR_4++];
   uint32_t VAR_6 = VAR_3;
   uint8_t VAR_7, VAR_8;

   VAR_5 &= 0x1F;


   if (VAR_5 == VAR_1 || VAR_5 == VAR_0)
      VAR_4 += 3;


   if (VAR_4 + 2 >= VAR_6)
      return VAR_6;


   VAR_7 = VAR_2[VAR_4++];
   VAR_8 = VAR_2[VAR_4++];

   while (VAR_4 < VAR_6)
   {
      uint8_t VAR_9 = VAR_2[VAR_4];

      if (!VAR_7 && !VAR_8 && VAR_9 == 0x03)
      {

         VAR_6--;
         if (VAR_4 == VAR_6)
            break;
         FUNC_0(&VAR_2[VAR_4], &VAR_2[VAR_4 + 1], VAR_6 - VAR_4);
         VAR_9 = VAR_2[VAR_4];
      } else
         VAR_4++;

      VAR_7 = VAR_8;
      VAR_8 = VAR_9;
   }

   return VAR_6;
}
