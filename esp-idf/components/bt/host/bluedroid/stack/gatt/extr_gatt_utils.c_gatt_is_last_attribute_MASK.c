
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int p_db; } ;
typedef TYPE_1__ tGATT_SR_REG ;
struct TYPE_8__ {int * p_last_primary; } ;
typedef TYPE_2__ tGATT_SRV_LIST_INFO ;
struct TYPE_9__ {struct TYPE_9__* p_next; int i_sreg; } ;
typedef TYPE_3__ tGATT_SRV_LIST_ELEM ;
typedef int tBT_UUID ;
typedef int BOOLEAN ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int * FUNC_2 (int ) ;

BOOLEAN FUNC_3(tGATT_SRV_LIST_INFO *VAR_2, tGATT_SRV_LIST_ELEM *VAR_3, tBT_UUID VAR_4)
{
    tGATT_SRV_LIST_ELEM *VAR_5 = VAR_3->p_next;
    BOOLEAN VAR_6 = VAR_1;
    tGATT_SR_REG *VAR_7 = ((void*)0);
    tBT_UUID *VAR_8;

    VAR_2->p_last_primary = ((void*)0);

    while (VAR_5) {
        VAR_7 = FUNC_0(VAR_5->i_sreg);

        VAR_8 = FUNC_2 (VAR_7->p_db);

        if (FUNC_1(VAR_4, *VAR_8)) {
            VAR_6 = VAR_0;
            break;

        }
        VAR_5 = VAR_5->p_next;
    }

    return VAR_6;

}
