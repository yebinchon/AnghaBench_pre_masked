
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {int flags; } ;
typedef TYPE_5__ redisContext ;
struct TYPE_13__ {int * tail; int * head; } ;
struct TYPE_14__ {void* patterns; void* channels; TYPE_3__ invalid; } ;
struct TYPE_12__ {int * tail; int * head; } ;
struct TYPE_11__ {int * cleanup; int * delWrite; int * addWrite; int * delRead; int * addRead; int * data; } ;
struct TYPE_16__ {TYPE_4__ sub; TYPE_2__ replies; int * onDisconnect; int * onConnect; TYPE_1__ ev; int * data; int * errstr; scalar_t__ err; TYPE_5__ c; } ;
typedef TYPE_6__ redisAsyncContext ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int *,int *) ;
 TYPE_6__* FUNC_1 (TYPE_5__*,int) ;

__attribute__((used)) static redisAsyncContext *FUNC_2(redisContext *VAR_2) {
    redisAsyncContext *VAR_3;

    VAR_3 = FUNC_1(VAR_2,sizeof(redisAsyncContext));
    if (VAR_3 == ((void*)0))
        return ((void*)0);

    VAR_2 = &(VAR_3->c);




    VAR_2->flags &= ~VAR_0;

    VAR_3->err = 0;
    VAR_3->errstr = ((void*)0);
    VAR_3->data = ((void*)0);

    VAR_3->ev.data = ((void*)0);
    VAR_3->ev.addRead = ((void*)0);
    VAR_3->ev.delRead = ((void*)0);
    VAR_3->ev.addWrite = ((void*)0);
    VAR_3->ev.delWrite = ((void*)0);
    VAR_3->ev.cleanup = ((void*)0);

    VAR_3->onConnect = ((void*)0);
    VAR_3->onDisconnect = ((void*)0);

    VAR_3->replies.head = ((void*)0);
    VAR_3->replies.tail = ((void*)0);
    VAR_3->sub.invalid.head = ((void*)0);
    VAR_3->sub.invalid.tail = ((void*)0);
    VAR_3->sub.channels = FUNC_0(&VAR_1,((void*)0));
    VAR_3->sub.patterns = FUNC_0(&VAR_1,((void*)0));
    return VAR_3;
}
