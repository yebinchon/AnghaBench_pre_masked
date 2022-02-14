
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fdt; } ;
typedef TYPE_1__ DTBLOB_T ;


 int FUNC_0 (char*,int,char const*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char const*,int) ;
 int FUNC_3 (char const*) ;

int FUNC_4(DTBLOB_T *VAR_0, const char *VAR_1, int VAR_2)
{
   int VAR_3 = 0;
   if (!VAR_2)
      VAR_2 = FUNC_3(VAR_1);

   FUNC_0("delete_node(%.*s)", VAR_2, VAR_1);
   VAR_3 = FUNC_2(VAR_0->fdt, VAR_1, VAR_2);
   if (VAR_3 < 0)
      return VAR_3;
   return FUNC_1(VAR_0->fdt, VAR_3);
}
