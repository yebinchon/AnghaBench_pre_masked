
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 char* FUNC_0 (unsigned int) ;
 int* VAR_1 ;
 scalar_t__ FUNC_1 (char const*,char const*) ;

void FUNC_2(void)
{
   unsigned VAR_2, VAR_3, VAR_4;

   for(VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
      VAR_1[VAR_2] = 0;

   for(VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
   {
      const char *VAR_5 = FUNC_0(VAR_2);
      if ( !VAR_5 || VAR_1[VAR_2] )
         continue;

      VAR_4 = 2;

      for(VAR_3 = VAR_2+1; VAR_3 < VAR_0; VAR_3++)
      {
         const char *VAR_6 = FUNC_0(VAR_3);

         if (!VAR_6)
            continue;


         if (FUNC_1(VAR_5, VAR_6) &&
               VAR_1[VAR_3]==0 )
         {

            VAR_1[VAR_2] = 1;

            VAR_1[VAR_3] = VAR_4++;
         }
      }
   }
}
