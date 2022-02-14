
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int fdt; } ;
typedef TYPE_1__ DTBLOB_T ;


 int FUNC_0 (char*,char const*,char const*,char const*) ;
 TYPE_1__* FUNC_1 (int ,int,char const*,int*) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (int ,int,char const*,void*,int) ;
 int FUNC_4 (int ,int,char const*,TYPE_1__ const*,int) ;
 int FUNC_5 (void*) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (void*,TYPE_1__ const*,int) ;

int FUNC_8(DTBLOB_T *VAR_0, const char *VAR_1,
                           const char *VAR_2, const char *VAR_3)
{

   const DTBLOB_T *VAR_4;
   int VAR_5;
   int VAR_6 = 0;
   int VAR_7 = 0;

   VAR_5 = FUNC_2(VAR_0->fdt, VAR_1);
   if (VAR_5 < 0)
      return 0;

   VAR_4 = FUNC_1(VAR_0->fdt, VAR_5, VAR_3, &VAR_6);
   if (!VAR_4)
      return 0;

   VAR_7 = FUNC_4(VAR_0->fdt, VAR_5, VAR_2, VAR_4, VAR_6);
   if (VAR_7 != 0)
   {
      void *VAR_8;

      VAR_8 = FUNC_6(VAR_6);
      FUNC_7(VAR_8, VAR_4, VAR_6);

      VAR_7 = FUNC_3(VAR_0->fdt, VAR_5, VAR_2, VAR_8, VAR_6);

      FUNC_5(VAR_8);
   }

   if (VAR_7 == 0)
      FUNC_0("%s:%s=%s", VAR_1, VAR_2, VAR_3);
   return VAR_7;
}
