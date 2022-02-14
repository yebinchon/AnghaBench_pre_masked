
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int loading_cheat_size; } ;


 TYPE_1__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char*,int *,int ) ;

__attribute__((used)) static void FUNC_2(char *VAR_2, char *VAR_3)
{
   VAR_1 = 0;

   if (FUNC_0(VAR_2, "cheats"))
   {
      VAR_0.loading_cheat_size = (unsigned)FUNC_1(VAR_3, ((void*)0), 0);

      if (VAR_1 != 0)
         VAR_0.loading_cheat_size = 0;
   }
}
