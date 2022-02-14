
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef size_t u16 ;
typedef scalar_t__ s8 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int*,int ,int) ;

__attribute__((used)) static u16 *FUNC_4(u32 VAR_0, u32 VAR_1, u32 VAR_2, u32 VAR_3)
{
   u8 *VAR_4;
   u16 *VAR_5;
   u32 VAR_6;
   u32 VAR_7;
   u32 VAR_8=0;


   if ((VAR_4 = (u8 *)FUNC_2(sizeof(u8) * (VAR_3 / VAR_1))) == ((void*)0))
      return ((void*)0);

   FUNC_3(VAR_4, 0, (VAR_3 / VAR_1));

   for (VAR_7 = ((2 * VAR_1) << 1); VAR_7 < (VAR_3 << 1); VAR_7 += (VAR_1 << 1))
   {

      if (((s8)FUNC_0(VAR_0 + VAR_7 + 1)) < 0)
      {
         VAR_6 = VAR_0+VAR_7+0x45;
         VAR_4[VAR_7 / (VAR_1 << 1)] = 1;


         for(;;)
         {
            u16 VAR_9;
            VAR_9 = (FUNC_0(VAR_6) << 8) | FUNC_0(VAR_6 + 2);
            if (VAR_9 == 0)
               break;
            VAR_6 += 4;
            if (((VAR_6-1) & ((VAR_1 << 1) - 1)) == 0)
               VAR_6 += 8;

            VAR_4[VAR_9] = 1;
         }
      }
   }

   if ((VAR_5 = (u16 *)FUNC_2(sizeof(u16) * VAR_2)) == ((void*)0))
   {
      FUNC_1(VAR_4);
      return ((void*)0);
   }


   for (VAR_7 = 2; VAR_7 < (VAR_3 / VAR_1); VAR_7++)
   {
      if (VAR_4[VAR_7] == 0)
      {
         VAR_5[VAR_8] = (u16)VAR_7;
         VAR_8++;

         if (VAR_8 >= VAR_2)
            break;
      }
   }


   FUNC_1(VAR_4);

   return VAR_5;
}
