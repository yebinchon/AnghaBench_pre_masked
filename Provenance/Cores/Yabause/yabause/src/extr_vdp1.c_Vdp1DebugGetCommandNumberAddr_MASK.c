
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;


 int FUNC_0 (int ,scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static u32 FUNC_1(u32 VAR_1)
{
   u32 VAR_2 = 0;
   u32 VAR_3 = 0xFFFFFFFF;
   u32 VAR_4 = 0;
   u16 VAR_5;

   VAR_5 = FUNC_0(VAR_0, VAR_2);

   while (!(VAR_5 & 0x8000) && VAR_4 != VAR_1)
   {

      if ((VAR_5 & 0x000C) == 0x000C)

         return 0xFFFFFFFF;


      switch ((VAR_5 & 0x3000) >> 12)
      {
         case 0:
            VAR_2 += 0x20;
            break;
         case 1:
            VAR_2 = FUNC_0(VAR_0, VAR_2 + 2) * 8;
            break;
         case 2:
            if (VAR_3 == 0xFFFFFFFF)
               VAR_3 = VAR_2 + 0x20;

            VAR_2 = FUNC_0(VAR_0, VAR_2 + 2) * 8;
            break;
         case 3:
            if (VAR_3 != 0xFFFFFFFF) {
               VAR_2 = VAR_3;
               VAR_3 = 0xFFFFFFFF;
            }
            else
               VAR_2 += 0x20;
            break;
      }

      if (VAR_2 > 0x7FFE0)
         return 0xFFFFFFFF;
      VAR_5 = FUNC_0(VAR_0, VAR_2);
      VAR_4++;
   }

   if (VAR_4 == VAR_1)
      return VAR_2;
   else
      return 0xFFFFFFFF;
}
