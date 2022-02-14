
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_warning_parameters ;
typedef scalar_t__ png_int_32 ;
typedef char* png_charp ;
typedef int png_alloc_size_t ;


 char* FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,char*) ;

void
FUNC_2(png_warning_parameters VAR_1, int VAR_2, int VAR_3,
    png_int_32 VAR_4)
{
   png_alloc_size_t VAR_5;
   png_charp VAR_6;
   char VAR_7[VAR_0];


   VAR_5 = (png_alloc_size_t)VAR_4;
   if (VAR_4 < 0)
      VAR_5 = ~VAR_5 + 1;

   VAR_6 = FUNC_0(VAR_7, VAR_3, VAR_5);

   if (VAR_4 < 0 && VAR_6 > VAR_7)
      *--VAR_6 = '-';

   FUNC_1(VAR_1, VAR_2, VAR_6);
}
