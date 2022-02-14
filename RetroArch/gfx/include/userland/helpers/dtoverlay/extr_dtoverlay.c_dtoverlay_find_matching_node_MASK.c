
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fdt; } ;
typedef TYPE_1__ DTBLOB_T ;


 char* FUNC_0 (int ,int,int *) ;
 int FUNC_1 (int ,int,int *) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,char const*,int) ;

int FUNC_4(DTBLOB_T *VAR_0, const char **VAR_1,
                                 int VAR_2)
{
   while (1)
   {
      const char *VAR_3;
      VAR_2 = FUNC_1(VAR_0->fdt, VAR_2, ((void*)0));
      if (VAR_2 < 0)
         break;
      VAR_3 = FUNC_0(VAR_0->fdt, VAR_2, ((void*)0));
      if (VAR_3)
      {
         int VAR_4;
         for (VAR_4 = 0; VAR_1[VAR_4]; VAR_4++)
         {
            const char *VAR_5 = VAR_1[VAR_4];
            int VAR_6 = FUNC_2(VAR_5);
            if ((FUNC_3(VAR_3, VAR_5, VAR_6) == 0) &&
                ((VAR_5[VAR_6] == '\0') ||
                 (VAR_5[VAR_6] == '@')))
               return VAR_2;
         }
      }
   }
   return -1;
}
