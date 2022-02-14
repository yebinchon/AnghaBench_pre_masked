
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fdt; } ;
typedef TYPE_1__ DTBLOB_T ;


 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int,char const*,char const*) ;

int FUNC_3(DTBLOB_T *VAR_0, const char *VAR_1, const char *VAR_2)
{
   int VAR_3;

   VAR_3 = FUNC_1(VAR_0->fdt, "/aliases");
   if (VAR_3 < 0)
       VAR_3 = FUNC_0(VAR_0->fdt, 0, "aliases");

   return FUNC_2(VAR_0->fdt, VAR_3, VAR_1, VAR_2);
}
