
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_2__ {int val_handle; } ;
struct peer_chr {TYPE_1__ chr; } ;
struct peer {int conn_handle; } ;
struct ble_gatt_error {scalar_t__ status; } ;
struct ble_gatt_attr {int handle; int om; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int*,int,int ,int *) ;
 int VAR_5 ;
 struct peer_chr* FUNC_4 (struct peer const*,int ,int ) ;
 struct peer* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(uint16_t VAR_6,
                const struct ble_gatt_error *VAR_7,
                struct ble_gatt_attr *VAR_8,
                void *VAR_9)
{
    FUNC_1(VAR_4, "Read complete; status=%d conn_handle=%d", VAR_7->status,
                VAR_6);
    if (VAR_7->status == 0) {
        FUNC_1(VAR_4, " attr_handle=%d value=", VAR_8->handle);
        FUNC_6(VAR_8->om);
    }
    FUNC_1(VAR_4, "\n");




    const struct peer_chr *VAR_10;
    uint8_t VAR_11[2];
    int VAR_12;
    const struct peer *VAR_13 = FUNC_5(VAR_6);

    VAR_10 = FUNC_4(VAR_13,
                             FUNC_0(VAR_1),
                             FUNC_0(VAR_0));
    if (VAR_10 == ((void*)0)) {
        FUNC_1(VAR_3, "Error: Peer doesn't support the Alert "
                    "Notification Control Point characteristic\n");
        goto err;
    }

    VAR_11[0] = 99;
    VAR_11[1] = 100;
    VAR_12 = FUNC_3(VAR_6, VAR_10->chr.val_handle,
                              VAR_11, sizeof VAR_11, VAR_5, ((void*)0));
    if (VAR_12 != 0) {
        FUNC_1(VAR_3, "Error: Failed to write characteristic; rc=%d\n",
                    VAR_12);
        goto err;
    }

    return 0;
err:

    return FUNC_2(VAR_13->conn_handle, VAR_2);
}
