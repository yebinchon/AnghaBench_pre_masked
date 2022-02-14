
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ list_ptr; TYPE_1__* list; } ;
typedef TYPE_2__ database_info_handle_t ;
struct TYPE_4__ {scalar_t__ size; } ;



__attribute__((used)) static int FUNC_0(database_info_handle_t *VAR_0)
{
   VAR_0->list_ptr++;

   if (VAR_0->list_ptr < VAR_0->list->size)
      return 0;
   return -1;
}
