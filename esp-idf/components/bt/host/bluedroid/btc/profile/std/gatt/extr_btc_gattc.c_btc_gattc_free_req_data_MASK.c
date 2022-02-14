
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int bda_list; } ;
struct TYPE_6__ {int p_value; } ;
struct TYPE_8__ {TYPE_2__ get_addr_list; TYPE_1__ read; } ;
typedef TYPE_3__ tBTA_GATTC ;
struct TYPE_9__ {int act; scalar_t__ arg; } ;
typedef TYPE_4__ btc_msg_t ;






 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(btc_msg_t *VAR_0)
{
    tBTA_GATTC *VAR_1 = (tBTA_GATTC *)(VAR_0->arg);
    switch (VAR_0->act) {
        case 129:
        case 130:
        case 128: {
            if (VAR_1->read.p_value) {
                FUNC_0(VAR_1->read.p_value);
            }
            break;
        }
        case 131: {
            if (VAR_1->get_addr_list.bda_list) {
                FUNC_0(VAR_1->get_addr_list.bda_list);
            }
            break;
        }
        default:
            break;
    }
    return;
}
