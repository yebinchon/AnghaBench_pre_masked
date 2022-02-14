
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int ) ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3( char *VAR_0 )
{
   char *VAR_1 = VAR_0;
   char *VAR_2;

   if (VAR_1[0] == '/')
      VAR_1++;



   VAR_2 = FUNC_1(VAR_1, '/');
   while (VAR_2)
   {
      if (VAR_1[0] != '.' || VAR_1[1] != '.' || VAR_1[2] != '/')
      {
         if (VAR_2[1] == '.' && VAR_2[2] == '.')
         {
            bool VAR_3 = 1;

            switch (VAR_2[3])
            {
            case '/':
               FUNC_0(VAR_1, VAR_2 + 4, FUNC_2(VAR_2 + 4) + 1);
               break;
            case '\0':
               *VAR_1 = '\0';
               break;
            default:
               VAR_3 = 0;
            }

            if (VAR_3)
            {


               if (VAR_1 < VAR_0 + 2)
                  break;


               VAR_2 = VAR_1 - 1;
               while (--VAR_2 >= VAR_0 && *VAR_2 != '/')
                  ;
            }
         }
      }
      VAR_1 = VAR_2 + 1;
      VAR_2 = FUNC_1(VAR_1, '/');
   }
}
