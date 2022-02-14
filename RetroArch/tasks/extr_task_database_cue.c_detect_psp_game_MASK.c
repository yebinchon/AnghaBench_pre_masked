
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
   bool VAR_4 = 0;

   for (VAR_3 = 0; VAR_3 < 100000; VAR_3++)
   {
      FUNC_1(VAR_1, VAR_3, VAR_0);

      if (FUNC_0(VAR_1, VAR_2, 5) > 0)
      {
         VAR_2[5] = '\0';

         if (
               (FUNC_2(VAR_2, "ULES-"))
               || (FUNC_2(VAR_2, "ULUS-"))
               || (FUNC_2(VAR_2, "ULJS-"))

               || (FUNC_2(VAR_2, "ULEM-"))
               || (FUNC_2(VAR_2, "ULUM-"))
               || (FUNC_2(VAR_2, "ULJM-"))

               || (FUNC_2(VAR_2, "UCES-"))
               || (FUNC_2(VAR_2, "UCUS-"))
               || (FUNC_2(VAR_2, "UCJS-"))
               || (FUNC_2(VAR_2, "UCAS-"))

               || (FUNC_2(VAR_2, "NPEH-"))
               || (FUNC_2(VAR_2, "NPUH-"))
               || (FUNC_2(VAR_2, "NPJH-"))

               || (FUNC_2(VAR_2, "NPEG-"))
               || (FUNC_2(VAR_2, "NPUG-"))
               || (FUNC_2(VAR_2, "NPJG-"))
               || (FUNC_2(VAR_2, "NPHG-"))

               || (FUNC_2(VAR_2, "NPEZ-"))
               || (FUNC_2(VAR_2, "NPUZ-"))
               || (FUNC_2(VAR_2, "NPJZ-"))
               )
               {
                  FUNC_1(VAR_1, VAR_3, VAR_0);
                  if (FUNC_0(VAR_1, VAR_2, 10) > 0)
                  {





                     VAR_2[10] = '\0';
                     VAR_4 = 1;
                  }
                  break;
               }
      }
      else
         break;
   }

   return VAR_4;
}
