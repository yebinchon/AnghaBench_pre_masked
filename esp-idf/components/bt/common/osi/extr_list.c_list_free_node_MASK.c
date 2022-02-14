
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int length; int (* free_cb ) (int ) ;} ;
typedef TYPE_1__ list_t ;
struct TYPE_8__ {int data; struct TYPE_8__* next; } ;
typedef TYPE_2__ list_node_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;

list_node_t *FUNC_3(list_t *VAR_0, list_node_t *VAR_1)
{
    FUNC_0(VAR_0 != ((void*)0));
    FUNC_0(VAR_1 != ((void*)0));

    list_node_t *VAR_2 = VAR_1->next;

    if (VAR_0->free_cb) {
        VAR_0->free_cb(VAR_1->data);
    }
    FUNC_1(VAR_1);
    --VAR_0->length;

    return VAR_2;
}
