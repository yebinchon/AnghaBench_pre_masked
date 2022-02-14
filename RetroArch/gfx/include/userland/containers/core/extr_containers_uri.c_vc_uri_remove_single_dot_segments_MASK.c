
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int ) ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3( char *VAR_0 )
{
   char *VAR_1 = VAR_0 - 1;

   while (VAR_1++)
   {
      if (*VAR_1 == '.')
      {
         switch (VAR_1[1])
         {
         case '/':
            FUNC_0(VAR_1, VAR_1 + 2, FUNC_2(VAR_1 + 2) + 1);
            break;
         case '\0':
            *VAR_1 = '\0';
            break;
         default:
            ;
         }
      }
      VAR_1 = FUNC_1(VAR_1, '/');
   }
}
