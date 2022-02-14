
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int dictIterator ;
typedef int dictEntry ;
struct TYPE_6__ {int flags; } ;
typedef TYPE_2__ clusterNode ;
struct TYPE_7__ {TYPE_1__* cluster; } ;
struct TYPE_5__ {scalar_t__ size; int nodes; int todo_before_sleep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_3__ VAR_2 ;

void FUNC_4(void) {
    VAR_2.cluster->todo_before_sleep &= ~VAR_1;
    {
        dictIterator *VAR_3;
        dictEntry *VAR_4;

        VAR_2.cluster->size = 0;
        VAR_3 = FUNC_0(VAR_2.cluster->nodes);
        while((VAR_4 = FUNC_2(VAR_3)) != ((void*)0)) {
            clusterNode *VAR_5 = FUNC_1(VAR_4);

            if (!(VAR_5->flags & VAR_0))
                VAR_2.cluster->size++;
        }
        FUNC_3(VAR_3);
    }
}
