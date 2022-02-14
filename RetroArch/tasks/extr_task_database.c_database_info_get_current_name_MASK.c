
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {size_t list_index; TYPE_2__* list; } ;
typedef TYPE_3__ database_state_handle_t ;
struct TYPE_6__ {TYPE_1__* elems; } ;
struct TYPE_5__ {char const* data; } ;



__attribute__((used)) static const char *FUNC_0(
      database_state_handle_t *VAR_0)
{
   if (!VAR_0 || !VAR_0->list)
      return ((void*)0);
   return VAR_0->list->elems[VAR_0->list_index].data;
}
