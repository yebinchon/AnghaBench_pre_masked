
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* tail; TYPE_2__* head; } ;
typedef TYPE_1__ list_t ;
struct TYPE_8__ {void* data; struct TYPE_8__* next; } ;
typedef TYPE_2__ list_node_t ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

bool FUNC_3(list_t *VAR_0, void *VAR_1)
{
    FUNC_0(VAR_0 != ((void*)0));
    FUNC_0(VAR_1 != ((void*)0));

    if (FUNC_2(VAR_0)) {
        return 0;
    }

    if (VAR_0->head->data == VAR_1) {
        list_node_t *VAR_2 = FUNC_1(VAR_0, VAR_0->head);
        if (VAR_0->tail == VAR_0->head) {
            VAR_0->tail = VAR_2;
        }
        VAR_0->head = VAR_2;
        return 1;
    }

    for (list_node_t *VAR_3 = VAR_0->head, *VAR_4 = VAR_0->head->next; VAR_4; VAR_3 = VAR_4, VAR_4 = VAR_4->next)
        if (VAR_4->data == VAR_1) {
            VAR_3->next = FUNC_1(VAR_0, VAR_4);
            if (VAR_0->tail == VAR_4) {
                VAR_0->tail = VAR_3;
            }
            return 1;
        }

    return 0;
}
