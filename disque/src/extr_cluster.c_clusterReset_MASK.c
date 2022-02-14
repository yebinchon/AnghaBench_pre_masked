
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int sds ;
typedef int dictIterator ;
typedef int dictEntry ;
struct TYPE_9__ {int name; } ;
typedef TYPE_2__ clusterNode ;
struct TYPE_10__ {TYPE_1__* cluster; } ;
struct TYPE_8__ {int nodes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int * FUNC_5 (int ) ;
 TYPE_2__* FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int ) ;
 TYPE_2__* VAR_4 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 TYPE_3__ VAR_5 ;

void FUNC_13(int VAR_6) {
    dictIterator *VAR_7;
    dictEntry *VAR_8;


    VAR_7 = FUNC_5(VAR_5.cluster->nodes);
    while((VAR_8 = FUNC_7(VAR_7)) != ((void*)0)) {
        clusterNode *VAR_9 = FUNC_6(VAR_8);

        if (VAR_9 == VAR_4) continue;
        FUNC_1(VAR_9);
    }
    FUNC_8(VAR_7);


    FUNC_3();


    if (VAR_6) {
        sds VAR_10;



        VAR_10 = FUNC_12(VAR_4->name, VAR_0);
        FUNC_4(VAR_5.cluster->nodes,VAR_10);
        FUNC_11(VAR_10);
        FUNC_10(VAR_4->name, VAR_0);
        FUNC_0(VAR_4);
    }

    FUNC_9();






    FUNC_2(VAR_2|
                         VAR_3|
                         VAR_1);
}
