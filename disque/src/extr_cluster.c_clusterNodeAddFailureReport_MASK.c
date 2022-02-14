
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
struct TYPE_10__ {void* time; TYPE_3__* node; } ;
typedef TYPE_2__ clusterNodeFailReport ;
struct TYPE_11__ {int * fail_reports; } ;
typedef TYPE_3__ clusterNode ;


 int FUNC_0 (int *,TYPE_2__*) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 void* FUNC_3 () ;
 TYPE_2__* FUNC_4 (int) ;

int FUNC_5(clusterNode *VAR_0, clusterNode *VAR_1) {
    list *VAR_2 = VAR_0->fail_reports;
    listNode *VAR_3;
    listIter VAR_4;
    clusterNodeFailReport *VAR_5;



    FUNC_2(VAR_2,&VAR_4);
    while ((VAR_3 = FUNC_1(&VAR_4)) != ((void*)0)) {
        VAR_5 = VAR_3->value;
        if (VAR_5->node == VAR_1) {
            VAR_5->time = FUNC_3();
            return 0;
        }
    }


    VAR_5 = FUNC_4(sizeof(*VAR_5));
    VAR_5->node = VAR_1;
    VAR_5->time = FUNC_3();
    FUNC_0(VAR_2,VAR_5);
    return 1;
}
