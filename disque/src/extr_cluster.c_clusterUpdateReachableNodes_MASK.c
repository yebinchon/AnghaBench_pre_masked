
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int dictIterator ;
typedef int dictEntry ;
struct TYPE_8__ {int flags; } ;
typedef TYPE_2__ clusterNode ;
struct TYPE_9__ {TYPE_1__* cluster; } ;
struct TYPE_7__ {scalar_t__ reachable_nodes_count; TYPE_2__** reachable_nodes; int nodes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 TYPE_5__ VAR_5 ;
 TYPE_2__** FUNC_5 (TYPE_2__**,int) ;

void FUNC_6(void) {
    dictIterator *VAR_6;
    dictEntry *VAR_7;
    int VAR_8 = FUNC_4(VAR_5.cluster->nodes) * sizeof(clusterNode*);

    VAR_5.cluster->reachable_nodes =
        FUNC_5(VAR_5.cluster->reachable_nodes,VAR_8);
    VAR_5.cluster->reachable_nodes_count = 0;

    VAR_6 = FUNC_0(VAR_5.cluster->nodes);
    while((VAR_7 = FUNC_2(VAR_6)) != ((void*)0)) {
        clusterNode *VAR_9 = FUNC_1(VAR_7);

        if (VAR_9->flags & (VAR_3|
                           VAR_1|
                           VAR_2|
                           VAR_4|
                           VAR_0)) continue;
        VAR_5.cluster->reachable_nodes[VAR_5.cluster->reachable_nodes_count++]
            = VAR_9;
    }
    FUNC_3(VAR_6);
}
