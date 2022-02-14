
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ state; } ;
typedef TYPE_2__ job ;
struct TYPE_18__ {int argc; TYPE_5__** argv; } ;
typedef TYPE_3__ client ;
struct TYPE_20__ {TYPE_1__* cluster; } ;
struct TYPE_19__ {char* ptr; } ;
struct TYPE_16__ {int size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*,int) ;
 TYPE_2__* FUNC_2 (char*,scalar_t__,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (char*) ;
 TYPE_2__* FUNC_5 (char*) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 TYPE_8__ VAR_3 ;
 int FUNC_8 (int) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 scalar_t__ FUNC_11 (TYPE_3__*,TYPE_5__**,int) ;

void FUNC_12(client *VAR_4) {
    int VAR_5, VAR_6 = 0;

    if (FUNC_11(VAR_4,VAR_4->argv+1,VAR_4->argc-1) == VAR_0) return;


    for (VAR_5 = 1; VAR_5 < VAR_4->argc; VAR_5++) {
        job *VAR_7 = FUNC_5(VAR_4->argv[VAR_5]->ptr);




        if (VAR_7 == ((void*)0) && VAR_3.cluster->size > 1 && !FUNC_6()) {
            char *VAR_8 = VAR_4->argv[VAR_5]->ptr;
            int VAR_9 = FUNC_4(VAR_8);



            if (VAR_9 & 1) {
                VAR_7 = FUNC_2(VAR_8,VAR_2,0,0);
                FUNC_9(VAR_7);
                FUNC_8(FUNC_7(VAR_7) == VAR_1);
            }
        }

        else if (VAR_7 && VAR_7->state != VAR_2) {
            FUNC_3(VAR_7);
            FUNC_0(VAR_7);
            VAR_6++;
        }

        if (VAR_7) FUNC_10(VAR_7);
    }
    FUNC_1(VAR_4,VAR_6);
}
