
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int nodes_delivered; int id; } ;
typedef TYPE_1__ job ;
typedef int dictIterator ;
typedef int dictEntry ;
struct TYPE_8__ {int name; } ;
typedef TYPE_2__ clusterNode ;


 int FUNC_0 (int ,int ,TYPE_2__*) ;
 int * FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int ) ;

void FUNC_6(job *VAR_0) {
    job *VAR_1 = FUNC_5(VAR_0->id);
    if (!VAR_1) return;

    dictIterator *VAR_2 = FUNC_1(VAR_0->nodes_delivered);
    dictEntry *VAR_3;

    while((VAR_3 = FUNC_3(VAR_2)) != ((void*)0)) {
        clusterNode *VAR_4 = FUNC_2(VAR_3);
        FUNC_0(VAR_1->nodes_delivered,VAR_4->name,VAR_4);
    }
    FUNC_4(VAR_2);
}
