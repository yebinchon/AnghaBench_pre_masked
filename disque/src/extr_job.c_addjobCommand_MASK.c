
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_42__ TYPE_7__ ;
typedef struct TYPE_41__ TYPE_5__ ;
typedef struct TYPE_40__ TYPE_4__ ;
typedef struct TYPE_39__ TYPE_3__ ;
typedef struct TYPE_38__ TYPE_2__ ;
typedef struct TYPE_37__ TYPE_1__ ;
typedef struct TYPE_36__ TYPE_15__ ;
typedef struct TYPE_35__ TYPE_13__ ;
typedef struct TYPE_34__ TYPE_10__ ;


typedef int uint64_t ;
struct TYPE_39__ {int flags; } ;
typedef TYPE_3__ queue ;
typedef int mstime_t ;
struct TYPE_40__ {long long repl; int ctime; long long delay; long long retry; int nodes_delivered; int state; int nodes_confirmed; scalar_t__ qtime; int body; scalar_t__ etime; TYPE_15__* queue; } ;
typedef TYPE_4__ job ;
typedef int dictEntry ;
typedef int clusterNode ;
struct TYPE_37__ {int added_node_time; TYPE_4__* job; int timeout; } ;
struct TYPE_41__ {int argc; TYPE_1__ bpop; TYPE_15__** argv; } ;
typedef TYPE_5__ client ;
struct TYPE_42__ {int syntaxerr; } ;
struct TYPE_38__ {int size; int reachable_nodes_count; } ;
struct TYPE_36__ {char* ptr; } ;
struct TYPE_35__ {int name; } ;
struct TYPE_34__ {scalar_t__ mstime; scalar_t__ unixtime; TYPE_2__* cluster; } ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 long long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 (TYPE_5__*,char*) ;
 int FUNC_3 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_4 (TYPE_5__*,int ) ;
 int FUNC_5 (TYPE_5__*,int ) ;
 int VAR_9 ;
 int FUNC_6 (TYPE_4__*,int,int) ;
 int FUNC_7 (int *,TYPE_4__*,long long) ;
 TYPE_4__* FUNC_8 (int *,int ,long long,long long) ;
 int FUNC_9 (int ,int ,TYPE_13__*) ;
 int FUNC_10 (int *,int *) ;
 int * FUNC_11 (int ) ;
 int * FUNC_12 (int *) ;
 int FUNC_13 (TYPE_4__*,int ) ;
 int FUNC_14 (TYPE_4__*) ;
 int FUNC_15 (TYPE_15__*,long long*) ;
 scalar_t__ FUNC_16 () ;
 int FUNC_17 (TYPE_5__*,TYPE_15__*,int *,int ) ;
 int FUNC_18 (TYPE_15__*) ;
 TYPE_3__* FUNC_19 (TYPE_15__*) ;
 int FUNC_20 () ;
 TYPE_13__* VAR_10 ;
 int FUNC_21 () ;
 unsigned long FUNC_22 (TYPE_3__*) ;
 scalar_t__ FUNC_23 (TYPE_4__*) ;
 int FUNC_24 (int ,char*,char*) ;
 int FUNC_25 (char*) ;
 int FUNC_26 () ;
 int FUNC_27 (char*) ;
 TYPE_10__ VAR_11 ;
 int FUNC_28 (int ,char*) ;
 int FUNC_29 (TYPE_4__*,TYPE_5__*) ;
 TYPE_7__ VAR_12 ;
 int FUNC_30 (char*,char*) ;
 int FUNC_31 (TYPE_4__*,int ) ;

