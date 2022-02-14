
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_11__ {char* irk; char* static_addr; int addr_type; } ;
typedef TYPE_3__ tBTM_LE_PID_KEYS ;
typedef int tBTM_LE_PENC_KEYS ;
typedef int tBTM_LE_PCSRK_KEYS ;
typedef int tBTM_LE_KEY_VALUE ;
struct TYPE_9__ {int static_addr; int addr_type; int irk; } ;
struct TYPE_10__ {TYPE_1__ pid_key; int key_mask; int pcsrk_key; int penc_key; } ;
struct TYPE_12__ {TYPE_2__ bond_key; int * bd_addr; } ;
typedef TYPE_4__ esp_ble_bond_dev_t ;
typedef int btc_config_section_iter_t ;
typedef scalar_t__ bt_status_t ;
struct TYPE_13__ {char* address; } ;
typedef TYPE_5__ bt_bdaddr_t ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (TYPE_5__*,int ,char*,int) ;
 int FUNC_1 (char const*,int ,int*) ;
 int FUNC_2 () ;
 int * FUNC_3 () ;
 int const* FUNC_4 () ;
 char* FUNC_5 (int const*) ;
 int * FUNC_6 (int const*) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,char*,int) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (char const*,TYPE_5__*) ;

bt_status_t FUNC_11(esp_ble_bond_dev_t *VAR_10, int VAR_11)
{
    bt_bdaddr_t VAR_12;
    char VAR_13[sizeof(tBTM_LE_KEY_VALUE)] = {0};

    FUNC_2();
    for (const btc_config_section_iter_t *VAR_14 = FUNC_3(); VAR_14 != FUNC_4();
            VAR_14 = FUNC_6(VAR_14)) {

        if (VAR_11-- <= 0) {
            break;
        }
        uint32_t VAR_15 = 0;
        const char *VAR_16 = FUNC_5(VAR_14);

        if (!FUNC_9(VAR_16) ||
                !FUNC_1(VAR_16, VAR_0, (int *)&VAR_15) ||
                !(VAR_15 & VAR_4)) {
            VAR_11 ++;
            continue;
        }

        FUNC_10(VAR_16, &VAR_12);
        FUNC_8(VAR_10->bd_addr, VAR_12.address, sizeof(bt_bdaddr_t));

        if (FUNC_0(&VAR_12, VAR_2, VAR_13, sizeof(tBTM_LE_PENC_KEYS)) == VAR_6) {
            VAR_10->bond_key.key_mask |= VAR_8;
            FUNC_8(&VAR_10->bond_key.penc_key, VAR_13, sizeof(tBTM_LE_PENC_KEYS));
        }

        if (FUNC_0(&VAR_12, VAR_1, VAR_13, sizeof(tBTM_LE_PCSRK_KEYS)) == VAR_6) {
            VAR_10->bond_key.key_mask |= VAR_7;
            FUNC_8(&VAR_10->bond_key.pcsrk_key, VAR_13, sizeof(tBTM_LE_PCSRK_KEYS));
        }

        if (FUNC_0(&VAR_12, VAR_3, VAR_13, sizeof(tBTM_LE_PID_KEYS)) == VAR_6) {
            VAR_10->bond_key.key_mask |= VAR_9;
            tBTM_LE_PID_KEYS *VAR_17 = (tBTM_LE_PID_KEYS *) VAR_13;
            FUNC_8(&VAR_10->bond_key.pid_key.irk, VAR_17->irk, VAR_5);
            VAR_10->bond_key.pid_key.addr_type = VAR_17->addr_type;
            FUNC_8(&VAR_10->bond_key.pid_key.static_addr, VAR_17->static_addr, sizeof(BD_ADDR));
        }

        VAR_10++;
    }
    FUNC_7();

    return VAR_6;
}
