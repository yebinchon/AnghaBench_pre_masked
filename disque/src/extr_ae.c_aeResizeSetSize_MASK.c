
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int aeFiredEvent ;
typedef int aeFileEvent ;
struct TYPE_5__ {int setsize; int maxfd; TYPE_2__* events; TYPE_2__* fired; } ;
typedef TYPE_1__ aeEventLoop ;
struct TYPE_6__ {int mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int) ;
 void* FUNC_1 (TYPE_2__*,int) ;

int FUNC_2(aeEventLoop *VAR_3, int VAR_4) {
    int VAR_5;

    if (VAR_4 == VAR_3->setsize) return VAR_2;
    if (VAR_3->maxfd >= VAR_4) return VAR_0;
    if (FUNC_0(VAR_3,VAR_4) == -1) return VAR_0;

    VAR_3->events = FUNC_1(VAR_3->events,sizeof(aeFileEvent)*VAR_4);
    VAR_3->fired = FUNC_1(VAR_3->fired,sizeof(aeFiredEvent)*VAR_4);
    VAR_3->setsize = VAR_4;



    for (VAR_5 = VAR_3->maxfd+1; VAR_5 < VAR_4; VAR_5++)
        VAR_3->events[VAR_5].mask = VAR_1;
    return VAR_2;
}
