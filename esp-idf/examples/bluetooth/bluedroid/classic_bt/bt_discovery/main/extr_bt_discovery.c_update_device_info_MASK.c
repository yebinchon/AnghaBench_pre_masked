
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
typedef void* int8_t ;
typedef int int32_t ;
struct TYPE_8__ {int type; size_t len; scalar_t__ val; } ;
typedef TYPE_2__ esp_bt_gap_dev_prop_t ;
struct TYPE_7__ {size_t* bda; int num_prop; TYPE_2__* prop; } ;
struct TYPE_9__ {TYPE_1__ disc_res; } ;
typedef TYPE_3__ esp_bt_gap_cb_param_t ;
struct TYPE_10__ {int dev_found; char* bda; char* bdname; size_t bdname_len; char* eir; size_t eir_len; int state; void* rssi; int cod; } ;
typedef TYPE_4__ app_gap_cb_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;




 size_t VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_4 ;
 int FUNC_1 (size_t*,char*,int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,char*,scalar_t__*) ;
 TYPE_4__ VAR_5 ;
 scalar_t__ FUNC_6 (size_t*,char*,size_t) ;
 int FUNC_7 (char*,size_t*,size_t) ;

__attribute__((used)) static void FUNC_8(esp_bt_gap_cb_param_t *VAR_6)
{
    char VAR_7[18];
    uint32_t VAR_8 = 0;
    int32_t VAR_9 = -129;
    esp_bt_gap_dev_prop_t *VAR_10;

    FUNC_0(VAR_4, "Device found: %s", FUNC_1(VAR_6->disc_res.bda, VAR_7, 18));
    for (int VAR_11 = 0; VAR_11 < VAR_6->disc_res.num_prop; VAR_11++) {
        VAR_10 = VAR_6->disc_res.prop + VAR_11;
        switch (VAR_10->type) {
        case 130:
            VAR_8 = *(uint32_t *)(VAR_10->val);
            FUNC_0(VAR_4, "--Class of Device: 0x%x", VAR_8);
            break;
        case 128:
            VAR_9 = *(int8_t *)(VAR_10->val);
            FUNC_0(VAR_4, "--RSSI: %d", VAR_9);
            break;
        case 131:
        default:
            break;
        }
    }


    app_gap_cb_t *VAR_12 = &VAR_5;
    if (VAR_12->dev_found && 0 != FUNC_6(VAR_6->disc_res.bda, VAR_12->bda, VAR_1)) {
        return;
    }

    if (!FUNC_4(VAR_8) ||
            !(FUNC_3(VAR_8) == VAR_2)) {
        return;
    }

    FUNC_7(VAR_12->bda, VAR_6->disc_res.bda, VAR_1);
    VAR_12->dev_found = 1;
    for (int VAR_13 = 0; VAR_13 < VAR_6->disc_res.num_prop; VAR_13++) {
        VAR_10 = VAR_6->disc_res.prop + VAR_13;
        switch (VAR_10->type) {
        case 130:
            VAR_12->cod = *(uint32_t *)(VAR_10->val);
            break;
        case 128:
            VAR_12->rssi = *(int8_t *)(VAR_10->val);
            break;
        case 131: {
            uint8_t VAR_14 = (VAR_10->len > VAR_3) ? VAR_3 :
                          (uint8_t)VAR_10->len;
            FUNC_7(VAR_12->bdname, (uint8_t *)(VAR_10->val), VAR_14);
            VAR_12->bdname[VAR_14] = '\0';
            VAR_12->bdname_len = VAR_14;
            break;
        }
        case 129: {
            FUNC_7(VAR_12->eir, (uint8_t *)(VAR_10->val), VAR_10->len);
            VAR_12->eir_len = VAR_10->len;
            break;
        }
        default:
            break;
        }
    }

    if (VAR_12->eir && VAR_12->bdname_len == 0) {
        FUNC_5(VAR_12->eir, VAR_12->bdname, &VAR_12->bdname_len);
        FUNC_0(VAR_4, "Found a target device, address %s, name %s", VAR_7, VAR_12->bdname);
        VAR_12->state = VAR_0;
        FUNC_0(VAR_4, "Cancel device discovery ...");
        FUNC_2();
    }
}
