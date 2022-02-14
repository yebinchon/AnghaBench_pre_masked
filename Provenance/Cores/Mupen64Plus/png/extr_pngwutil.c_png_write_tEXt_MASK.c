
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ png_uint_32 ;
typedef int png_structrp ;
typedef scalar_t__ png_size_t ;
typedef char* png_const_charp ;
typedef int * png_const_bytep ;
typedef int png_byte ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_1 ;
 int FUNC_3 (int ,int *,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_6 (char*) ;

void
FUNC_7(png_structrp VAR_2, png_const_charp VAR_3, png_const_charp VAR_4,
    png_size_t VAR_5)
{
   png_uint_32 VAR_6;
   png_byte VAR_7[80];

   FUNC_1(1, "in png_write_tEXt");

   VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_7);

   if (VAR_6 == 0)
      FUNC_2(VAR_2, "tEXt: invalid keyword");

   if (VAR_4 == ((void*)0) || *VAR_4 == '\0')
      VAR_5 = 0;

   else
      VAR_5 = FUNC_6(VAR_4);

   if (VAR_5 > VAR_0 - (VAR_6+1))
      FUNC_2(VAR_2, "tEXt: text too long");


   FUNC_5(VAR_2, VAR_1,
       (png_uint_32) (VAR_6 + VAR_5 + 1));






   FUNC_3(VAR_2, VAR_7, VAR_6 + 1);

   if (VAR_5 != 0)
      FUNC_3(VAR_2, (png_const_bytep)VAR_4, VAR_5);

   FUNC_4(VAR_2);
}
