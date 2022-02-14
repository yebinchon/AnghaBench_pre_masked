
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fdt; } ;
typedef TYPE_1__ DTBLOB_T ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (TYPE_1__*,char const*) ;
 char* FUNC_2 (int ,int,char const*,int*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char const*,int) ;
 int FUNC_5 (char const*) ;

int FUNC_6(DTBLOB_T *VAR_1, const char *VAR_2)
{
   int VAR_3, VAR_4;
   const char *VAR_5;

   VAR_5 = FUNC_1(VAR_1, VAR_2);

   if (VAR_5)
   {
      VAR_4 = FUNC_5(VAR_5);
   }
   else
   {
      VAR_3 = FUNC_3(VAR_1->fdt, "/__symbols__");

      if (VAR_3 < 0)
      {
         FUNC_0("No symbols found");
         return -VAR_0;
      }

      VAR_5 = FUNC_2(VAR_1->fdt, VAR_3, VAR_2, &VAR_4);
      if (VAR_4 < 0)
         return -VAR_0;
   }
   return FUNC_4(VAR_1->fdt, VAR_5, VAR_4);
}
