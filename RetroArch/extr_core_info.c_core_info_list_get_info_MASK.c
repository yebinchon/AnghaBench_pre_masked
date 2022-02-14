
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char const* path; } ;
typedef TYPE_1__ core_info_t ;
struct TYPE_7__ {size_t count; TYPE_1__* list; } ;
typedef TYPE_2__ core_info_list_t ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (int ,int ) ;

bool FUNC_3(core_info_list_t *VAR_0,
      core_info_t *VAR_1, const char *VAR_2)
{
   size_t VAR_3;
   if (!VAR_0 || !VAR_1)
      return 0;

   FUNC_0(VAR_1, 0, sizeof(*VAR_1));

   for (VAR_3 = 0; VAR_3 < VAR_0->count; VAR_3++)
   {
      const core_info_t *VAR_4 = &VAR_0->list[VAR_3];

      if (FUNC_2(FUNC_1(VAR_4->path),
               FUNC_1(VAR_2)))
      {
         *VAR_1 = *VAR_4;
         return 1;
      }
   }

   return 0;
}
