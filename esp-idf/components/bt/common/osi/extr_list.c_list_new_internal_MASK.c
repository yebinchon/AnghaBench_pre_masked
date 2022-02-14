
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int free_cb; scalar_t__ length; int * tail; int head; } ;
typedef TYPE_1__ list_t ;
typedef int list_free_cb ;


 scalar_t__ FUNC_0 (int) ;

list_t *FUNC_1(list_free_cb VAR_0)
{
    list_t *VAR_1 = (list_t *) FUNC_0(sizeof(list_t));
    if (!VAR_1) {
        return ((void*)0);
    }

    VAR_1->head = *(VAR_1->tail = ((void*)0));
    VAR_1->length = 0;
    VAR_1->free_cb = VAR_0;
    return VAR_1;
}
