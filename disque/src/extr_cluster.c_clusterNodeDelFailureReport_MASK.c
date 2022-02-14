
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* value; } ;
typedef TYPE_1__ listNode ;
typedef int listIter ;
typedef int list ;
struct TYPE_10__ {TYPE_3__* node; } ;
typedef TYPE_2__ clusterNodeFailReport ;
struct TYPE_11__ {int * fail_reports; } ;
typedef TYPE_3__ clusterNode ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;

int FUNC_4(clusterNode *VAR_0, clusterNode *VAR_1) {
    list *VAR_2 = VAR_0->fail_reports;
    listNode *VAR_3;
    listIter VAR_4;
    clusterNodeFailReport *VAR_5;


    FUNC_3(VAR_2,&VAR_4);
    while ((VAR_3 = FUNC_2(&VAR_4)) != ((void*)0)) {
        VAR_5 = VAR_3->value;
        if (VAR_5->node == VAR_1) break;
    }
    if (!VAR_3) return 0;


    FUNC_1(VAR_2,VAR_3);
    FUNC_0(VAR_0);
    return 1;
}
