
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int dictIterator ;
typedef int dictEntry ;
typedef int clusterNode ;
struct TYPE_4__ {TYPE_1__* cluster; } ;
struct TYPE_3__ {int nodes; } ;


 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_2__ VAR_0 ;

void FUNC_6(clusterNode *VAR_1) {
    dictIterator *VAR_2;
    dictEntry *VAR_3;


    VAR_2 = FUNC_1(VAR_0.cluster->nodes);
    while((VAR_3 = FUNC_3(VAR_2)) != ((void*)0)) {
        clusterNode *VAR_4 = FUNC_2(VAR_3);

        if (VAR_4 == VAR_1) continue;
        FUNC_0(VAR_4,VAR_1);
    }
    FUNC_4(VAR_2);


    FUNC_5(VAR_1);
}
