
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int flags; } ;
typedef TYPE_1__ queue ;
typedef scalar_t__ mstime_t ;
struct TYPE_15__ {scalar_t__ awakeme; scalar_t__ etime; scalar_t__ state; int flags; scalar_t__ qtime; int retry; int queue; int id; } ;
typedef TYPE_2__ job ;
struct TYPE_16__ {scalar_t__ unixtime; scalar_t__ mstime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,char*,TYPE_2__*) ;
 TYPE_1__* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 TYPE_7__ VAR_10 ;
 int FUNC_6 (int ,char*,int ,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (TYPE_2__*,scalar_t__) ;

void FUNC_11(job *VAR_11) {
    mstime_t VAR_12 = VAR_11->awakeme;

    FUNC_3(VAR_7,"PROCESSING",VAR_11);


    if (VAR_11->etime <= VAR_10.unixtime) {
        FUNC_6(VAR_7,"EVICT %.*s", VAR_2, VAR_11->id);
        FUNC_8(VAR_11);
        FUNC_2(VAR_11);
        return;
    }



    if ((VAR_11->state == VAR_4 ||
         VAR_11->state == VAR_5) &&
         VAR_11->flags & VAR_1 &&
         VAR_11->qtime-VAR_6 <= VAR_10.mstime)
    {
        if (VAR_11->state != VAR_5) FUNC_0(VAR_11);



        VAR_11->flags &= ~VAR_1;
        FUNC_9(VAR_11,0);
    }




    if (VAR_11->state == VAR_4 && VAR_11->qtime <= VAR_10.mstime) {
        queue *VAR_13;
        if (VAR_11->retry != 0 &&
            (VAR_13 = FUNC_4(VAR_11->queue)) != ((void*)0) &&
            VAR_13->flags & VAR_9)
        {
            FUNC_10(VAR_11,VAR_10.mstime+
                                 VAR_11->retry*1000+
                                 FUNC_5(VAR_0));
        } else {
            FUNC_1(VAR_11,0);
        }
    }


    if (VAR_11->state == VAR_5 && VAR_11->qtime <= VAR_10.mstime &&
        VAR_11->retry)
    {
        VAR_11->flags |= VAR_1;
        VAR_11->qtime = VAR_10.mstime +
                   VAR_11->retry*1000 +
                   FUNC_5(VAR_0);
        FUNC_9(VAR_11,0);
    }


    if (VAR_11->state == VAR_3) {
        FUNC_7(VAR_11);
        FUNC_9(VAR_11,0);
    }

    if (VAR_12 == VAR_11->awakeme)
        FUNC_3(VAR_8, "~~~WARNING~~~ NOT PROCESSABLE JOB", VAR_11);
}
