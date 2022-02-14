
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int esp_err_t ;
struct TYPE_4__ {int param_type; int * value; } ;
struct TYPE_5__ {TYPE_1__ set_security_param; } ;
typedef TYPE_2__ btc_gap_bt_args_t ;



 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static esp_err_t FUNC_2(btc_gap_bt_args_t *VAR_1)
{
    esp_err_t VAR_2;
    switch(VAR_1->set_security_param.param_type) {
    case 128:{
        uint8_t VAR_3 = 0;
        uint8_t *VAR_4 = VAR_1->set_security_param.value;
        FUNC_0(VAR_3, VAR_4);
        VAR_2 = FUNC_1(VAR_3);
        break;
    }
    default:
        VAR_2 = VAR_0;
        break;
    }
    return VAR_2;
}
