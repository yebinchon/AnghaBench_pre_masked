
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {scalar_t__ hci_handle; scalar_t__ lmp_version; scalar_t__ manufacturer; scalar_t__ lmp_subversion; scalar_t__ transport; scalar_t__ link_role; int remote_addr; int peer_le_features; scalar_t__ in_use; } ;
typedef TYPE_1__ tACL_CONN ;
typedef scalar_t__ UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_6__ {TYPE_1__* acl_db; } ;
struct TYPE_5__ {int (* get_ble_default_data_packet_txtime ) () ;int (* get_ble_default_data_packet_length ) () ;} ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__,scalar_t__*) ;
 int FUNC_3 (scalar_t__,scalar_t__*) ;
 TYPE_3__ VAR_4 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,int ,int ) ;
 TYPE_2__* FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;

void FUNC_10 (UINT8 *VAR_5)
{
    tACL_CONN *VAR_6 = &VAR_4.acl_db[0];
    UINT8 VAR_7;
    UINT16 VAR_8;
    int VAR_9;
    FUNC_0 ("btm_read_remote_version_complete\n");

    FUNC_3 (VAR_7, VAR_5);
    FUNC_2 (VAR_8, VAR_5);


    for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++, VAR_6++) {
        if ((VAR_6->in_use) && (VAR_6->hci_handle == VAR_8)) {
            if (VAR_7 == VAR_2) {
                FUNC_3 (VAR_6->lmp_version, VAR_5);
                FUNC_2 (VAR_6->manufacturer, VAR_5);
                FUNC_2 (VAR_6->lmp_subversion, VAR_5);
            }

            if (VAR_6->transport == VAR_0) {
                if(VAR_6->link_role == VAR_1) {
                    if (FUNC_1(VAR_6->peer_le_features)) {
                        uint16_t VAR_10 = FUNC_6()->get_ble_default_data_packet_length();
                        uint16_t VAR_11 = FUNC_6()->get_ble_default_data_packet_txtime();
                        FUNC_5(VAR_6->hci_handle, VAR_10, VAR_11);
                    }
                    FUNC_7 (VAR_6->remote_addr);
                } else {

                     FUNC_4(VAR_6->hci_handle);
                }
            }

            break;
        }
    }
}
