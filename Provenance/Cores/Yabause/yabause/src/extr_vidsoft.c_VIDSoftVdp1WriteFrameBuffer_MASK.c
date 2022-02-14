
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 () ;
 int VAR_0 ;

void FUNC_6(u32 VAR_1, u32 VAR_2, u32 VAR_3)
{
   FUNC_5();

   switch (VAR_1)
   {
   case 0:
      FUNC_2(VAR_0, VAR_2, VAR_3);
      break;
   case 1:

      VAR_3 = FUNC_0(VAR_3);

      FUNC_4(VAR_0, VAR_2, VAR_3);
      break;
   case 2:

      VAR_3 = FUNC_1(VAR_3);

      VAR_3 = (VAR_3 & 0xffff) << 16 | (VAR_3 & 0xffff0000) >> 16;
      FUNC_3(VAR_0, VAR_2, VAR_3);
      break;
   default:
      break;
   }
}
