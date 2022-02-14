
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ state; } ;
typedef TYPE_1__ job ;
struct TYPE_10__ {int argc; TYPE_4__** argv; } ;
typedef TYPE_2__ client ;
struct TYPE_11__ {int ptr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,TYPE_4__**,int) ;

void FUNC_4(client *VAR_3) {
    int VAR_4, VAR_5 = 0;

    if (FUNC_3(VAR_3,VAR_3->argv+1,VAR_3->argc-1) == VAR_0) return;


    for (VAR_4 = 1; VAR_4 < VAR_3->argc; VAR_4++) {
        job *VAR_6 = FUNC_2(VAR_3->argv[VAR_4]->ptr);
        if (VAR_6 == ((void*)0)) continue;

        if (VAR_6->state == VAR_2 && FUNC_1(VAR_6) == VAR_1)
            VAR_5++;
    }
    FUNC_0(VAR_3,VAR_5);
}
