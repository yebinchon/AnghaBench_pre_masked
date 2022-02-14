
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 () ;
 int VAR_0 ;

void FUNC_6(u32 VAR_1, u32 VAR_2, void * VAR_3)
{
   u32 VAR_4;

   FUNC_5();

   switch (VAR_1)
   {
   case 0:
      VAR_4 = FUNC_2(VAR_0, VAR_2);
      *(u8*)VAR_3 = VAR_4;
      break;
   case 1:
      VAR_4 = FUNC_4(VAR_0, VAR_2);

      VAR_4 = FUNC_0(VAR_4);

      *(u16*)VAR_3 = VAR_4;
      break;
   case 2:
      *(u32*)VAR_3 = 0;

      break;
   default:
      break;
   }
}
