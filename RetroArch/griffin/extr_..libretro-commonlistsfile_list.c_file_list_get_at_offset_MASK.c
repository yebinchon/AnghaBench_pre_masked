
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* list; } ;
typedef TYPE_2__ file_list_t ;
struct TYPE_4__ {char* path; char* label; unsigned int type; size_t entry_idx; } ;



void FUNC_0(const file_list_t *VAR_0, size_t VAR_1,
      const char **VAR_2, const char **VAR_3, unsigned *VAR_4,
      size_t *VAR_5)
{
   if (!VAR_0)
      return;

   if (VAR_2)
      *VAR_2 = VAR_0->list[VAR_1].path;
   if (VAR_3)
      *VAR_3 = VAR_0->list[VAR_1].label;
   if (VAR_4)
      *VAR_4 = VAR_0->list[VAR_1].type;
   if (VAR_5)
      *VAR_5 = VAR_0->list[VAR_1].entry_idx;
}
