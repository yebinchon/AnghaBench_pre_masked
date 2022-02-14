
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_7__ {long when_sec; long long id; long when_ms; int (* timeProc ) (TYPE_2__*,long long,int ) ;struct TYPE_7__* next; int clientData; int (* finalizerProc ) (TYPE_2__*,int ) ;} ;
typedef TYPE_1__ aeTimeEvent ;
struct TYPE_8__ {scalar_t__ lastTime; int timeEventNextId; TYPE_1__* timeEventHead; } ;
typedef TYPE_2__ aeEventLoop ;


 long long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,long*,long*) ;
 int FUNC_1 (long*,long*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,long long,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(aeEventLoop *VAR_2) {
    int VAR_3 = 0;
    aeTimeEvent *VAR_4, *VAR_5;
    long long VAR_6;
    time_t VAR_7 = FUNC_4(((void*)0));
    if (VAR_7 < VAR_2->lastTime) {
        VAR_4 = VAR_2->timeEventHead;
        while(VAR_4) {
            VAR_4->when_sec = 0;
            VAR_4 = VAR_4->next;
        }
    }
    VAR_2->lastTime = VAR_7;

    VAR_5 = ((void*)0);
    VAR_4 = VAR_2->timeEventHead;
    VAR_6 = VAR_2->timeEventNextId-1;
    while(VAR_4) {
        long VAR_8, VAR_9;
        long long VAR_10;


        if (VAR_4->id == VAR_0) {
            aeTimeEvent *VAR_11 = VAR_4->next;
            if (VAR_5 == ((void*)0))
                VAR_2->timeEventHead = VAR_4->next;
            else
                VAR_5->next = VAR_4->next;
            if (VAR_4->finalizerProc)
                VAR_4->finalizerProc(VAR_2, VAR_4->clientData);
            FUNC_5(VAR_4);
            VAR_4 = VAR_11;
            continue;
        }






        if (VAR_4->id > VAR_6) {
            VAR_4 = VAR_4->next;
            continue;
        }
        FUNC_1(&VAR_8, &VAR_9);
        if (VAR_8 > VAR_4->when_sec ||
            (VAR_8 == VAR_4->when_sec && VAR_9 >= VAR_4->when_ms))
        {
            int VAR_12;

            VAR_10 = VAR_4->id;
            VAR_12 = VAR_4->timeProc(VAR_2, VAR_10, VAR_4->clientData);
            VAR_3++;
            if (VAR_12 != VAR_1) {
                FUNC_0(VAR_12,&VAR_4->when_sec,&VAR_4->when_ms);
            } else {
                VAR_4->id = VAR_0;
            }
        }
        VAR_5 = VAR_4;
        VAR_4 = VAR_4->next;
    }
    return VAR_3;
}
