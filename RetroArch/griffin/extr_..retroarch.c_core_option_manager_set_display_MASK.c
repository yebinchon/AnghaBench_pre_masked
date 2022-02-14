
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t size; TYPE_1__* opts; } ;
typedef TYPE_2__ core_option_manager_t ;
struct TYPE_4__ {char const* key; int visible; } ;


 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;

__attribute__((used)) static void FUNC_2(core_option_manager_t *VAR_0,
      const char *VAR_1, bool VAR_2)
{
   size_t VAR_3;

   if (!VAR_0 || FUNC_0(VAR_1))
      return;

   for (VAR_3 = 0; VAR_3 < VAR_0->size; VAR_3++)
   {
      if (FUNC_0(VAR_0->opts[VAR_3].key))
         continue;

      if (FUNC_1(VAR_0->opts[VAR_3].key, VAR_1))
      {
         VAR_0->opts[VAR_3].visible = VAR_2;
         return;
      }
   }
}
