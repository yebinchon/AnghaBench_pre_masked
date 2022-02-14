
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ opcode; int param_buf; } ;
typedef TYPE_2__ tSMP_ENC ;
typedef int tBTM_BLE_LOCAL_ID_KEYS ;
typedef int UINT8 ;
struct TYPE_10__ {int ir; int dhk; } ;
struct TYPE_8__ {TYPE_3__ id_keys; } ;
struct TYPE_11__ {TYPE_1__ devcb; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ,int*,int,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_4__ VAR_2 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (TYPE_3__*,int ,int) ;

__attribute__((used)) static void FUNC_5(tSMP_ENC *VAR_3)
{
    UINT8 VAR_4 = 0x01;
    tSMP_ENC VAR_5;

    FUNC_0 ("btm_ble_process_dhk");

    if (VAR_3 && VAR_3->opcode == VAR_1) {
        FUNC_3(VAR_2.devcb.id_keys.dhk, VAR_3->param_buf, VAR_0);
        FUNC_0("BLE DHK generated.");


        if (!FUNC_1(VAR_2.devcb.id_keys.ir, VAR_0, &VAR_4,
                         1, &VAR_5)) {

            FUNC_4(&VAR_2.devcb.id_keys, 0, sizeof(tBTM_BLE_LOCAL_ID_KEYS));
        } else {
            FUNC_2(&VAR_5);
        }
    } else {

        FUNC_4(&VAR_2.devcb.id_keys, 0, sizeof(tBTM_BLE_LOCAL_ID_KEYS));
    }
}
