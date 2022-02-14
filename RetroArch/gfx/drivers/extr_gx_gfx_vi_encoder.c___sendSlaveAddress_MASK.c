
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int FUNC_4 (int) ;

__attribute__((used)) static u32 FUNC_5(u8 VAR_1)
{
   u32 VAR_2;

   FUNC_3(VAR_0^1);
   FUNC_4(2);

   FUNC_2(0);
   for(VAR_2=0;VAR_2<8;VAR_2++)
   {
      if (VAR_1&0x80)
         FUNC_3(VAR_0);
      else
         FUNC_3(VAR_0^1);
      FUNC_4(2);

      FUNC_2(1);
      FUNC_4(2);

      FUNC_2(0);
      VAR_1 <<= 1;
   }

   FUNC_1(0);
   FUNC_4(2);

   FUNC_2(1);
   FUNC_4(2);

   if ((VAR_0 == 1) && FUNC_0()!=0)
      return 0;

   FUNC_3(VAR_0^1);
   FUNC_1(1);
   FUNC_2(0);

   return 1;
}