void FUNC_32(client *VAR_13) {
    long long VAR_14 = VAR_11.cluster->size > 3 ? 3 : VAR_11.cluster->size;
    long long VAR_15 = 3600*24;
    long long VAR_16 = -1;
    long long VAR_17 = 0;
    long long VAR_18 = 0;
    mstime_t VAR_19;
    int VAR_20, VAR_21;
    int VAR_22 = 0;
    int VAR_23 = FUNC_16() > 0;
    int VAR_24 = FUNC_21();
    static uint64_t VAR_25 = 0;




    if (VAR_24) VAR_23 = 1;


    for (VAR_20 = 4; VAR_20 < VAR_13->argc; VAR_20++) {
        char *VAR_26 = VAR_13->argv[VAR_20]->ptr;
        int VAR_27 = VAR_20 == VAR_13->argc-1;
        if (!FUNC_30(VAR_26,"replicate") && !VAR_27) {
            VAR_21 = FUNC_15(VAR_13->argv[VAR_20+1],&VAR_14);
            if (VAR_21 != VAR_2 || VAR_14 <= 0 || VAR_14 > 65535) {
                FUNC_2(VAR_13,"REPLICATE must be between 1 and 65535");
                return;
            }
            VAR_20++;
        } else if (!FUNC_30(VAR_26,"ttl") && !VAR_27) {
            VAR_21 = FUNC_15(VAR_13->argv[VAR_20+1],&VAR_15);
            if (VAR_21 != VAR_2 || VAR_15 <= 0) {
                FUNC_2(VAR_13,"TTL must be a number > 0");
                return;
            }
            VAR_20++;
        } else if (!FUNC_30(VAR_26,"retry") && !VAR_27) {
            VAR_21 = FUNC_15(VAR_13->argv[VAR_20+1],&VAR_16);
            if (VAR_21 != VAR_2 || VAR_16 < 0) {
                FUNC_2(VAR_13,"RETRY time must be a non negative number");
                return;
            }
            VAR_20++;
        } else if (!FUNC_30(VAR_26,"delay") && !VAR_27) {
            VAR_21 = FUNC_15(VAR_13->argv[VAR_20+1],&VAR_17);
            if (VAR_21 != VAR_2 || VAR_17 < 0) {
                FUNC_2(VAR_13,"DELAY time must be a non negative number");
                return;
            }
            VAR_20++;
        } else if (!FUNC_30(VAR_26,"maxlen") && !VAR_27) {
            VAR_21 = FUNC_15(VAR_13->argv[VAR_20+1],&VAR_18);
            if (VAR_21 != VAR_2 || VAR_18 <= 0) {
                FUNC_2(VAR_13,"MAXLEN must be a positive number");
                return;
            }
            VAR_20++;
        } else if (!FUNC_30(VAR_26,"async")) {
            VAR_22 = 1;
        } else {
            FUNC_1(VAR_13,VAR_12.syntaxerr);
            return;
        }
    }


    if (FUNC_17(VAR_13,VAR_13->argv[3],&VAR_19,VAR_8)
        != VAR_2) return;




    if (VAR_14 > 1 && VAR_16 == 0) {
        FUNC_2(VAR_13,"With RETRY set to 0 please explicitly set  "
                        "REPLICATE to 1 (at-most-once delivery)");
        return;
    }


    if (VAR_17 >= VAR_15) {
        FUNC_2(VAR_13,"The specified DELAY is greater than TTL. Job refused "
                        "since would never be delivered");
        return;
    }



    if (VAR_16 == -1) {
        VAR_16 = VAR_15/10;
        if (VAR_16 > VAR_3) VAR_16 = VAR_3;
        if (VAR_16 == 0) VAR_16 = 1;
    }


    int VAR_28 = VAR_23 ? VAR_14 : VAR_14-1;

    if (VAR_28 > VAR_11.cluster->reachable_nodes_count) {
        if (VAR_23 &&
            VAR_28-1 == VAR_11.cluster->reachable_nodes_count)
        {
            FUNC_4(VAR_13,
                FUNC_24(FUNC_26(),
                       "-NOREPL Not enough reachable nodes "
                       "for the requested replication level, since I'm unable "
                       "to hold a copy of the message for the following "
                       "reason: %s\r\n",
                       VAR_24 ? "I'm leaving the cluster" :
                                 "I'm out of memory"));
        } else {
            FUNC_4(VAR_13,
                FUNC_27("-NOREPL Not enough reachable nodes "
                       "for the requested replication level\r\n"));
        }
        return;
    }



    queue *VAR_29 = FUNC_19(VAR_13->argv[1]);



    if (VAR_18 && VAR_29 && FUNC_22(VAR_29) >= (unsigned long) VAR_18) {
        FUNC_4(VAR_13,
            FUNC_27("-MAXLEN Queue is already longer than "
                   "the specified MAXLEN count\r\n"));
        return;
    }


    if (VAR_29 && VAR_29->flags & VAR_7) {
        FUNC_4(VAR_13,
            FUNC_27("-PAUSED Queue paused in input, try later\r\n"));
        return;
    }





    int VAR_30 = VAR_22 && VAR_23;


    job *VAR_31 = FUNC_8(((void*)0),VAR_5,VAR_15,VAR_16);
    VAR_31->queue = VAR_13->argv[1];
    FUNC_18(VAR_13->argv[1]);
    VAR_31->repl = VAR_14;



    if (!VAR_23)
        FUNC_9(VAR_31->nodes_delivered,VAR_10->name,VAR_10);






    VAR_31->ctime = FUNC_20()*1000000;
    if (VAR_31->ctime <= VAR_25) VAR_31->ctime = VAR_25+1;
    VAR_25 = VAR_31->ctime;

    VAR_31->etime = VAR_11.unixtime + VAR_15;
    VAR_31->delay = VAR_17;
    VAR_31->retry = VAR_16;
    VAR_31->body = FUNC_25(VAR_13->argv[2]->ptr);




    if (VAR_17) {
        VAR_31->qtime = VAR_11.mstime + VAR_17*1000;
    } else {

        VAR_31->qtime = VAR_11.mstime + VAR_16*1000;
    }


    if (!VAR_30 && FUNC_23(VAR_31) == VAR_1) {


        FUNC_28(VAR_6,"ID already existing in ADDJOB command!");
        FUNC_14(VAR_31);
        FUNC_2(VAR_13,"Internal error creating the job, check server logs");
        return;
    }
    if ((VAR_14 > 1 || VAR_23) && !VAR_22) {
        VAR_13->bpop.timeout = VAR_19;
        VAR_13->bpop.job = VAR_31;
        VAR_13->bpop.added_node_time = FUNC_20();
        FUNC_5(VAR_13,VAR_0);
        FUNC_29(VAR_31,VAR_13);



        VAR_31->nodes_confirmed = FUNC_10(&VAR_9,((void*)0));


        if (!VAR_23) FUNC_9(VAR_31->nodes_confirmed,VAR_10->name,VAR_10);
    } else {
        if (VAR_31->delay == 0) {
            if (!VAR_23) FUNC_13(VAR_31,0);
        } else {



            VAR_31->state = VAR_4;
            if (!VAR_30) FUNC_31(VAR_31,0);
        }
        FUNC_3(VAR_13,VAR_31);
        if (!VAR_23) FUNC_0(VAR_31);
    }



    if (VAR_28 > 0)
        FUNC_6(VAR_31, VAR_28, VAR_22);




    if (VAR_30) {
        dictEntry *VAR_32 = FUNC_11(VAR_31->nodes_delivered);
        if (VAR_32) {
            clusterNode *VAR_33 = FUNC_12(VAR_32);
            FUNC_7(VAR_33,VAR_31,VAR_31->delay);
        }


        FUNC_14(VAR_31);
    }
}
