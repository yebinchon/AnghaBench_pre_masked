
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int dictIterator ;
typedef int dictEntry ;
typedef int dict ;
struct TYPE_3__ {int flags; int link; } ;
typedef TYPE_1__ clusterNode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,void*,size_t) ;
 TYPE_1__* FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(dict *VAR_2, void *VAR_3, size_t VAR_4) {
    dictIterator *VAR_5;
    dictEntry *VAR_6;

    VAR_5 = FUNC_2(VAR_2);
    while((VAR_6 = FUNC_3(VAR_5)) != ((void*)0)) {
        clusterNode *VAR_7 = FUNC_1(VAR_6);

        if (!VAR_7->link) continue;
        if (VAR_7->flags & (VAR_1|VAR_0))
            continue;
        FUNC_0(VAR_7->link,VAR_3,VAR_4);
    }
    FUNC_4(VAR_5);
}
