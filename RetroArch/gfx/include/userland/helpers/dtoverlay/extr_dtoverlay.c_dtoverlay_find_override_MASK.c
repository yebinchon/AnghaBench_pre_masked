
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fdt; } ;
typedef TYPE_1__ DTBLOB_T ;


 int FUNC_0 (char*,...) ;
 char* FUNC_1 (int ,int,char const*,int*) ;
 int FUNC_2 (int ,char*) ;

const char *FUNC_3(DTBLOB_T *VAR_0, const char *VAR_1,
                                    int *VAR_2)
{
   int VAR_3;
   const char *VAR_4;
   int VAR_5;


   VAR_3 = FUNC_2(VAR_0->fdt, "/__overrides__");

   if (VAR_3 < 0)
   {
      FUNC_0("/__overrides__ node not found");
      *VAR_2 = VAR_3;
      return ((void*)0);
   }


   VAR_4 = FUNC_1(VAR_0->fdt, VAR_3, VAR_1, &VAR_5);
   *VAR_2 = VAR_5;
   if (VAR_4)
      FUNC_0("Found override %s", VAR_1);
   else
      FUNC_0("/__overrides__ has no %s property", VAR_1);

   return VAR_4;
}
