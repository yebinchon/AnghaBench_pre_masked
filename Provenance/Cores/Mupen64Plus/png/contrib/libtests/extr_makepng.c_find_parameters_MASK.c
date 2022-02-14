
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* png_const_charp ;
typedef char* png_charp ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_2(png_const_charp VAR_1, png_charp VAR_2, png_charp *VAR_3,
   int VAR_4)
{



   int VAR_5;
   for (VAR_5=0; *VAR_2 && VAR_5<VAR_4; ++VAR_5)
   {
      VAR_3[VAR_5] = VAR_2;
      while (*++VAR_2) if (*VAR_2 == '\n' || *VAR_2 == ':')
      {
         *VAR_2++ = 0;
         break;
      }
   }

   if (*VAR_2)
   {
      FUNC_1(VAR_0, "--insert %s: too many parameters (%s)\n", VAR_1, VAR_2);
      FUNC_0(1);
   }

   VAR_3[VAR_5] = ((void*)0);
   return VAR_5;
}
