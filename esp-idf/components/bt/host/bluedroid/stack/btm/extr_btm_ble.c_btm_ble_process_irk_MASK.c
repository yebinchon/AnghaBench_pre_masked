
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ opcode; int param_buf; } ;
typedef TYPE_4__ tSMP_ENC ;
struct TYPE_9__ {scalar_t__ privacy_mode; } ;
struct TYPE_7__ {int irk; } ;
struct TYPE_8__ {TYPE_1__ id_keys; } ;
struct TYPE_11__ {TYPE_3__ ble_ctr_cb; TYPE_2__ devcb; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_5__ VAR_5 ;
 int FUNC_2 (void*) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_6(tSMP_ENC *VAR_7)
{
    FUNC_0 ("btm_ble_process_irk");
    if (VAR_7 && VAR_7->opcode == VAR_3) {
        FUNC_5(VAR_5.devcb.id_keys.irk, VAR_7->param_buf, VAR_2);
        FUNC_3(VAR_0);



        if (VAR_5.ble_ctr_cb.privacy_mode != VAR_1) {
            FUNC_2((void *)VAR_6);
        }

    } else {
        FUNC_1("Generating IRK exception.");
    }


    if (!FUNC_4((void *)VAR_4)) {
        FUNC_1("Generating ER failed.");
    }
}
