
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* list; } ;
typedef TYPE_2__ file_list_t ;
struct TYPE_4__ {void* actiondata; } ;



void *FUNC_0(const file_list_t *VAR_0, size_t VAR_1)
{
   if (!VAR_0)
      return ((void*)0);
   return VAR_0->list[VAR_1].actiondata;
}
