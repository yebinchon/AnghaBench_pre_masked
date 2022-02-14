
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* path; int display_name; } ;
typedef TYPE_1__ core_info_t ;
struct TYPE_5__ {size_t count; TYPE_1__* list; } ;
typedef TYPE_2__ core_info_list_t ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int ,size_t) ;

bool FUNC_3(core_info_list_t *VAR_0,
      const char *VAR_1, char *VAR_2, size_t VAR_3)
{
   size_t VAR_4;

   if (!VAR_0)
      return 0;

   for (VAR_4 = 0; VAR_4 < VAR_0->count; VAR_4++)
   {
      const core_info_t *VAR_5 = &VAR_0->list[VAR_4];

      if (!FUNC_1(FUNC_0(VAR_5->path), FUNC_0(VAR_1)))
         continue;

      if (!VAR_5->display_name)
         continue;

      FUNC_2(VAR_2, VAR_5->display_name, VAR_3);
      return 1;
   }

   return 0;
}
