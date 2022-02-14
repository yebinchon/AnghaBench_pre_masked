
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* obj; } ;
typedef TYPE_1__ skiplistNode ;
struct TYPE_6__ {TYPE_1__* tail; } ;
typedef TYPE_2__ skiplist ;


 int FUNC_0 (TYPE_2__*,void*) ;

void *FUNC_1(skiplist *VAR_0) {
    skiplistNode *VAR_1 = VAR_0->tail;

    if (!VAR_1) return ((void*)0);
    void *VAR_2 = VAR_1->obj;
    FUNC_0(VAR_0,VAR_2);
    return VAR_2;
}
