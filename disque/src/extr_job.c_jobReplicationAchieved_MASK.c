
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ delay; int * nodes_confirmed; int nodes_delivered; int state; int id; } ;
typedef TYPE_1__ job ;
typedef int dictEntry ;
typedef int clusterNode ;
typedef int client ;
struct TYPE_14__ {int name; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*,scalar_t__) ;
 int * FUNC_3 (int ,int ) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int * FUNC_9 (TYPE_1__*) ;
 TYPE_5__* VAR_5 ;
 int FUNC_10 (int ,char*,int ,int ) ;
 int FUNC_11 (TYPE_1__*,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*,int ) ;

int FUNC_15(job *VAR_6) {
    FUNC_10(VAR_4,"Replication ACHIEVED %.*s",VAR_2,VAR_6->id);



    VAR_6->state = VAR_3;


    client *VAR_7 = FUNC_9(VAR_6);
    FUNC_11(VAR_6,((void*)0));
    FUNC_1(VAR_7,VAR_6);
    FUNC_12(VAR_7);



    if (FUNC_3(VAR_6->nodes_delivered,VAR_5->name) == ((void*)0)) {
        dictEntry *VAR_8 = FUNC_4(VAR_6->nodes_confirmed);
        if (VAR_8) {
            clusterNode *VAR_9 = FUNC_5(VAR_8);
            FUNC_2(VAR_9,VAR_6,VAR_6->delay);
        }
        FUNC_13(VAR_6);
        FUNC_8(VAR_6);
        return VAR_0;
    }




    if (VAR_6->nodes_confirmed) {
        FUNC_6(VAR_6->nodes_confirmed);
        VAR_6->nodes_confirmed = ((void*)0);
    }


    if (VAR_6->delay == 0)
        FUNC_7(VAR_6,0);
    else
        FUNC_14(VAR_6,0);

    FUNC_0(VAR_6);
    return VAR_1;
}
