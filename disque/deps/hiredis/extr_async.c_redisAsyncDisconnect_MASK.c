
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int flags; } ;
typedef TYPE_2__ redisContext ;
struct TYPE_6__ {int * head; } ;
struct TYPE_8__ {TYPE_1__ replies; TYPE_2__ c; } ;
typedef TYPE_3__ redisAsyncContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;

void FUNC_1(redisAsyncContext *VAR_2) {
    redisContext *VAR_3 = &(VAR_2->c);
    VAR_3->flags |= VAR_0;
    if (!(VAR_3->flags & VAR_1) && VAR_2->replies.head == ((void*)0))
        FUNC_0(VAR_2);
}
