
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_structrp ;
typedef int png_size_t ;
typedef int png_const_charp ;
typedef scalar_t__ png_byte ;


 int FUNC_0 (scalar_t__*,int ,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*,unsigned int) ;
 int VAR_0 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ,scalar_t__*,int) ;
 int FUNC_5 (int ) ;

void
FUNC_6(png_structrp VAR_1, int VAR_2, png_const_charp VAR_3,
    png_const_charp VAR_4)
{
   png_byte VAR_5[64];
   png_size_t VAR_6, VAR_7, VAR_8;

   FUNC_1(1, "in png_write_sCAL_s");

   VAR_6 = FUNC_5(VAR_3);
   VAR_7 = FUNC_5(VAR_4);
   VAR_8 = VAR_6 + VAR_7 + 2;

   if (VAR_8 > 64)
   {
      FUNC_3(VAR_1, "Can't write sCAL (buffer too small)");
      return;
   }

   VAR_5[0] = (png_byte)VAR_2;
   FUNC_0(VAR_5 + 1, VAR_3, VAR_6 + 1);
   FUNC_0(VAR_5 + VAR_6 + 2, VAR_4, VAR_7);

   FUNC_2(3, "sCAL total length = %u", (unsigned int)VAR_8);
   FUNC_4(VAR_1, VAR_0, VAR_5, VAR_8);
}
