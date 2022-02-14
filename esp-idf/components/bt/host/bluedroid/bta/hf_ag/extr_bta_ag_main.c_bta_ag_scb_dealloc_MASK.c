
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int sco_idx; int colli_timer; int cn_timer; int act_timer; } ;
typedef TYPE_2__ tBTA_AG_SCB ;
typedef size_t UINT8 ;
struct TYPE_9__ {int (* p_cback ) (int ,int *) ;TYPE_1__* scb; } ;
struct TYPE_7__ {scalar_t__ in_use; } ;
typedef int BOOLEAN ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_6__ VAR_6 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int FUNC_5 (int ,int *) ;

void FUNC_6(tBTA_AG_SCB *VAR_7)
{
    UINT8 VAR_8;
    BOOLEAN VAR_9 = VAR_4;

    FUNC_0("bta_ag_scb_dealloc %d", FUNC_1(VAR_7));

    FUNC_3(&VAR_7->act_timer);

    FUNC_3(&VAR_7->cn_timer);

    FUNC_3(&VAR_7->colli_timer);


    FUNC_4(VAR_7, 0, sizeof(tBTA_AG_SCB));
    VAR_7->sco_idx = VAR_3;

    if (!FUNC_2 (VAR_2)) {
        for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
            if (VAR_6.scb[VAR_8].in_use) {
                VAR_9 = VAR_5;
                break;
            }
        }
        if (!VAR_9) {
            (*VAR_6.p_cback)(VAR_0, ((void*)0));
        }
    }
}
