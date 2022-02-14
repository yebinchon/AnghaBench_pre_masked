
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int fdt32_t ;
struct TYPE_6__ {int max_phandle; int fdt; } ;
typedef TYPE_1__ DTBLOB_T ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,...) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (TYPE_1__*,int,TYPE_1__*,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 char* FUNC_6 (int ,int,int *) ;
 void* FUNC_7 (int ,int,char*,int*) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,char const*,int) ;
 int FUNC_11 (int ,int,char*) ;
 scalar_t__ FUNC_12 (char const*,char*,int) ;

int FUNC_13(DTBLOB_T *VAR_1, DTBLOB_T *VAR_2)
{

   int VAR_3;

   for (VAR_3 = FUNC_5(VAR_2->fdt, 0);
        VAR_3 >= 0;
        VAR_3 = FUNC_8(VAR_2->fdt, VAR_3))
   {
      const char *VAR_4, *VAR_5;
      const char *VAR_6;
      int VAR_7, VAR_8;
      int VAR_9, VAR_10;

      VAR_4 = FUNC_6(VAR_2->fdt, VAR_3, ((void*)0));

      if (FUNC_12(VAR_4, "fragment@", 9) != 0 &&
          FUNC_12(VAR_4, "fragment-", 9) != 0)
         continue;
      VAR_6 = VAR_4 + 9;

      FUNC_1("Found fragment %s (offset %d)", VAR_6, VAR_3);


      VAR_8 = FUNC_11(VAR_2->fdt, VAR_3, "__overlay__");
      if (VAR_8 < 0)
      {
         if (FUNC_11(VAR_2->fdt, VAR_3, "__dormant__"))
            FUNC_1("fragment %s disabled", VAR_6);
         else
            FUNC_2("no overlay in fragment %s", VAR_6);
         continue;
      }

      VAR_5 = FUNC_7(VAR_2->fdt, VAR_3, "target-path", &VAR_9);
      if (VAR_5)
      {
         if (VAR_9 && (VAR_5[VAR_9 - 1] == '\0'))
            VAR_9--;
         VAR_7 = FUNC_10(VAR_1->fdt, VAR_5, VAR_9);
         if (VAR_7 < 0)
         {
            FUNC_2("invalid target-path '%.*s'", VAR_9, VAR_5);
            return FUNC_0(VAR_7);
         }
      }
      else
      {
         const void *VAR_11;
         VAR_11 = FUNC_7(VAR_2->fdt, VAR_3, "target", &VAR_9);
         if (!VAR_11)
         {
            FUNC_2("no target or target-path");
            return FUNC_0(VAR_9);
         }

         if (VAR_9 != 4)
            return FUNC_0(VAR_0);

         VAR_7 =
            FUNC_9(VAR_1->fdt,
                                       FUNC_4(*(fdt32_t *)VAR_11));
         if (VAR_7 < 0)
         {
            FUNC_2("invalid target");
            return FUNC_0(VAR_7);
         }
      }


      VAR_10 = FUNC_3(VAR_1, VAR_7, VAR_2,
                                     VAR_8, 0);
      if (VAR_10 != 0)
      {
         FUNC_2("merge failed");
         return VAR_10;
      }
   }

   VAR_1->max_phandle = VAR_2->max_phandle;

   return 0;
}
