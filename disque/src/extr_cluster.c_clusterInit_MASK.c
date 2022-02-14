
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int clusterState ;
struct TYPE_8__ {int port; int name; } ;
struct TYPE_7__ {int cfd_count; int port; int * cfd; int el; TYPE_1__* cluster; int cluster_configfile; } ;
struct TYPE_6__ {int size; TYPE_3__* myself; scalar_t__ reachable_nodes_count; int * reachable_nodes; scalar_t__ stats_bus_messages_received; scalar_t__ stats_bus_messages_sent; void* nodes_black_list; void* deleted_nodes; void* nodes; scalar_t__ todo_before_sleep; int state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int *) ;
 int VAR_8 ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 TYPE_3__* FUNC_7 (int *,int ) ;
 void* FUNC_8 (int *,int *) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int,int *,int*) ;
 TYPE_3__* VAR_11 ;
 TYPE_2__ VAR_12 ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 (char*) ;
 TYPE_1__* FUNC_13 (int) ;

void FUNC_14(void) {
    int VAR_13 = 0;

    VAR_12.cluster = FUNC_13(sizeof(clusterState));
    VAR_12.cluster->myself = ((void*)0);
    VAR_12.cluster->state = VAR_3;
    VAR_12.cluster->size = 1;
    VAR_12.cluster->todo_before_sleep = 0;
    VAR_12.cluster->nodes = FUNC_8(&VAR_10,((void*)0));
    VAR_12.cluster->deleted_nodes = FUNC_8(&VAR_10,((void*)0));
    VAR_12.cluster->nodes_black_list =
        FUNC_8(&VAR_9,((void*)0));
    VAR_12.cluster->stats_bus_messages_sent = 0;
    VAR_12.cluster->stats_bus_messages_received = 0;
    VAR_12.cluster->reachable_nodes = ((void*)0);
    VAR_12.cluster->reachable_nodes_count = 0;



    if (FUNC_3(VAR_12.cluster_configfile) == VAR_5)
        FUNC_9(1);


    if (FUNC_2(VAR_12.cluster_configfile) == VAR_5) {


        VAR_11 = VAR_12.cluster->myself =
            FUNC_7(((void*)0),VAR_2);
        FUNC_11(VAR_6,"No cluster configuration found, I'm %.40s",
            VAR_11->name);
        FUNC_1(VAR_11);
        VAR_13 = 1;
    }
    if (VAR_13) FUNC_4(1);


    VAR_12.cfd_count = 0;




    if (VAR_12.port > (65535-VAR_4)) {
        FUNC_11(VAR_7, "Disque port number too high. "
                   "Cluster communication port is 10,000 port "
                   "numbers higher than your Disque node port. "
                   "Your Disque node port number must be "
                   "lower than 55535.");
        FUNC_9(1);
    }

    if (FUNC_10(VAR_12.port+VAR_4,
        VAR_12.cfd,&VAR_12.cfd_count) == VAR_5)
    {
        FUNC_9(1);
    } else {
        int VAR_14;

        for (VAR_14 = 0; VAR_14 < VAR_12.cfd_count; VAR_14++) {
            if (FUNC_0(VAR_12.el, VAR_12.cfd[VAR_14], VAR_1,
                VAR_8, ((void*)0)) == VAR_0)
                    FUNC_12("Unrecoverable error creating Disque Cluster "
                                "Bus file event.");
        }
    }



    VAR_11->port = VAR_12.port;


    FUNC_6();
    FUNC_5();
}
