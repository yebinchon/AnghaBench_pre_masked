
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct peer {scalar_t__ conn_handle; int disc_prev_chr_val; TYPE_2__* cur_svc; } ;
struct ble_gatt_error {int status; } ;
struct ble_gatt_chr {int dummy; } ;
struct TYPE_3__ {int start_handle; } ;
struct TYPE_4__ {TYPE_1__ svc; } ;



 int FUNC_0 (int) ;
 int FUNC_1 (struct peer*,int ,struct ble_gatt_chr const*) ;
 int FUNC_2 (struct peer*) ;
 int FUNC_3 (struct peer*,int) ;

__attribute__((used)) static int
FUNC_4(uint16_t VAR_0, const struct ble_gatt_error *VAR_1,
                const struct ble_gatt_chr *VAR_2, void *VAR_3)
{
    struct peer *VAR_4;
    int VAR_5;

    VAR_4 = VAR_3;
    FUNC_0(VAR_4->conn_handle == VAR_0);

    switch (VAR_1->status) {
    case 0:
        VAR_5 = FUNC_1(VAR_4, VAR_4->cur_svc->svc.start_handle, VAR_2);
        break;

    case 128:



        if (VAR_4->disc_prev_chr_val > 0) {
            FUNC_2(VAR_4);
        }
        VAR_5 = 0;
        break;

    default:
        VAR_5 = VAR_1->status;
        break;
    }

    if (VAR_5 != 0) {

        FUNC_3(VAR_4, VAR_5);
    }

    return VAR_5;
}
