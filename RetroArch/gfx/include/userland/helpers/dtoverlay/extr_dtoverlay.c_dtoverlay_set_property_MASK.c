
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fdt; } ;
typedef TYPE_1__ DTBLOB_T ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (int ,int,char const*,void const*,int) ;

int FUNC_2(DTBLOB_T *VAR_0, int VAR_1,
                           const char *VAR_2, const void *VAR_3, int VAR_4)
{
   int VAR_5 = FUNC_1(VAR_0->fdt, VAR_1, VAR_2, VAR_3, VAR_4);
   if (VAR_5 < 0)
      FUNC_0("Failed to set property '%s'", VAR_2);
   return VAR_5;
}
