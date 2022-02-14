
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int error_color_16; int error_gray_16; int error_indexed; int error_color_8; int error_gray_8; int error_gray_4; int error_gray_2; } ;
typedef TYPE_1__ png_modifier ;
typedef char* png_const_charp ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(png_modifier *VAR_2, png_const_charp VAR_3, int VAR_4,
   int VAR_5)
{
   FUNC_0(VAR_0);

   if (VAR_3)
      FUNC_2("\nGamma correction with %s:\n", VAR_3);

   else
      FUNC_2("\nBasic gamma correction:\n");

   if (VAR_4)
   {
      FUNC_1(" 2 bit gray: ", VAR_2->error_gray_2);
      FUNC_1(" 4 bit gray: ", VAR_2->error_gray_4);
      FUNC_1(" 8 bit gray: ", VAR_2->error_gray_8);
      FUNC_1(" 8 bit color:", VAR_2->error_color_8);
      if (VAR_5)
         FUNC_1(" indexed:    ", VAR_2->error_indexed);
   }

   FUNC_1("16 bit gray: ", VAR_2->error_gray_16);
   FUNC_1("16 bit color:", VAR_2->error_color_16);

   FUNC_0(VAR_1);
}
