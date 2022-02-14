
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct fdt_property {char* data; } ;
typedef int overlay_path ;
typedef int base_path ;
struct TYPE_4__ {int fdt; } ;
typedef TYPE_1__ DTBLOB_T ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int,char const*,int) ;
 int FUNC_2 (int ,int,char const*,void const*,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 char* FUNC_5 (int ,int,int*) ;
 int FUNC_6 (int ,int,char*,int) ;
 struct fdt_property* FUNC_7 (int ,int,char const*,int*) ;
 void* FUNC_8 (int ,int,char const**,int*) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ,int,char const*,void const*,int) ;
 int FUNC_12 (int ,int,char const*,int) ;
 scalar_t__ FUNC_13 (char const*,char*) ;

__attribute__((used)) static int FUNC_14(DTBLOB_T *VAR_1, int VAR_2,
                                    const DTBLOB_T *VAR_3,
                                    int VAR_4, int VAR_5)
{
   int VAR_6, VAR_7;
   int VAR_8 = 0;

   if (VAR_0)
   {
      char VAR_9[256];
      char VAR_10[256];
      FUNC_6(VAR_1->fdt, VAR_2, VAR_9, sizeof(VAR_9));
      FUNC_6(VAR_3->fdt, VAR_4, VAR_10,
                   sizeof(VAR_10));

      FUNC_0("merge_fragment(%s,%s)", VAR_9,
                      VAR_10);
   }


   for (VAR_6 = FUNC_3(VAR_3->fdt, VAR_4);
        (VAR_6 >= 0) && (VAR_8 == 0);
        VAR_6 = FUNC_9(VAR_3->fdt, VAR_6))
   {
      const char *VAR_11;
      const void *VAR_12;
      int VAR_13;
      struct fdt_property *VAR_14;
      int VAR_15;

      VAR_12 = FUNC_8(VAR_3->fdt, VAR_6,
                                       &VAR_11, &VAR_13);


      if ((FUNC_13(VAR_11, "name") == 0) ||
          ((VAR_5 == 0) && ((FUNC_13(VAR_11, "phandle") == 0) ||
       (FUNC_13(VAR_11, "linux,phandle") == 0))))
          continue;

      FUNC_0("  +prop(%s)", VAR_11);

      if ((FUNC_13(VAR_11, "bootargs") == 0) &&
         ((VAR_14 = FUNC_7(VAR_1->fdt, VAR_2, VAR_11, &VAR_15)) != ((void*)0)) &&
         (VAR_15 > 0) && *VAR_14->data)
      {
         VAR_14->data[VAR_15 - 1] = ' ';
         VAR_8 = FUNC_2(VAR_1->fdt, VAR_2, VAR_11, VAR_12, VAR_13);
      }
      else
         VAR_8 = FUNC_11(VAR_1->fdt, VAR_2, VAR_11, VAR_12, VAR_13);
   }


   for (VAR_7 = FUNC_4(VAR_3->fdt, VAR_4);
        (VAR_7 >= 0) && (VAR_8 == 0);
        VAR_7 = FUNC_10(VAR_3->fdt, VAR_7))
   {
      const char *VAR_16;
      int VAR_17;
      int VAR_18;

      VAR_16 = FUNC_5(VAR_3->fdt, VAR_7, &VAR_17);

      VAR_18 = FUNC_12(VAR_1->fdt, VAR_2,
                                                 VAR_16, VAR_17);
      if (VAR_18 < 0)
         VAR_18 = FUNC_1(VAR_1->fdt, VAR_2,
                                                 VAR_16, VAR_17);

      if (VAR_18 >= 0)
      {
         VAR_8 = FUNC_14(VAR_1, VAR_18,
                                        VAR_3, VAR_7,
                                        VAR_5 + 1);
      }
      else
      {
         VAR_8 = VAR_18;
      }
   }

   FUNC_0("merge_fragment() end");

   return VAR_8;
}
