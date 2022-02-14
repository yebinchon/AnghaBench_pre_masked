
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint16_t ;
typedef int sds ;
struct TYPE_18__ {int flags; scalar_t__ port; int ip; int name; } ;
typedef TYPE_3__ clusterNode ;
struct TYPE_19__ {int port; int ip; int nodename; int flags; } ;
typedef TYPE_4__ clusterMsgDataGossip ;
struct TYPE_16__ {scalar_t__ gossip; } ;
struct TYPE_17__ {TYPE_1__ ping; } ;
struct TYPE_20__ {int sender; TYPE_2__ data; int count; } ;
typedef TYPE_5__ clusterMsg ;
struct TYPE_21__ {TYPE_3__* node; } ;
typedef TYPE_6__ clusterLink ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*,TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (TYPE_3__*) ;
 TYPE_3__* VAR_5 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,int ,int ,...) ;
 scalar_t__ FUNC_11 (int ,int ) ;

void FUNC_12(clusterMsg *VAR_6, clusterLink *VAR_7) {
    uint16_t VAR_8 = FUNC_6(VAR_6->count);
    clusterMsgDataGossip *VAR_9 = (clusterMsgDataGossip*) VAR_6->data.ping.gossip;
    clusterNode *VAR_10 = VAR_7->node ? VAR_7->node : FUNC_1(VAR_6->sender);

    while(VAR_8--) {
        uint16_t VAR_11 = FUNC_6(VAR_9->flags);
        clusterNode *VAR_12;
        sds VAR_13;

        VAR_13 = FUNC_7(FUNC_8(), VAR_11);
        FUNC_10(VAR_3,"GOSSIP %.40s %s:%d %s",
            VAR_9->nodename,
            VAR_9->ip,
            FUNC_6(VAR_9->port),
            VAR_13);
        FUNC_9(VAR_13);


        VAR_12 = FUNC_1(VAR_9->nodename);
        if (VAR_12) {

            if (VAR_10 && VAR_12 != VAR_5) {
                if (VAR_11 & (VAR_0|VAR_2)) {
                    if (FUNC_2(VAR_12,VAR_10)) {
                        FUNC_10(VAR_4,
                            "Node %.40s reported node %.40s as not reachable.",
                            VAR_10->name, VAR_12->name);
                    }
                    FUNC_5(VAR_12);
                } else {
                    if (FUNC_3(VAR_12,VAR_10)) {
                        FUNC_10(VAR_4,
                            "Node %.40s reported node %.40s is back online.",
                            VAR_10->name, VAR_12->name);
                    }
                }
            }






            if (VAR_12->flags & (VAR_0|VAR_2) &&
                (FUNC_11(VAR_12->ip,VAR_9->ip) || VAR_12->port != FUNC_6(VAR_9->port)))
            {
                FUNC_4(VAR_9->ip,FUNC_6(VAR_9->port));
            }
        } else {






            if (VAR_10 &&
                !(VAR_11 & VAR_1) &&
                !FUNC_0(VAR_9->nodename))
            {
                FUNC_4(VAR_9->ip,FUNC_6(VAR_9->port));
            }
        }


        VAR_9++;
    }
}
