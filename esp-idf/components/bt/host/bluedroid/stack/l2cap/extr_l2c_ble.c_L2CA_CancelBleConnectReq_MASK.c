
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ link_role; int disc_reason; } ;
typedef TYPE_1__ tL2C_LCB ;
struct TYPE_6__ {int* ble_connecting_bda; } ;
typedef int BOOLEAN ;
typedef int* BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,...) ;
 int VAR_7 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;
 TYPE_4__ VAR_8 ;
 TYPE_1__* FUNC_5 (int*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (int*,int*,int ) ;

BOOLEAN FUNC_8 (BD_ADDR VAR_9)
{
    tL2C_LCB *VAR_10;


    if (FUNC_2() == VAR_2) {
        FUNC_1 ("L2CA_CancelBleConnectReq - no connection pending");
        return (VAR_4);
    }

    if (FUNC_7 (VAR_9, VAR_8.ble_connecting_bda, VAR_0)) {
        FUNC_1 ("L2CA_CancelBleConnectReq - different  BDA Connecting: %08x%04x  Cancel: %08x%04x",
                             (VAR_8.ble_connecting_bda[0] << 24) + (VAR_8.ble_connecting_bda[1] << 16) + (VAR_8.ble_connecting_bda[2] << 8) + VAR_8.ble_connecting_bda[3],
                             (VAR_8.ble_connecting_bda[4] << 8) + VAR_8.ble_connecting_bda[5],
                             (VAR_9[0] << 24) + (VAR_9[1] << 16) + (VAR_9[2] << 8) + VAR_9[3], (VAR_9[4] << 8) + VAR_9[5]);

        return (VAR_4);
    }

    if (FUNC_4()) {
        VAR_10 = FUNC_5(VAR_9, VAR_3);

        if (VAR_10 != ((void*)0) &&
                !(VAR_10->link_role == VAR_5 && FUNC_0(VAR_9))) {
            VAR_10->disc_reason = VAR_6;
            FUNC_6 (VAR_10);
        }

        FUNC_3 (VAR_1);

        return (VAR_7);
    } else {
        return (VAR_4);
    }
}
