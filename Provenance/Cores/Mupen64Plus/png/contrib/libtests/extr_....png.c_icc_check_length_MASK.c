
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_uint_32 ;
typedef int png_const_structrp ;
typedef int png_const_charp ;
typedef int png_colorspacerp ;


 int FUNC_0 (int ,int ,int ,int,char*) ;

__attribute__((used)) static int
FUNC_1(png_const_structrp VAR_0, png_colorspacerp VAR_1,
    png_const_charp VAR_2, png_uint_32 VAR_3)
{
   if (VAR_3 < 132)
      return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3,
          "too short");

   return 1;
}
