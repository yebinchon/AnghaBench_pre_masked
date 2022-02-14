
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int fdt32_t ;
struct TYPE_5__ {int fdt; scalar_t__ max_phandle; } ;
typedef TYPE_1__ DTBLOB_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*,char const*,scalar_t__,int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ,int) ;
 char* FUNC_5 (int ,int,char const*,int*) ;
 char* FUNC_6 (int ,int,char const**,int*) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,char const*) ;
 int FUNC_9 (int ,int,char*,int *,int) ;
 int FUNC_10 (char*,char const*,scalar_t__) ;

__attribute__((used)) static int FUNC_11(DTBLOB_T *VAR_2, DTBLOB_T *VAR_3)
{
   int VAR_4;
   int VAR_5 = 0;

   VAR_4 = FUNC_8(VAR_3->fdt, "/__fixups__");

   if (VAR_4 >= 0)
   {
      int VAR_6, VAR_7 = -1;

      VAR_6 = FUNC_3(VAR_3->fdt, VAR_4);

      if (VAR_6 >= 0)
      {

         VAR_7 = FUNC_8(VAR_2->fdt, "/__symbols__");

         if (VAR_7 < 0)
         {
            FUNC_2("No symbols found");
            return -VAR_0;
         }
      }

      for (;
           VAR_6 >= 0;
           VAR_6 = FUNC_7(VAR_3->fdt, VAR_6))
      {
         const char *VAR_8, *VAR_9, *VAR_10;
         const char *VAR_11;
         int VAR_12;
         uint32_t VAR_13;




         VAR_8 = FUNC_6(VAR_3->fdt, VAR_6,
                                                   &VAR_9, &VAR_5);
         if (!VAR_8)
         {
            FUNC_2("__fixups__ are borked");
            break;
         }


         if (VAR_9[0] == '/')
         {

            VAR_10 = VAR_9;
            VAR_11 = "path";
         }
         else
         {
            VAR_10 = FUNC_5(VAR_2->fdt, VAR_7, VAR_9,
                                      &VAR_5);
            if (!VAR_10)
            {
               FUNC_2("can't find symbol '%s'", VAR_9);
               break;
            }

            VAR_11 = "symbol";
         }

         VAR_12 = FUNC_8(VAR_2->fdt, VAR_10);
         if (VAR_12 < 0)
         {
            FUNC_2("%s '%s' is invalid", VAR_11, VAR_9);
            VAR_5 = VAR_12;
            break;
         }


         VAR_13 = FUNC_4(VAR_2->fdt, VAR_12);
         if (!VAR_13)
         {

            fdt32_t VAR_14;
            VAR_13 = ++VAR_2->max_phandle;
            VAR_14 = FUNC_0(VAR_13);

            VAR_5 = FUNC_9(VAR_2->fdt, VAR_12, "phandle",
                              &VAR_14, 4);

            if (VAR_5 != 0)
            {
               FUNC_2("failed to add a phandle");
               break;
            }
            FUNC_10("  phandle '%s'->%d", VAR_10, VAR_13);


            VAR_7 = FUNC_8(VAR_2->fdt, "/__symbols__");
         }



         VAR_5 = FUNC_1(VAR_3, VAR_8,
                                      VAR_13, VAR_1);
         if (VAR_5)
            break;
      }
   }

   return VAR_5;
}
