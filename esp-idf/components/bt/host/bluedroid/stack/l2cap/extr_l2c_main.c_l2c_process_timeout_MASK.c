
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int conn_update_mask; } ;
typedef TYPE_1__ tL2C_LCB ;
typedef int tL2C_CCB ;
typedef int UINT8 ;
struct TYPE_8__ {int event; scalar_t__ param; } ;
typedef TYPE_2__ TIMER_LIST_ENT ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;

void FUNC_5 (TIMER_LIST_ENT *VAR_6)
{

    switch (VAR_6->event) {
    case 129:
        FUNC_2 ((tL2C_LCB *)VAR_6->param);
        break;

    case 133:
        FUNC_0 (((tL2C_CCB *)VAR_6->param), VAR_2, ((void*)0));
        break;

    case 132:
        FUNC_0 (((tL2C_CCB *)VAR_6->param), VAR_1, ((void*)0));
        break;

    case 131:

        FUNC_3(VAR_5);
        break;

    case 130:
        FUNC_1((tL2C_LCB *)VAR_6->param);
        break;
    case 128: {

        UINT8 VAR_7 = VAR_0;
        tL2C_LCB *VAR_8 = (tL2C_LCB *)VAR_6->param;
        if (VAR_8){
            VAR_8->conn_update_mask &= ~VAR_4;
            VAR_8->conn_update_mask &= ~VAR_3;
        }
        FUNC_4(VAR_8, VAR_7);

        break;
    }
    }
}
