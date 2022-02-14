
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ length; int * tail; int * head; } ;
typedef TYPE_1__ list_t ;
typedef int list_node_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (TYPE_1__*,int *) ;

void FUNC_2(list_t *VAR_0)
{
    FUNC_0(VAR_0 != ((void*)0));
    for (list_node_t *VAR_1 = VAR_0->head; VAR_1; ) {
        VAR_1 = FUNC_1(VAR_0, VAR_1);
    }
    VAR_0->head = ((void*)0);
    VAR_0->tail = ((void*)0);
    VAR_0->length = 0;
}
