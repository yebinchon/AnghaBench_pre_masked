
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int png_structp ;
struct TYPE_4__ {int a_val; } ;
struct TYPE_5__ {scalar_t__ a_type; TYPE_1__ a_un; } ;
typedef TYPE_2__ Elf32_auxv_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int,TYPE_2__*,int) ;

__attribute__((used)) static int
FUNC_4(png_structp VAR_3)
{
   int VAR_4 = FUNC_1("/proc/self/auxv", VAR_2);
   Elf32_auxv_t VAR_5;


   if (VAR_4 == -1)
   {
      FUNC_2(VAR_3, "/proc/self/auxv open failed");
      return 0;
   }

   while (FUNC_3(VAR_3, VAR_4, &VAR_5, sizeof VAR_5) == sizeof VAR_5)
   {
      if (VAR_5.a_type == VAR_0 && (VAR_5.a_un.a_val & VAR_1) != 0)
      {
         FUNC_0(VAR_4);
         return 1;
      }
   }

   FUNC_0(VAR_4);
   return 0;
}
