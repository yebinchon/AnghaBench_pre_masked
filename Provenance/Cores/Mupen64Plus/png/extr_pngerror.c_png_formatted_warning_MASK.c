
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char** png_warning_parameters ;
typedef int png_const_structrp ;
typedef char* png_const_charp ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

void
FUNC_1(png_const_structrp VAR_1, png_warning_parameters VAR_2,
    png_const_charp VAR_3)
{





   size_t VAR_4 = 0;
   char VAR_5[192];







   while (VAR_4<(sizeof VAR_5)-1 && *VAR_3 != '\0')
   {



      if (VAR_2 != ((void*)0) && *VAR_3 == '@' && VAR_3[1] != '\0')
      {
         int VAR_6 = *++VAR_3;
         static const char VAR_7[] = "123456789";
         int VAR_8 = 0;




         while (VAR_7[VAR_8] != VAR_6 &&
            VAR_7[VAR_8] != '\0')
            ++VAR_8;


         if (VAR_8 < VAR_0)
         {

            png_const_charp VAR_9 = VAR_2[VAR_8];
            png_const_charp VAR_10 = VAR_2[VAR_8] + (sizeof VAR_2[VAR_8]);





            while (VAR_4<(sizeof VAR_5)-1 && *VAR_9 != '\0' && VAR_9 < VAR_10)
               VAR_5[VAR_4++] = *VAR_9++;


            ++VAR_3;
            continue;
         }




      }




      VAR_5[VAR_4++] = *VAR_3++;
   }


   VAR_5[VAR_4] = '\0';





   FUNC_0(VAR_1, VAR_5);
}
