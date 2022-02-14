
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ opcode; int param_buf; } ;
typedef TYPE_2__ tBTM_RAND_ENC ;
typedef int tBTM_BLE_LOCAL_ID_KEYS ;
struct TYPE_8__ {int ir; } ;
struct TYPE_6__ {TYPE_3__ id_keys; } ;
struct TYPE_9__ {TYPE_1__ devcb; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_4__ VAR_3 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (TYPE_3__*,int ,int) ;

__attribute__((used)) static void FUNC_5(tBTM_RAND_ENC *VAR_4)
{
    FUNC_0 ("btm_ble_process_ir");

    if (VAR_4 && VAR_4->opcode == VAR_1) {

        FUNC_3(VAR_3.devcb.id_keys.ir, VAR_4->param_buf, VAR_0);

        if (!FUNC_2((void *)VAR_2)) {
            FUNC_1("Generating IR2 failed.");
            FUNC_4(&VAR_3.devcb.id_keys, 0, sizeof(tBTM_BLE_LOCAL_ID_KEYS));
        }
    }
}
