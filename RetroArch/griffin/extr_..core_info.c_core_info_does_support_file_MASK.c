
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int supported_extensions_list; } ;
typedef TYPE_1__ core_info_t ;


 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static bool FUNC_3(
      const core_info_t *VAR_0, const char *VAR_1)
{
   if (!VAR_0 || !VAR_0->supported_extensions_list)
      return 0;
   if (FUNC_1(VAR_1))
      return 0;

   return FUNC_2(
         VAR_0->supported_extensions_list, ".", FUNC_0(VAR_1));
}
