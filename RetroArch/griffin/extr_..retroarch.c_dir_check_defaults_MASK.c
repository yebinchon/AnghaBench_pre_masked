
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char** dirs; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (char*) ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char const*) ;

void FUNC_7(void)
{
   unsigned VAR_3;






   if (FUNC_4("custom.ini"))

      return;

   for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
   {
      char *VAR_4 = ((void*)0);
      const char *VAR_5 = VAR_2.dirs[VAR_3];

      if (FUNC_6(VAR_5))
         continue;

      VAR_4 = (char*)FUNC_2(VAR_1 * sizeof(char));

      if (!VAR_4)
         continue;

      VAR_4[0] = '\0';
      FUNC_0(VAR_4,
            VAR_5,
            VAR_1 * sizeof(char));

      if (!FUNC_3(VAR_4))
         FUNC_5(VAR_4);

      FUNC_1(VAR_4);
   }
}
