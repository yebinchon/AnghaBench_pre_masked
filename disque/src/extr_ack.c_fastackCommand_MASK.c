
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int job ;
struct TYPE_9__ {int argc; TYPE_4__** argv; } ;
typedef TYPE_2__ client ;
struct TYPE_11__ {TYPE_1__* cluster; } ;
struct TYPE_10__ {int ptr; } ;
struct TYPE_8__ {int nodes; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;
 TYPE_5__ VAR_3 ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (TYPE_2__*,TYPE_4__**,int) ;

void FUNC_7(client *VAR_4) {
    int VAR_5, VAR_6 = 0;

    if (FUNC_6(VAR_4,VAR_4->argv+1,VAR_4->argc-1) == VAR_2) return;


    for (VAR_5 = 1; VAR_5 < VAR_4->argc; VAR_5++) {
        job *VAR_7 = FUNC_4(VAR_4->argv[VAR_5]->ptr);
        if (VAR_7 == ((void*)0)) {

            FUNC_2(VAR_3.cluster->nodes,VAR_4->argv[VAR_5]->ptr,
                                         VAR_1,0,
                                         VAR_0);
        } else {
            FUNC_1(VAR_7);
            FUNC_5(VAR_7);
            FUNC_3(VAR_7);
            VAR_6++;
        }
    }
    FUNC_0(VAR_4,VAR_6);
}
