
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;

char *FUNC_2(u32 VAR_1)
{
   u32 VAR_2;
   u16 VAR_3;

   if ((VAR_2 = FUNC_1(VAR_1)) != 0xFFFFFFFF)
   {
      VAR_3 = FUNC_0(VAR_0, VAR_2);

      if (VAR_3 & 0x8000)
         return "Draw End";


      switch (VAR_3 & 0x000F)
      {
         case 0:
            return "Normal Sprite";
         case 1:
            return "Scaled Sprite";
         case 2:
            return "Distorted Sprite";
         case 3:
            return "Distorted Sprite *";
         case 4:
            return "Polygon";
         case 5:
            return "Polyline";
         case 6:
            return "Line";
         case 7:
            return "Polyline *";
         case 8:
            return "User Clipping Coordinates";
         case 9:
            return "System Clipping Coordinates";
         case 10:
            return "Local Coordinates";
         case 11:
            return "User Clipping Coordinates *";
         default:
             return "Bad command";
      }
   }
   else
      return ((void*)0);
}
