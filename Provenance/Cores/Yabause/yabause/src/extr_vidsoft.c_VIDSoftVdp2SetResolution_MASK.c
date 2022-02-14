
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_1(u16 VAR_6)
{



   switch (VAR_6 & 0x7)
   {
      case 0:
         VAR_1 = VAR_5 = 320;
         break;
      case 1:
         VAR_1 = VAR_5 = 352;
         break;
      case 2:
         VAR_5 = 640;
         VAR_1 = 320;
         break;
      case 3:
         VAR_5 = 704;
         VAR_1 = 352;
         break;
      case 4:
         VAR_1 = VAR_5 = 320;
         break;
      case 5:
         VAR_1 = VAR_5 = 352;
         break;
      case 6:
         VAR_5 = 640;
         VAR_1 = 320;
         break;
      case 7:
         VAR_5 = 704;
         VAR_1 = 352;
         break;
   }

   if ((VAR_5 == 704) || (VAR_5 == 640))
      VAR_3 = 1;
   else
      VAR_3 = 0;


   switch ((VAR_6 >> 4) & 0x3)
   {
      case 0:
         VAR_0 = VAR_4 = 224;
         break;
      case 1:
         VAR_0 = VAR_4 = 240;
         break;
      case 2:
         VAR_0 = VAR_4 = 256;
         break;
      default: break;
   }


   switch ((VAR_6 >> 6) & 0x3)
   {
      case 3:
         VAR_4 *= 2;
         VAR_2=1;
         break;
      case 2:
      case 0:
      default:
         VAR_2 = 0;
         break;
   }

   FUNC_0(VAR_5, VAR_4);
}
