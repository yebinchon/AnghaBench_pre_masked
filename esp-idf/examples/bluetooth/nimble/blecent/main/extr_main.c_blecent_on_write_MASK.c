
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_2__ {int handle; } ;
struct peer_dsc {TYPE_1__ dsc; } ;
struct peer {int conn_handle; } ;
struct ble_gatt_error {int status; } ;
struct ble_gatt_attr {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int*,int,int ,int *) ;
 int VAR_6 ;
 struct peer_dsc* FUNC_4 (struct peer const*,int ,int ,int ) ;
 struct peer* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(uint16_t VAR_7,
                 const struct ble_gatt_error *VAR_8,
                 struct ble_gatt_attr *VAR_9,
                 void *VAR_10)
{
    FUNC_1(VAR_5,
                "Write complete; status=%d conn_handle=%d attr_handle=%d\n",
                VAR_8->status, VAR_7, VAR_9->handle);





    const struct peer_dsc *VAR_11;
    uint8_t VAR_12[2];
    int VAR_13;
    const struct peer *VAR_14 = FUNC_5(VAR_7);

    VAR_11 = FUNC_4(VAR_14,
                             FUNC_0(VAR_1),
                             FUNC_0(VAR_0),
                             FUNC_0(VAR_3));
    if (VAR_11 == ((void*)0)) {
        FUNC_1(VAR_4, "Error: Peer lacks a CCCD for the Unread Alert "
                    "Status characteristic\n");
        goto err;
    }

    VAR_12[0] = 1;
    VAR_12[1] = 0;
    VAR_13 = FUNC_3(VAR_7, VAR_11->dsc.handle,
                              VAR_12, sizeof VAR_12, VAR_6, ((void*)0));
    if (VAR_13 != 0) {
        FUNC_1(VAR_4, "Error: Failed to subscribe to characteristic; "
                    "rc=%d\n", VAR_13);
        goto err;
    }

    return 0;
err:

    return FUNC_2(VAR_14->conn_handle, VAR_2);
}
