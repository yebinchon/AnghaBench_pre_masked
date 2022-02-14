
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tBT_TRANSPORT ;
typedef scalar_t__ tBTM_STATUS ;
typedef int tBTM_CMPL_CB ;
struct TYPE_2__ {int peer_bdaddr; scalar_t__* peer_name; } ;
typedef int BOOLEAN ;
typedef int BD_ADDR ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static BOOLEAN FUNC_5 (BD_ADDR VAR_7, tBT_TRANSPORT VAR_8)
{
    tBTM_STATUS VAR_9;

    FUNC_0("bta_dm_read_remote_device_name");

    FUNC_4(VAR_5.peer_bdaddr, VAR_7);
    VAR_5.peer_name[0] = 0;

    VAR_9 = FUNC_2 (VAR_5.peer_bdaddr,
                                           (tBTM_CMPL_CB *) VAR_4,
                                           VAR_8);

    if ( VAR_9 == VAR_1 ) {
        FUNC_0("bta_dm_read_remote_device_name: BTM_ReadRemoteDeviceName is started");

        return (VAR_3);
    } else if ( VAR_9 == VAR_0 ) {
        FUNC_0("bta_dm_read_remote_device_name: BTM_ReadRemoteDeviceName is busy");



        FUNC_3(&VAR_6);

        return (VAR_3);
    } else {
        FUNC_1("bta_dm_read_remote_device_name: BTM_ReadRemoteDeviceName returns 0x%02X", VAR_9);

        return (VAR_2);
    }
}
