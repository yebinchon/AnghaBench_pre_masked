
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_16__ {scalar_t__ needjobs_adhoc_attempt; int * needjobs_responders; scalar_t__ needjobs_bcast_attempt; } ;
typedef TYPE_1__ queue ;
struct TYPE_17__ {scalar_t__ retry; int queue; int qtime; int flags; int state; int id; } ;
typedef TYPE_2__ job ;
typedef int dictEntry ;
struct TYPE_18__ {int name; } ;
typedef TYPE_3__ clusterNode ;
struct TYPE_19__ {int unixtime; int mstime; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (unsigned char*,scalar_t__,unsigned char**,int ) ;
 scalar_t__ FUNC_2 (int *,TYPE_3__*,int *) ;
 int * FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *,TYPE_3__*) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 TYPE_2__* FUNC_8 (int ) ;
 TYPE_1__* FUNC_9 (int ) ;
 int FUNC_10 (TYPE_2__*) ;
 TYPE_5__ VAR_7 ;
 int FUNC_11 (int ,char*,int,int ) ;
 int FUNC_12 (TYPE_1__*) ;

void FUNC_13(clusterNode *VAR_8, uint32_t VAR_9, unsigned char *VAR_10, uint32_t VAR_11) {
    dictEntry *VAR_12;
    queue *VAR_13;
    uint32_t VAR_14;
    unsigned char *VAR_15 = VAR_10;

    for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {
        uint32_t VAR_16 = VAR_11 - (VAR_15-VAR_10);
        job *VAR_17, *VAR_18 = FUNC_1(VAR_15,VAR_16,&VAR_15,VAR_5);

        if (VAR_18 == ((void*)0)) {
            FUNC_11(VAR_4,
                "The %d-th job received via YOURJOBS from %.40s is corrupted.",
                (int)VAR_14+1, VAR_8->name);
            return;
        }




        VAR_17 = FUNC_8(VAR_18->id);
        if (VAR_17) {
            FUNC_7(VAR_18);
        } else {
            VAR_17 = VAR_18;
            VAR_17->state = VAR_3;
            FUNC_10(VAR_17);
        }


        VAR_17->flags &= ~VAR_2;





        if (VAR_17->retry == 0)
            VAR_17->qtime = VAR_7.mstime;

        if (FUNC_6(VAR_17,0) == VAR_0) continue;


        VAR_13 = FUNC_9(VAR_17->queue);
        if (!VAR_13) VAR_13 = FUNC_0(VAR_17->queue);
        if (VAR_13->needjobs_responders == ((void*)0))
            VAR_13->needjobs_responders = FUNC_3(&VAR_6,((void*)0));

        if (FUNC_2(VAR_13->needjobs_responders, VAR_8, ((void*)0)) == VAR_1) {



            VAR_13->needjobs_bcast_attempt = 0;
        }

        VAR_12 = FUNC_4(VAR_13->needjobs_responders, VAR_8);
        FUNC_5(VAR_12,VAR_7.unixtime);
        FUNC_12(VAR_13);
        VAR_13->needjobs_adhoc_attempt = 0;
    }
}
