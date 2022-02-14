
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* head; } ;
typedef TYPE_1__ list_t ;
struct TYPE_6__ {int data; struct TYPE_6__* next; } ;
typedef TYPE_2__ list_node_t ;
typedef int (* list_iter_cb ) (int ,void*) ;


 int FUNC_0 (int ) ;

list_node_t *FUNC_1(const list_t *VAR_0, list_iter_cb VAR_1, void *VAR_2)
{
  FUNC_0(VAR_0 != ((void*)0));
  FUNC_0(VAR_1 != ((void*)0));

  for (list_node_t *VAR_3 = VAR_0->head; VAR_3; ) {
    list_node_t *VAR_4 = VAR_3->next;
    if (!VAR_1(VAR_3->data, VAR_2)) {
      return VAR_3;
    }
    VAR_3 = VAR_4;
  }
  return ((void*)0);
}
