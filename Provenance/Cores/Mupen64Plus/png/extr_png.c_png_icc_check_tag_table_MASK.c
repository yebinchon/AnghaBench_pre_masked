
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ png_uint_32 ;
typedef int png_const_structrp ;
typedef int png_const_charp ;
typedef scalar_t__ png_const_bytep ;
typedef int * png_colorspacerp ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int *,int ,scalar_t__,char*) ;

int
FUNC_2(png_const_structrp VAR_0, png_colorspacerp VAR_1,
    png_const_charp VAR_2, png_uint_32 VAR_3,
    png_const_bytep VAR_4 )
{
   png_uint_32 VAR_5 = FUNC_0(VAR_4+128);
   png_uint_32 VAR_6;
   png_const_bytep VAR_7 = VAR_4+132;




   for (VAR_6=0; VAR_6 < VAR_5; ++VAR_6, VAR_7 += 12)
   {
      png_uint_32 VAR_8 = FUNC_0(VAR_7+0);
      png_uint_32 VAR_9 = FUNC_0(VAR_7+4);
      png_uint_32 VAR_10 = FUNC_0(VAR_7+8);







      if ((VAR_9 & 3) != 0)
      {




         (void)FUNC_1(VAR_0, ((void*)0), VAR_2, VAR_8,
             "ICC profile tag start not a multiple of 4");
      }




      if (VAR_9 > VAR_3 || VAR_10 > VAR_3 - VAR_9)
         return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_8,
             "ICC profile tag outside profile");
   }

   return 1;
}
