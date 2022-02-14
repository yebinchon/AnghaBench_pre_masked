
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int type; int value; } ;
typedef TYPE_2__ tBTA_AG_IND ;
struct TYPE_7__ {int call_held_status; int battery_level; int roam; int signal_strength; int svc; int call_setup_status; int call_status; } ;
struct TYPE_9__ {TYPE_1__ cind; } ;
typedef TYPE_3__ esp_hf_cb_param_t ;
 int VAR_0 ;
 int FUNC_0 (int ,TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;

__attribute__((used)) static void FUNC_2(tBTA_AG_IND *VAR_1)
{
    esp_hf_cb_param_t VAR_2;
    FUNC_1(&VAR_2, 0, sizeof(esp_hf_cb_param_t));

    switch (VAR_1->type) {
        case 133:
            VAR_2.cind.call_status = VAR_1->value;
            break;
        case 131:
            VAR_2.cind.call_setup_status = VAR_1->value;
            break;
        case 129:
            VAR_2.cind.svc = VAR_1->value;
            break;
        case 128:
            VAR_2.cind.signal_strength = VAR_1->value;
            break;
        case 130:
            VAR_2.cind.roam = VAR_1->value;
            break;
        case 134:
            VAR_2.cind.battery_level = VAR_1->value;
            break;
        case 132:
            VAR_2.cind.call_held_status = VAR_1->value;
            break;
    }
    FUNC_0(VAR_0, &VAR_2);
}
