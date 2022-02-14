
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* list; } ;
typedef TYPE_2__ file_list_t ;
struct TYPE_4__ {int * actiondata; } ;


 int FUNC_0 (int *) ;

void FUNC_1(const file_list_t *VAR_0, size_t VAR_1)
{
   if (!VAR_0)
      return;
   if (VAR_0->list[VAR_1].actiondata)
       FUNC_0(VAR_0->list[VAR_1].actiondata);
   VAR_0->list[VAR_1].actiondata = ((void*)0);
}
