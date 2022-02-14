
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {int act; scalar_t__ arg; } ;
typedef TYPE_6__ btc_msg_t ;
struct TYPE_12__ {int number; } ;
struct TYPE_11__ {int number; } ;
struct TYPE_10__ {int number; } ;
struct TYPE_9__ {int name; } ;
struct TYPE_13__ {int unat; } ;
struct TYPE_15__ {TYPE_4__ phone; TYPE_3__ cnum_rep; TYPE_2__ clcc_rep; TYPE_1__ cops_rep; TYPE_5__ unat_rep; } ;
typedef TYPE_7__ btc_hf_args_t ;
 int FUNC_0 (int ) ;

void FUNC_1(btc_msg_t *VAR_0)
{
    btc_hf_args_t *VAR_1 = (btc_hf_args_t *)VAR_0->arg;

    switch (VAR_0->act) {
        case 128:
        {
            if (VAR_1->unat_rep.unat) {
                FUNC_0(VAR_1->unat_rep.unat);
            }
            break;
        }

        case 132:
        {
            if (VAR_1->cops_rep.name) {
                FUNC_0(VAR_1->cops_rep.name);
            }
            break;
        }

        case 134:
        {
            if (VAR_1->clcc_rep.number) {
                FUNC_0(VAR_1->clcc_rep.number);
            }
            break;
        }

        case 133:
        {
            if (VAR_1->cnum_rep.number) {
                FUNC_0(VAR_1->cnum_rep.number);
            }
            break;
        }

        case 135:
        case 129:
        case 130:
        case 131:
        {
            if (VAR_1->phone.number) {
                FUNC_0(VAR_1->phone.number);
            }
            break;
        }

        default:
            break;
    }
}
