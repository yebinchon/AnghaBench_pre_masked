
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int intfstream_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,unsigned int,int ) ;
 scalar_t__ FUNC_2 (char*,char*) ;

int FUNC_3(intfstream_t *VAR_1, char *VAR_2)
{
   unsigned VAR_3;
   int VAR_4 = 0;
   bool VAR_5 = 0;

   for (VAR_3 = 0; VAR_3 < 10000; VAR_3++)
   {
      FUNC_1(VAR_1, VAR_3, VAR_0);
      if (FUNC_0(VAR_1, VAR_2, 15) > 0)
      {
         unsigned VAR_6;
         VAR_2[15] = '\0';
         VAR_4 = 0;


         if (FUNC_2(VAR_2, "WBFS")) {
            continue;
         }


         for (VAR_6 = 0; VAR_6 < 15; VAR_6++)
         {

            if (VAR_2[VAR_6] == 45 || (VAR_2[VAR_6] >= 48 && VAR_2[VAR_6] <= 57) || (VAR_2[VAR_6] >= 65 && VAR_2[VAR_6] <= 90))
               VAR_4++;
            else
               break;
         }


         if (VAR_4 > 3 && VAR_4 < 9)
         {

            VAR_2[VAR_4] = '\0';
            VAR_5 = 1;
            break;
         }
      }
   }

   return VAR_5;
}
