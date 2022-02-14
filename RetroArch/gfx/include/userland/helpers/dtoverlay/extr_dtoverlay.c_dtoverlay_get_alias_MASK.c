
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fdt; } ;
typedef TYPE_1__ DTBLOB_T ;


 char* FUNC_0 (int ,int,char const*,int*) ;
 int FUNC_1 (int ,char*) ;

const char *FUNC_2(DTBLOB_T *VAR_0, const char *VAR_1)
{
   int VAR_2;
   int VAR_3;
   const char *VAR_4;

   VAR_2 = FUNC_1(VAR_0->fdt, "/aliases");

   VAR_4 = FUNC_0(VAR_0->fdt, VAR_2, VAR_1, &VAR_3);
   if (VAR_4 && !VAR_3)
       VAR_4 = "";
   return VAR_4;
}
