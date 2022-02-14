
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_uint_32 ;
typedef size_t png_byte ;


 int VAR_0 ;
 char** VAR_1 ;
 size_t FUNC_0 (char*,size_t,size_t,char*) ;
 size_t FUNC_1 (char*,size_t,size_t,int) ;

__attribute__((used)) static size_t
FUNC_2(char *VAR_2, size_t VAR_3, size_t VAR_4, png_byte VAR_5,
    int VAR_6, unsigned int VAR_7, int VAR_8,
    png_uint_32 VAR_9, png_uint_32 VAR_10, int VAR_11)
{
   VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_1[VAR_5]);
   if (VAR_5 == 3)
   {
      VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_4, "[");
      VAR_4 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_7);
      VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_4, "]");
   }

   else if (VAR_7 != 0)
      VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_4, "+tRNS");

   VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_4, " ");
   VAR_4 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_6);
   VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_4, " bit");

   if (VAR_8 != VAR_0)
   {
      VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_4, " interlaced");
      if (VAR_11)
         VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_4, "(pngvalid)");
      else
         VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_4, "(libpng)");
   }

   if (VAR_9 > 0 || VAR_10 > 0)
   {
      VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_4, " ");
      VAR_4 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_9);
      VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_4, "x");
      VAR_4 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_10);
   }

   return VAR_4;
}
