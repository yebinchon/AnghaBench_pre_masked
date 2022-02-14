
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef union clusterMsgData {int dummy; } clusterMsgData ;
typedef int uint32_t ;
typedef unsigned char* sds ;
struct TYPE_20__ {scalar_t__ nodes_confirmed; int nodes_delivered; } ;
typedef TYPE_5__ job ;
typedef int dictIterator ;
typedef int dictEntry ;
struct TYPE_21__ {int * link; int name; } ;
typedef TYPE_6__ clusterNode ;
typedef int clusterMsgDataJob ;
struct TYPE_17__ {unsigned char* jobs_data; void* datasize; void* numjobs; } ;
struct TYPE_18__ {TYPE_2__ serialized; } ;
struct TYPE_19__ {TYPE_3__ jobs; } ;
struct TYPE_22__ {int * mflags; TYPE_4__ data; void* totlen; } ;
typedef TYPE_7__ clusterMsg ;
typedef int buf ;
struct TYPE_23__ {TYPE_1__* cluster; } ;
struct TYPE_16__ {int reachable_nodes_count; TYPE_6__** reachable_nodes; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_7__*,int ) ;
 int FUNC_1 (int *,unsigned char*,int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int ,TYPE_6__*) ;
 scalar_t__ FUNC_4 (scalar_t__,TYPE_6__*) ;
 int * FUNC_5 (int ) ;
 TYPE_6__* FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 void* FUNC_9 (int) ;
 int FUNC_10 (unsigned char*,unsigned char*,int) ;
 TYPE_6__* VAR_4 ;
 int FUNC_11 () ;
 int FUNC_12 (unsigned char*) ;
 int FUNC_13 (unsigned char*) ;
 unsigned char* FUNC_14 (int ,TYPE_5__*,int ) ;
 TYPE_8__ VAR_5 ;
 int FUNC_15 (unsigned char*) ;
 unsigned char* FUNC_16 (int) ;

int FUNC_17(job *VAR_6, int VAR_7, int VAR_8) {
    int VAR_9, VAR_10 = 0;

    if (VAR_7 <= 0) return 0;


    FUNC_2();
    for (VAR_9 = 0; VAR_9 < VAR_5.cluster->reachable_nodes_count; VAR_9++) {
        clusterNode *VAR_11 = VAR_5.cluster->reachable_nodes[VAR_9];

        if (VAR_11->link == ((void*)0)) continue;
        if (FUNC_3(VAR_6->nodes_delivered,VAR_11->name,VAR_11) == VAR_2) {

            VAR_10++;
            if (--VAR_7 == 0) break;
        }
    }


    unsigned char VAR_12[sizeof(clusterMsg)], *VAR_13;
    clusterMsg *VAR_14 = (clusterMsg*) VAR_12;
    uint32_t VAR_15;

    sds VAR_16 = FUNC_14(FUNC_11(),VAR_6,VAR_3);

    VAR_15 = sizeof(clusterMsg)-sizeof(union clusterMsgData);
    VAR_15 += sizeof(clusterMsgDataJob) -
              sizeof(VAR_14->data.jobs.serialized.jobs_data) +
              FUNC_13(VAR_16);

    FUNC_0(VAR_14,VAR_1);
    VAR_14->data.jobs.serialized.numjobs = FUNC_9(1);
    VAR_14->data.jobs.serialized.datasize = FUNC_9(FUNC_13(VAR_16));
    VAR_14->totlen = FUNC_9(VAR_15);

    if (VAR_15 < sizeof(VAR_12)) {
        VAR_13 = VAR_12;
    } else {
        VAR_13 = FUNC_16(VAR_15);
        FUNC_10(VAR_13,VAR_12,sizeof(clusterMsg));
        VAR_14 = (clusterMsg*) VAR_13;
    }
    FUNC_10(VAR_14->data.jobs.serialized.jobs_data,VAR_16,FUNC_13(VAR_16));
    FUNC_12(VAR_16);


    dictIterator *VAR_17 = FUNC_5(VAR_6->nodes_delivered);
    dictEntry *VAR_18;

    while((VAR_18 = FUNC_7(VAR_17)) != ((void*)0)) {
        clusterNode *VAR_19 = FUNC_6(VAR_18);
        if (VAR_19 == VAR_4) continue;



        int VAR_20 = VAR_6->nodes_confirmed && FUNC_4(VAR_6->nodes_confirmed,VAR_19);
        if (VAR_8 || VAR_20) {
            VAR_14->mflags[0] |= VAR_0;
        } else {
            VAR_14->mflags[0] &= ~VAR_0;
        }




        if (VAR_19->link && !(VAR_20 && VAR_10 == 0))
            FUNC_1(VAR_19->link,VAR_13,VAR_15);
    }
    FUNC_8(VAR_17);

    if (VAR_13 != VAR_12) FUNC_15(VAR_13);
    return VAR_10;
}
