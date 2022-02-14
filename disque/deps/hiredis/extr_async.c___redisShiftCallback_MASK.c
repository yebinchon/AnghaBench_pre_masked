
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* tail; TYPE_2__* head; } ;
typedef TYPE_1__ redisCallbackList ;
struct TYPE_9__ {struct TYPE_9__* next; } ;
typedef TYPE_2__ redisCallback ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_2(redisCallbackList *VAR_2, redisCallback *VAR_3) {
    redisCallback *VAR_4 = VAR_2->head;
    if (VAR_4 != ((void*)0)) {
        VAR_2->head = VAR_4->next;
        if (VAR_4 == VAR_2->tail)
            VAR_2->tail = ((void*)0);


        if (VAR_3 != ((void*)0))
            FUNC_1(VAR_3,VAR_4,sizeof(*VAR_4));
        FUNC_0(VAR_4);
        return VAR_1;
    }
    return VAR_0;
}
