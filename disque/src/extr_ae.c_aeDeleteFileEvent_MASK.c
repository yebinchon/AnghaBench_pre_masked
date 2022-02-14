
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int mask; } ;
typedef TYPE_1__ aeFileEvent ;
struct TYPE_6__ {int setsize; int maxfd; TYPE_1__* events; } ;
typedef TYPE_2__ aeEventLoop ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int,int) ;

void FUNC_1(aeEventLoop *VAR_1, int VAR_2, int VAR_3)
{
    if (VAR_2 >= VAR_1->setsize) return;
    aeFileEvent *VAR_4 = &VAR_1->events[VAR_2];
    if (VAR_4->mask == VAR_0) return;

    FUNC_0(VAR_1, VAR_2, VAR_3);
    VAR_4->mask = VAR_4->mask & (~VAR_3);
    if (VAR_2 == VAR_1->maxfd && VAR_4->mask == VAR_0) {

        int VAR_5;

        for (VAR_5 = VAR_1->maxfd-1; VAR_5 >= 0; VAR_5--)
            if (VAR_1->events[VAR_5].mask != VAR_0) break;
        VAR_1->maxfd = VAR_5;
    }
}
