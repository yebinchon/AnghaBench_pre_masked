
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ idx; int type; int * entry; } ;
typedef TYPE_1__ menu_ctx_list_t ;
struct TYPE_5__ {int * (* list_get_entry ) (int ,int ,unsigned int) ;} ;


 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int ,unsigned int) ;

bool FUNC_1(menu_ctx_list_t *VAR_2)
{
   if (!VAR_0 || !VAR_0->list_get_entry)
   {
      VAR_2->entry = ((void*)0);
      return 0;
   }
   VAR_2->entry = VAR_0->list_get_entry(VAR_1,
         VAR_2->type, (unsigned int)VAR_2->idx);
   return 1;
}
