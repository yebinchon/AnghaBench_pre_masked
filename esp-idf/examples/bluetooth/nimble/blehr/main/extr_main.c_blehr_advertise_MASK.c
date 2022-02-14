
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ble_hs_adv_fields {int flags; int tx_pwr_lvl_is_present; int name_is_complete; int disc_mode; int conn_mode; int name_len; int * name; int tx_pwr_lvl; } ;
struct ble_gap_adv_params {int flags; int tx_pwr_lvl_is_present; int name_is_complete; int disc_mode; int conn_mode; int name_len; int * name; int tx_pwr_lvl; } ;
typedef int fields ;
typedef int adv_params ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct ble_hs_adv_fields*) ;
 int FUNC_2 (int ,int *,int ,struct ble_hs_adv_fields*,int ,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (struct ble_hs_adv_fields*,int ,int) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void
FUNC_5(void)
{
    struct ble_gap_adv_params VAR_10;
    struct ble_hs_adv_fields VAR_11;
    int VAR_12;







    FUNC_3(&VAR_11, 0, sizeof(VAR_11));






    VAR_11.flags = VAR_3 |
                   VAR_2;






    VAR_11.tx_pwr_lvl_is_present = 1;
    VAR_11.tx_pwr_lvl = VAR_4;

    VAR_11.name = (uint8_t *)VAR_9;
    VAR_11.name_len = FUNC_4(VAR_9);
    VAR_11.name_is_complete = 1;

    VAR_12 = FUNC_1(&VAR_11);
    if (VAR_12 != 0) {
        FUNC_0(VAR_6, "error setting advertisement data; rc=%d\n", VAR_12);
        return;
    }


    FUNC_3(&VAR_10, 0, sizeof(VAR_10));
    VAR_10.conn_mode = VAR_0;
    VAR_10.disc_mode = VAR_1;
    VAR_12 = FUNC_2(VAR_7, ((void*)0), VAR_5,
                           &VAR_10, VAR_8, ((void*)0));
    if (VAR_12 != 0) {
        FUNC_0(VAR_6, "error enabling advertisement; rc=%d\n", VAR_12);
        return;
    }
}
