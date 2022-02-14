
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stbi__context ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 char FUNC_1 (int *) ;

__attribute__((used)) static char *FUNC_2(stbi__context *VAR_1, char *VAR_2)
{
   int VAR_3=0;
   char VAR_4 = '\0';

   VAR_4 = (char) FUNC_1(VAR_1);

   while (!FUNC_0(VAR_1) && VAR_4 != '\n') {
      VAR_2[VAR_3++] = VAR_4;
      if (VAR_3 == VAR_0-1) {

         while (!FUNC_0(VAR_1) && FUNC_1(VAR_1) != '\n')
            ;
         break;
      }
      VAR_4 = (char) FUNC_1(VAR_1);
   }

   VAR_2[VAR_3] = 0;
   return VAR_2;
}
