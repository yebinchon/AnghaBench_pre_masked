
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_7__ {int opcode; int param_len; int * p_param_buf; } ;
typedef TYPE_1__ tBTM_VSC_CMPL ;
typedef int (* tBTM_CMPL_CB ) (TYPE_1__*) ;
struct TYPE_8__ {int (* update_exceptional_list_cmp_cb ) (int ,int ,int ,int *) ;} ;
typedef TYPE_3__ tBTM_BLE_CB ;
typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_9__ {TYPE_3__ ble_ctr_cb; } ;


 int FUNC_0 (char*) ;


 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 TYPE_6__ VAR_0 ;
 int FUNC_3 (int ,int ,int ,int *) ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5 (UINT8 *VAR_1, UINT16 VAR_2, UINT16 VAR_3,
                       tBTM_CMPL_CB *VAR_4)
{

    tBTM_BLE_CB *VAR_5 = &VAR_0.ble_ctr_cb;
    switch(VAR_2) {
        case 129:
            FUNC_0("Set long adv data complete\n");
            break;
        case 128: {
            uint8_t VAR_6, VAR_7; uint32_t VAR_8;
            FUNC_2(VAR_7, VAR_1);
            FUNC_2(VAR_6, VAR_1);
            FUNC_1(VAR_8, VAR_1);
            if(VAR_5 && VAR_5->update_exceptional_list_cmp_cb) {
                (*VAR_5->update_exceptional_list_cmp_cb)(VAR_7, VAR_6, VAR_8, VAR_1);
            }
            break;
        }
        default:
        break;
    }
    tBTM_VSC_CMPL VAR_9;


    if (VAR_4) {

        VAR_9.opcode = VAR_2;
        VAR_9.param_len = VAR_3;
        VAR_9.p_param_buf = VAR_1;
        (*VAR_4)(&VAR_9);
    }

}
