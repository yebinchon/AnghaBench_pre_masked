
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tSMP_INT_DATA ;
struct TYPE_7__ {scalar_t__ role; int pairing_bda; } ;
typedef TYPE_2__ tSMP_CB ;
struct TYPE_6__ {scalar_t__ skip_update_conn_param; } ;
struct TYPE_8__ {TYPE_1__ ble; } ;
typedef TYPE_3__ tBTM_SEC_DEV_REC ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 TYPE_3__* FUNC_1 (int ) ;

void FUNC_2(tSMP_CB *VAR_2, tSMP_INT_DATA *VAR_3)
{
    if(VAR_2->role == VAR_0) {
        FUNC_0(VAR_2->pairing_bda, VAR_1);
    }

    else {
        tBTM_SEC_DEV_REC *VAR_4 = FUNC_1 (VAR_2->pairing_bda);
        if(VAR_4 && VAR_4->ble.skip_update_conn_param) {

            return;
        }




        FUNC_0(VAR_2->pairing_bda, VAR_1);
    }

}
