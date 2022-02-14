
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int entry_type; int idx; int label; int fullpath; int path; int list; } ;
typedef TYPE_1__ menu_ctx_list_t ;
struct TYPE_5__ {int (* list_insert ) (int ,int ,int ,int ,int ,int ,int ) ;} ;


 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ) ;

bool FUNC_1(menu_ctx_list_t *VAR_2)
{
   if (!VAR_2 || !VAR_0 || !VAR_0->list_insert)
      return 0;
   VAR_0->list_insert(VAR_1,
         VAR_2->list, VAR_2->path, VAR_2->fullpath,
         VAR_2->label, VAR_2->idx, VAR_2->entry_type);

   return 1;
}
