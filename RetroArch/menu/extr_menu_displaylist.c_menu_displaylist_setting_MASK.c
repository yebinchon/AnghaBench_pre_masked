
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int add_empty_entry; int parse_type; int enum_idx; TYPE_1__* info; } ;
typedef TYPE_2__ menu_displaylist_ctx_parse_entry_t ;
struct TYPE_4__ {int list; } ;


 int FUNC_0 (int ,int ,int ,int ) ;

bool FUNC_1(menu_displaylist_ctx_parse_entry_t *VAR_0)
{
   if (FUNC_0(
            VAR_0->info->list,
            VAR_0->enum_idx,
            VAR_0->parse_type,
            VAR_0->add_empty_entry) == -1)
      return 0;
   return 1;
}
