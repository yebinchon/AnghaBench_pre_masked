
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef union clusterMsgData {int dummy; } clusterMsgData ;
typedef int dictEntry ;
struct TYPE_19__ {int flags; int ping_sent; int pong_received; int port; int ip; int name; int * link; } ;
typedef TYPE_5__ clusterNode ;
struct TYPE_20__ {scalar_t__ notused2; scalar_t__ notused1; void* flags; void* port; int ip; void* pong_received; void* ping_sent; int nodename; } ;
typedef TYPE_6__ clusterMsgDataGossip ;
struct TYPE_17__ {TYPE_6__* gossip; } ;
struct TYPE_18__ {TYPE_3__ ping; } ;
struct TYPE_21__ {void* totlen; void* count; TYPE_4__ data; } ;
typedef TYPE_7__ clusterMsg ;
struct TYPE_22__ {TYPE_1__* node; } ;
typedef TYPE_8__ clusterLink ;
struct TYPE_23__ {TYPE_2__* cluster; } ;
struct TYPE_16__ {int nodes; } ;
struct TYPE_15__ {int ping_sent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_7__*,int) ;
 int FUNC_1 (TYPE_8__*,unsigned char*,int) ;
 int * FUNC_2 (int ) ;
 TYPE_5__* FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 void* FUNC_6 (int) ;
 void* FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 () ;
 TYPE_5__* VAR_6 ;
 TYPE_9__ VAR_7 ;
 unsigned char* FUNC_11 (int) ;
 int FUNC_12 (unsigned char*) ;

void FUNC_13(clusterLink *VAR_8, int VAR_9) {
    unsigned char *VAR_10;
    clusterMsg *VAR_11;
    int VAR_12 = 0;
    int VAR_13;
    int VAR_14;




    int VAR_15 = FUNC_4(VAR_7.cluster->nodes)-2;
    VAR_13 = FUNC_5(FUNC_4(VAR_7.cluster->nodes)/10);
    if (VAR_13 < 3) VAR_13 = 3;
    if (VAR_13 > VAR_15) VAR_13 = VAR_15;




    VAR_14 = sizeof(clusterMsg)-sizeof(union clusterMsgData);
    VAR_14 += (sizeof(clusterMsgDataGossip)*VAR_13);


    if (VAR_14 < (int)sizeof(clusterMsg)) VAR_14 = sizeof(clusterMsg);
    VAR_10 = FUNC_11(VAR_14);
    VAR_11 = (clusterMsg*) VAR_10;


    if (VAR_8->node && VAR_9 == VAR_0)
        VAR_8->node->ping_sent = FUNC_10();
    FUNC_0(VAR_11,VAR_9);


    int VAR_16 = VAR_13*3;
    while(VAR_15 > 0 && VAR_12 < VAR_13 && VAR_16--) {
        dictEntry *VAR_17 = FUNC_2(VAR_7.cluster->nodes);
        clusterNode *VAR_18 = FUNC_3(VAR_17);
        clusterMsgDataGossip *VAR_19;
        int VAR_20;



        if (VAR_18 == VAR_6) continue;


        if (VAR_16 > VAR_13*2 &&
            !(VAR_18->flags & (VAR_5|VAR_2)))
            continue;






        if (VAR_18->flags & (VAR_3|VAR_4) ||
            VAR_18->link == ((void*)0))
        {
            VAR_15--;
            continue;
        }


        for (VAR_20 = 0; VAR_20 < VAR_12; VAR_20++) {
            if (FUNC_8(VAR_11->data.ping.gossip[VAR_20].nodename,VAR_18->name,
                    VAR_1) == 0) break;
        }
        if (VAR_20 != VAR_12) continue;


        VAR_15--;
        VAR_19 = &(VAR_11->data.ping.gossip[VAR_12]);
        FUNC_9(VAR_19->nodename,VAR_18->name,VAR_1);
        VAR_19->ping_sent = FUNC_6(VAR_18->ping_sent);
        VAR_19->pong_received = FUNC_6(VAR_18->pong_received);
        FUNC_9(VAR_19->ip,VAR_18->ip,sizeof(VAR_18->ip));
        VAR_19->port = FUNC_7(VAR_18->port);
        VAR_19->flags = FUNC_7(VAR_18->flags);
        VAR_19->notused1 = 0;
        VAR_19->notused2 = 0;
        VAR_12++;
    }



    VAR_14 = sizeof(clusterMsg)-sizeof(union clusterMsgData);
    VAR_14 += (sizeof(clusterMsgDataGossip)*VAR_12);
    VAR_11->count = FUNC_7(VAR_12);
    VAR_11->totlen = FUNC_6(VAR_14);
    FUNC_1(VAR_8,VAR_10,VAR_14);
    FUNC_12(VAR_10);
}
