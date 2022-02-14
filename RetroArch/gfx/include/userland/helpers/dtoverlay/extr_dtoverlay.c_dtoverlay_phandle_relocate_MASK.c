
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int fdt32_t ;
struct TYPE_3__ {int fdt; } ;
typedef TYPE_1__ DTBLOB_T ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (int const) ;
 int * FUNC_2 (int ,int,char const*,int*) ;
 int FUNC_3 (int ,int,char const*,scalar_t__) ;
 int FUNC_4 (char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_5(DTBLOB_T *VAR_1, int VAR_2,
                                      const char *VAR_3,
                                      uint32_t VAR_4)
{
   int VAR_5;
   const fdt32_t *VAR_6 = FUNC_2(VAR_1->fdt, VAR_2, VAR_3, &VAR_5);
   int VAR_7 = 0;

   if (VAR_6)
   {
      uint32_t VAR_8;

      if (VAR_5 < 4)
      {
         FUNC_0("%s property too small", VAR_3);
         return -VAR_0;
      }

      VAR_8 = FUNC_1(*VAR_6) + VAR_4;
      FUNC_4("  phandle_relocate %d->%d", FUNC_1(*VAR_6), VAR_8);

      VAR_7 = FUNC_3(VAR_1->fdt, VAR_2, VAR_3, VAR_8);
   }

   return VAR_7;
}
