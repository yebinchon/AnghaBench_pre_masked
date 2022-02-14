
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int act; scalar_t__ arg; } ;
typedef TYPE_4__ btc_msg_t ;
struct TYPE_10__ {int p_url; int p_manufacturer_data; } ;
struct TYPE_8__ {TYPE_3__ eir_data; } ;
struct TYPE_9__ {int value; } ;
struct TYPE_12__ {TYPE_1__ config_eir; TYPE_2__ set_security_param; } ;
typedef TYPE_5__ btc_gap_bt_args_t ;
 int FUNC_0 (char*,int,TYPE_5__*) ;
 int FUNC_1 (int ) ;

void FUNC_2(btc_msg_t *VAR_0)
{
    btc_gap_bt_args_t *VAR_1 = (btc_gap_bt_args_t *)VAR_0->arg;
    switch (VAR_0->act) {
    case 130:
    case 128:
    case 143:
    case 140:
    case 139:
    case 132:
    case 135:
    case 134:
    case 137:
    case 131:
    case 133:
    case 136:
        break;

    case 138:
    case 141:
        break;
    case 129:
        if (VAR_1->set_security_param.value) {
            FUNC_1(VAR_1->set_security_param.value);
        }
        break;


    case 142:
        if (VAR_1->config_eir.eir_data.p_manufacturer_data) {
            FUNC_1(VAR_1->config_eir.eir_data.p_manufacturer_data);
        }
        if (VAR_1->config_eir.eir_data.p_url) {
            FUNC_1(VAR_1->config_eir.eir_data.p_url);
        }
        break;
    default:
        FUNC_0("Unhandled deep copy %d, arg: %p\n", VAR_0->act, VAR_1);
        break;
    }
}
