
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct peer {scalar_t__ conn_handle; int disc_prev_chr_val; } ;
struct ble_gatt_error {int status; } ;
struct ble_gatt_dsc {int dummy; } ;



 int FUNC_0 (int) ;
 int FUNC_1 (struct peer*,int) ;
 int FUNC_2 (struct peer*) ;
 int FUNC_3 (struct peer*,scalar_t__,struct ble_gatt_dsc const*) ;

__attribute__((used)) static int
FUNC_4(uint16_t VAR_0, const struct ble_gatt_error *VAR_1,
                uint16_t VAR_2, const struct ble_gatt_dsc *VAR_3,
                void *VAR_4)
{
    struct peer *VAR_5;
    int VAR_6;

    VAR_5 = VAR_4;
    FUNC_0(VAR_5->conn_handle == VAR_0);

    switch (VAR_1->status) {
    case 0:
        VAR_6 = FUNC_3(VAR_5, VAR_2, VAR_3);
        break;

    case 128:



        if (VAR_5->disc_prev_chr_val > 0) {
            FUNC_2(VAR_5);
        }
        VAR_6 = 0;
        break;

    default:

        VAR_6 = VAR_1->status;
        break;
    }

    if (VAR_6 != 0) {

        FUNC_1(VAR_5, VAR_6);
    }

    return VAR_6;
}
