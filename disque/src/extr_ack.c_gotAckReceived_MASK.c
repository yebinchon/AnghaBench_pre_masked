
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ state; int id; scalar_t__ nodes_delivered; scalar_t__ nodes_confirmed; } ;
typedef TYPE_2__ job ;
struct TYPE_13__ {int name; } ;
typedef TYPE_3__ clusterNode ;
struct TYPE_14__ {TYPE_1__* cluster; } ;
struct TYPE_11__ {scalar_t__ nodes; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (scalar_t__,int ,TYPE_3__*) ;
 int * FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_5__ VAR_2 ;
 int FUNC_5 (int ,char*,int ,...) ;
 int FUNC_6 (TYPE_2__*) ;

void FUNC_7(clusterNode *VAR_3, job *VAR_4, int VAR_5) {


    int VAR_6 = FUNC_3(VAR_4->nodes_delivered) == 0;

    FUNC_5(VAR_1,"RECEIVED GOTACK FROM %.40s FOR JOB %.48s",
        VAR_3->name, VAR_4->id);



    if (VAR_4->state != VAR_0) return;




    if (VAR_6 && VAR_5) {
        FUNC_5(VAR_1,"Deleting %.48s: authoritative node reached",
            VAR_4->id);
        FUNC_6(VAR_4);
        FUNC_4(VAR_4);
        return;
    }
    if (VAR_5 || FUNC_2(VAR_4->nodes_delivered,VAR_3->name) != ((void*)0)) {
        FUNC_1(VAR_4->nodes_delivered,VAR_3->name,VAR_3);





        if (VAR_4->nodes_confirmed)
            FUNC_1(VAR_4->nodes_confirmed,VAR_3->name,VAR_3);
    }





    if (!VAR_5 && VAR_6) {
        FUNC_1(VAR_4->nodes_confirmed,VAR_3->name,VAR_3);
        if (FUNC_3(VAR_4->nodes_confirmed) >= FUNC_3(VAR_2.cluster->nodes))
        {
            FUNC_5(VAR_1,
                "Deleting %.48s: dummy ACK not known cluster-wide",
                VAR_4->id);
            FUNC_6(VAR_4);
            FUNC_4(VAR_4);
            return;
        }
    }



    if (!VAR_6 && VAR_4->nodes_confirmed &&
         FUNC_3(VAR_4->nodes_confirmed) >= FUNC_3(VAR_4->nodes_delivered))
    {
        FUNC_5(VAR_1,
            "Deleting %.48s: All nodes involved acknowledged the job",
            VAR_4->id);
        FUNC_0(VAR_4);
        FUNC_6(VAR_4);
        FUNC_4(VAR_4);
        return;
    }
}
