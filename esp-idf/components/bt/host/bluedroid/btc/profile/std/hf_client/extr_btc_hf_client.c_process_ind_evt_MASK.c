
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_20__ {int type; int value; } ;
typedef TYPE_8__ tBTA_HF_CLIENT_IND ;
struct TYPE_19__ {int value; } ;
struct TYPE_18__ {int status; } ;
struct TYPE_17__ {int value; } ;
struct TYPE_16__ {int status; } ;
struct TYPE_15__ {int status; } ;
struct TYPE_14__ {int status; } ;
struct TYPE_13__ {int status; } ;
struct TYPE_21__ {TYPE_7__ battery_level; TYPE_6__ roaming; TYPE_5__ signal_strength; TYPE_4__ service_availability; TYPE_3__ call_held; TYPE_2__ call_setup; TYPE_1__ call; } ;
typedef TYPE_9__ esp_hf_client_cb_param_t ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,TYPE_9__*) ;
 int FUNC_1 (TYPE_9__*,int ,int) ;

__attribute__((used)) static void FUNC_2(tBTA_HF_CLIENT_IND *VAR_7)
{
    esp_hf_client_cb_param_t VAR_8;
    FUNC_1(&VAR_8, 0, sizeof(esp_hf_client_cb_param_t));

    switch (VAR_7->type)
    {
        case 133:
            VAR_8.call.status = VAR_7->value;
            FUNC_0(VAR_1, &VAR_8);
            break;

        case 131:
            VAR_8.call_setup.status = VAR_7->value;
            FUNC_0(VAR_3, &VAR_8);
            break;
        case 132:
            VAR_8.call_held.status = VAR_7->value;
            FUNC_0(VAR_2, &VAR_8);
            break;

        case 129:
            VAR_8.service_availability.status = VAR_7->value;
            FUNC_0(VAR_5, &VAR_8);
            break;

        case 128:
            VAR_8.signal_strength.value = VAR_7->value;
            FUNC_0(VAR_6, &VAR_8);
            break;

        case 130:
            VAR_8.roaming.status = VAR_7->value;
            FUNC_0(VAR_4, &VAR_8);
            break;

        case 134:
            VAR_8.battery_level.value = VAR_7->value;
            FUNC_0(VAR_0, &VAR_8);
            break;

        default:
            break;
    }
}
