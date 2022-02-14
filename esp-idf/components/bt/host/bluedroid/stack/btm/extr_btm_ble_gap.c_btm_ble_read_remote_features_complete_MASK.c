
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {scalar_t__ hci_handle; scalar_t__ link_role; scalar_t__ transport; int remote_addr; int peer_le_features; scalar_t__ in_use; } ;
typedef TYPE_1__ tACL_CONN ;
typedef scalar_t__ UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_6__ {TYPE_1__* acl_db; } ;
struct TYPE_5__ {int (* get_ble_default_data_packet_txtime ) () ;int (* get_ble_default_data_packet_length ) () ;} ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,scalar_t__*,int ) ;
 int FUNC_3 (scalar_t__,scalar_t__*) ;
 int FUNC_4 (scalar_t__,scalar_t__*) ;
 TYPE_3__ VAR_5 ;
 int FUNC_5 (scalar_t__,int ,int ) ;
 int FUNC_6 (scalar_t__) ;
 TYPE_2__* FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;

void FUNC_11(UINT8 *VAR_6)
{
    tACL_CONN *VAR_7 = &VAR_5.acl_db[0];
    UINT16 VAR_8;
    UINT8 VAR_9;
    int VAR_10;

    FUNC_0 ("btm_ble_read_remote_features_complete ");

    FUNC_4(VAR_9, VAR_6);



    if (VAR_9 != VAR_2) {
        FUNC_3 (VAR_8, VAR_6);


        for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++, VAR_7++) {
            if ((VAR_7->in_use) && (VAR_7->hci_handle == VAR_8)) {
                FUNC_2(VAR_7->peer_le_features, VAR_6, VAR_0);





                if (VAR_7->link_role == VAR_3){
                    FUNC_6 (VAR_7->hci_handle);
                }
                else{
                    if (VAR_7->transport == VAR_1) {
                        if (FUNC_1(VAR_7->peer_le_features)) {
                            uint16_t VAR_11 = FUNC_7()->get_ble_default_data_packet_length();
                            uint16_t VAR_12 = FUNC_7()->get_ble_default_data_packet_txtime();
                            FUNC_5(VAR_7->hci_handle, VAR_11, VAR_12);
                        }
                        FUNC_8 (VAR_7->remote_addr);
                    }
                }

                break;
            }
        }
    }

}
