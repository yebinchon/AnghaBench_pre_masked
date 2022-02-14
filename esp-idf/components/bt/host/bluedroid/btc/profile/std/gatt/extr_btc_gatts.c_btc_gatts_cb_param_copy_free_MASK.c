
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {int p_data; } ;
struct TYPE_7__ {TYPE_1__ req_data; } ;
typedef TYPE_2__ tBTA_GATTS ;
struct TYPE_8__ {int act; } ;
typedef TYPE_3__ btc_msg_t ;







 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(btc_msg_t *VAR_0, tBTA_GATTS *VAR_1)
{
    uint16_t VAR_2 = VAR_0->act;

    switch (VAR_2) {
    case 129:
    case 128:
    case 131:
    case 130:
        if (VAR_1 && VAR_1->req_data.p_data) {
            FUNC_0(VAR_1->req_data.p_data);
        }
        break;
    case 132:
        break;
    default:
        break;
    }
}
