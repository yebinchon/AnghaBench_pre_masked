
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_0(u16 VAR_4)
{



   switch (VAR_4 & 0x7)
   {
      case 0:
         VAR_3 = 320;
         VAR_0=1;
         break;
      case 1:
         VAR_3 = 352;
         VAR_0=1;
         break;
      case 2:
         VAR_3 = 320;
         VAR_0=2;
         break;
      case 3:
         VAR_3 = 352;
         VAR_0=2;
         break;
      case 4:
         VAR_3 = 320;
         VAR_0=1;
         break;
      case 5:
         VAR_3 = 352;
         VAR_0=1;
         break;
      case 6:
         VAR_3 = 320;
         VAR_0=2;
         break;
      case 7:
         VAR_3 = 352;
         VAR_0=2;
         break;
   }


   switch ((VAR_4 >> 4) & 0x3)
   {
      case 0:
         VAR_2 = 224;
         break;
      case 1:
         VAR_2 = 240;
         break;
      case 2:
         VAR_2 = 256;
         break;
      default: break;
   }
   VAR_1=1;


   switch ((VAR_4 >> 6) & 0x3)
   {
      case 3:

         VAR_1=2;
         break;
      case 2:
      case 0:
      default: break;
   }
}
