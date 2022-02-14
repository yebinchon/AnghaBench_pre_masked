
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* event_list; } ;
struct TYPE_7__ {TYPE_3__* client; TYPE_1__* list; } ;
struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_1__ ILEVENT_T ;
typedef TYPE_2__ COMPONENT_T ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;

void FUNC_2(COMPONENT_T *VAR_0)
{
   FUNC_0(VAR_0->client);
   while (VAR_0->list)
   {
      ILEVENT_T *VAR_1 = VAR_0->list->next;
      VAR_0->list->next = VAR_0->client->event_list;
      VAR_0->client->event_list = VAR_0->list;
      VAR_0->list = VAR_1;
   }
   FUNC_1(VAR_0->client);
}
