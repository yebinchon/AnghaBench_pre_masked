
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int mstime_t ;
typedef int dictIterator ;
typedef int dictEntry ;
struct TYPE_14__ {int flags; int ctime; scalar_t__ ping_sent; int pong_received; int name; TYPE_3__* link; scalar_t__ port; int ip; } ;
typedef TYPE_2__ clusterNode ;
struct TYPE_15__ {int fd; int ctime; } ;
typedef TYPE_3__ clusterLink ;
struct TYPE_16__ {int cluster_node_timeout; TYPE_1__* cluster; int el; int neterr; } ;
struct TYPE_13__ {scalar_t__ state; int nodes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int,int ,int ,TYPE_3__*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int ,scalar_t__,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_13 ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 TYPE_3__* FUNC_7 (TYPE_2__*) ;
 int * FUNC_8 (int ) ;
 int * FUNC_9 (int ) ;
 TYPE_2__* FUNC_10 (int *) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_3__*) ;
 void* FUNC_14 () ;
 scalar_t__ FUNC_15 (TYPE_2__*) ;
 TYPE_4__ VAR_14 ;
 int FUNC_16 (int ,char*,int ,...) ;

void FUNC_17(void) {
    dictIterator *VAR_15;
    dictEntry *VAR_16;
    int VAR_17 = 0;
    mstime_t VAR_18 = 0, VAR_19 = FUNC_14();
    clusterNode *VAR_20 = ((void*)0);
    static unsigned long long VAR_21 = 0;
    mstime_t VAR_22;

    VAR_21++;





    VAR_22 = VAR_14.cluster_node_timeout;
    if (VAR_22 < 1000) VAR_22 = 1000;


    VAR_15 = FUNC_9(VAR_14.cluster->nodes);
    while((VAR_16 = FUNC_11(VAR_15)) != ((void*)0)) {
        clusterNode *VAR_23 = FUNC_10(VAR_16);

        if (VAR_23->flags & (VAR_7|VAR_8)) continue;



        if (FUNC_15(VAR_23) && VAR_19 - VAR_23->ctime > VAR_22) {
            FUNC_3(VAR_23);
            continue;
        }

        if (VAR_23->link == ((void*)0)) {
            int VAR_24;
            mstime_t VAR_25;
            clusterLink *VAR_26;

            VAR_24 = FUNC_2(VAR_14.neterr, VAR_23->ip,
                VAR_23->port+VAR_10, VAR_12);
            if (VAR_24 == -1) {





                if (VAR_23->ping_sent == 0) VAR_23->ping_sent = FUNC_14();
                FUNC_16(VAR_11, "Unable to connect to "
                    "Cluster Node [%s]:%d -> %s", VAR_23->ip,
                    VAR_23->port+VAR_10,
                    VAR_14.neterr);
                continue;
            }
            FUNC_1(((void*)0),VAR_24);
            VAR_26 = FUNC_7(VAR_23);
            VAR_26->fd = VAR_24;
            VAR_23->link = VAR_26;
            FUNC_0(VAR_14.el,VAR_26->fd,VAR_0,
                    VAR_13,VAR_26);






            VAR_25 = VAR_23->ping_sent;
            FUNC_4(VAR_26, VAR_23->flags & VAR_6 ?
                    VAR_1 : VAR_2);
            if (VAR_25) {



                VAR_23->ping_sent = VAR_25;
            }





            VAR_23->flags &= ~VAR_6;

            FUNC_16(VAR_11,"Connecting with Node %.40s at %s:%d",
                    VAR_23->name, VAR_23->ip, VAR_23->port+VAR_10);
        }
    }
    FUNC_12(VAR_15);



    if (!(VAR_21 % 10)) {
        int VAR_27;



        for (VAR_27 = 0; VAR_27 < 5; VAR_27++) {
            VAR_16 = FUNC_8(VAR_14.cluster->nodes);
            clusterNode *VAR_28 = FUNC_10(VAR_16);


            if (VAR_28->link == ((void*)0) || VAR_28->ping_sent != 0) continue;
            if (VAR_28->flags & (VAR_7|VAR_5))
                continue;
            if (VAR_20 == ((void*)0) || VAR_18 > VAR_28->pong_received) {
                VAR_20 = VAR_28;
                VAR_18 = VAR_28->pong_received;
            }
        }
        if (VAR_20) {
            FUNC_16(VAR_11,"Pinging node %.40s", VAR_20->name);
            FUNC_4(VAR_20->link, VAR_2);
        }
    }







    VAR_15 = FUNC_9(VAR_14.cluster->nodes);
    while((VAR_16 = FUNC_11(VAR_15)) != ((void*)0)) {
        clusterNode *VAR_29 = FUNC_10(VAR_16);
        VAR_19 = FUNC_14();
        mstime_t VAR_30;

        if (VAR_29->flags &
            (VAR_7|VAR_8|VAR_5))
                continue;




        if (VAR_29->link &&
            VAR_19 - VAR_29->link->ctime >
            VAR_14.cluster_node_timeout &&
            VAR_29->ping_sent &&
            VAR_29->pong_received < VAR_29->ping_sent &&

            VAR_19 - VAR_29->ping_sent > VAR_14.cluster_node_timeout/2)
        {

            FUNC_13(VAR_29->link);
        }





        if (VAR_29->link &&
            VAR_29->ping_sent == 0 &&
            (VAR_19 - VAR_29->pong_received) > VAR_14.cluster_node_timeout/2)
        {
            FUNC_4(VAR_29->link, VAR_2);
            continue;
        }


        if (VAR_29->ping_sent == 0) continue;




        VAR_30 = VAR_19 - VAR_29->ping_sent;

        if (VAR_30 > VAR_14.cluster_node_timeout) {


            if (!(VAR_29->flags & (VAR_9|VAR_4))) {
                FUNC_16(VAR_11,"*** NODE %.40s possibly failing",
                    VAR_29->name);
                VAR_29->flags |= VAR_9;
                VAR_17 = 1;
            }
        }
    }
    FUNC_12(VAR_15);

    if (VAR_17 || VAR_14.cluster->state == VAR_3)
        FUNC_6();

    FUNC_5();
}
