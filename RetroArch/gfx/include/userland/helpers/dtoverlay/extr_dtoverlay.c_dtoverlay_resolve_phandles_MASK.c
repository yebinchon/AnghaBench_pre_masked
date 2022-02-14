
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int max_phandle; int fdt; } ;
typedef TYPE_1__ DTBLOB_T ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char const*,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int,int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,int,char*,int ) ;
 char* FUNC_4 (int ,int,char*,int*) ;
 int FUNC_5 (int ,int,int *) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_8(DTBLOB_T *VAR_1, DTBLOB_T *VAR_2)
{
   int VAR_3;
   int VAR_4;
   int VAR_5 = 0;



   for (VAR_4 = 0;
        VAR_4 >= 0;
        VAR_4 = FUNC_5(VAR_2->fdt, VAR_4, ((void*)0)))
   {
      FUNC_3(VAR_2, VAR_4, "phandle",
                                 VAR_1->max_phandle);
      FUNC_3(VAR_2, VAR_4, "linux,phandle",
                                 VAR_1->max_phandle);
   }

   VAR_3 = FUNC_6(VAR_2->fdt, "/__local_fixups__");
   if (VAR_3 >= 0)
   {
      const char *VAR_6;





      VAR_6 =
         FUNC_4(VAR_2->fdt, VAR_3, "fixup", &VAR_5);
      if (VAR_6)
      {

         VAR_5 = FUNC_0(VAR_2, VAR_6,
                                      VAR_1->max_phandle, VAR_0);
      }
      else
      {
          VAR_5 = FUNC_1(VAR_2, VAR_3,
                                            0, VAR_1->max_phandle);
      }
      if (VAR_5 < 0)
      {
         FUNC_2("error applying local fixups");
         return VAR_5;
      }
   }

   VAR_2->max_phandle += VAR_1->max_phandle;
   FUNC_7("  +overlay max phandle +%d -> %d", VAR_1->max_phandle, VAR_2->max_phandle);

   return VAR_5;
}
