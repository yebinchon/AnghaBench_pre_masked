
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int job ;
struct TYPE_6__ {int argc; TYPE_3__** argv; } ;
typedef TYPE_1__ client ;
struct TYPE_7__ {int ptr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*,TYPE_3__**,int) ;

void FUNC_5(client *VAR_1) {
    int VAR_2, VAR_3 = 0;

    if (FUNC_4(VAR_1,VAR_1->argv+1,VAR_1->argc-1) == VAR_0) return;


    for (VAR_2 = 1; VAR_2 < VAR_1->argc; VAR_2++) {
        job *VAR_4 = FUNC_2(VAR_1->argv[VAR_2]->ptr);
        if (VAR_4 == ((void*)0)) continue;
        FUNC_3(VAR_4);
        FUNC_1(VAR_4);
        VAR_3++;
    }
    FUNC_0(VAR_1,VAR_3);
}
