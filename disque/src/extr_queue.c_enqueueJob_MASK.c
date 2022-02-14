
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int flags; int jobs_in; int atime; int sl; } ;
typedef TYPE_1__ queue ;
struct TYPE_12__ {scalar_t__ state; scalar_t__ qtime; int retry; int flags; int queue; int num_deliv; int num_nacks; int id; } ;
typedef TYPE_2__ job ;
struct TYPE_13__ {scalar_t__ mstime; int unixtime; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (TYPE_2__*,unsigned char) ;
 TYPE_1__* FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_6__ VAR_12 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int ,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int * FUNC_7 (int ,TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int ) ;

int FUNC_9(job *VAR_13, int VAR_14) {
    if (VAR_13->state == VAR_9 || VAR_13->qtime == 0) return VAR_2;
    if (VAR_13->retry == 0 && VAR_13->flags & VAR_7) return VAR_2;

    FUNC_5(VAR_10,"QUEUED %.*s", VAR_8, VAR_13->id);

    VAR_13->state = VAR_9;


    if (VAR_13->retry) {
        VAR_13->flags |= VAR_6;
        VAR_13->qtime = VAR_12.mstime +
                     VAR_13->retry*1000 +
                     FUNC_3(VAR_4);
    } else {
        VAR_13->qtime = 0;
    }





    if (VAR_13->flags & VAR_5 || VAR_14) {
        unsigned char VAR_15 = VAR_14 ? VAR_1 :
                                     VAR_0;
        FUNC_0(VAR_13, VAR_15);



        if (VAR_14)
            VAR_13->num_nacks++;
        else
            VAR_13->num_deliv++;
    } else {
        VAR_13->flags |= VAR_5;
    }

    FUNC_8(VAR_13,0);
    queue *VAR_16 = FUNC_2(VAR_13->queue);
    if (!VAR_16) VAR_16 = FUNC_1(VAR_13->queue);
    FUNC_4(FUNC_7(VAR_16->sl,VAR_13) != ((void*)0));
    VAR_16->atime = VAR_12.unixtime;
    VAR_16->jobs_in++;
    if (!(VAR_16->flags & VAR_11)) FUNC_6(VAR_16);
    return VAR_3;
}
