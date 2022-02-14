
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_5__ {scalar_t__ start_pc; } ;
struct TYPE_6__ {struct TYPE_6__* next; TYPE_1__ block; } ;
typedef TYPE_2__ htab_entry_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__** VAR_0 ;

void FUNC_2(u32 VAR_1) {
    int VAR_2 = FUNC_0(VAR_1);
    htab_entry_t *VAR_3, *VAR_4, *VAR_5;

    VAR_3 = VAR_0[VAR_2];
    VAR_5 = ((void*)0);


    while(VAR_3) {
        VAR_4 = VAR_3->next;


        if(VAR_3->block.start_pc == VAR_1) {

            if(VAR_5) {
                VAR_5->next = VAR_4;
            }
            else {
                VAR_0[VAR_2] = VAR_4;
            }


            FUNC_1(VAR_3);

            return;
        }

        VAR_5 = VAR_3;
        VAR_3 = VAR_4;
    }
}
