
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int level; int (* compare ) (void const*,void const*) ;int * tail; TYPE_4__* header; scalar_t__ length; } ;
typedef TYPE_2__ skiplist ;
struct TYPE_8__ {int * backward; TYPE_1__* level; } ;
struct TYPE_6__ {scalar_t__ span; int * forward; } ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (int,int *) ;
 TYPE_2__* FUNC_1 (int) ;

skiplist *FUNC_2(int (*VAR_1)(const void *, const void *)) {
    int VAR_2;
    skiplist *VAR_3;

    VAR_3 = FUNC_1(sizeof(*VAR_3));
    VAR_3->level = 1;
    VAR_3->length = 0;
    VAR_3->header = FUNC_0(VAR_0,((void*)0));
    for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
        VAR_3->header->level[VAR_2].forward = ((void*)0);
        VAR_3->header->level[VAR_2].span = 0;
    }
    VAR_3->header->backward = ((void*)0);
    VAR_3->tail = ((void*)0);
    VAR_3->compare = VAR_1;
    return VAR_3;
}
