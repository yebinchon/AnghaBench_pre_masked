
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ opcode; int param_buf; } ;
typedef TYPE_2__ tBTM_RAND_ENC ;
struct TYPE_5__ {int * ble_encryption_key_value; } ;
struct TYPE_7__ {TYPE_1__ devcb; } ;
typedef int BT_OCTET16 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__ VAR_3 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int **,int ,int) ;

__attribute__((used)) static void FUNC_5(tBTM_RAND_ENC *VAR_4)
{
    FUNC_0 ("btm_ble_process_er");

    if (VAR_4 && VAR_4->opcode == VAR_1) {
        FUNC_3(&VAR_3.devcb.ble_encryption_key_value[0], VAR_4->param_buf, VAR_0);

        if (!FUNC_2((void *)VAR_2)) {
            FUNC_4(&VAR_3.devcb.ble_encryption_key_value, 0, sizeof(BT_OCTET16));
            FUNC_1("Generating ER2 failed.");
        }
    } else {
        FUNC_1("Generating ER1 exception.");
    }
}
