
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tBT_TRANSPORT ;
typedef int tBTM_STATUS ;
typedef int tBTA_STATUS ;
typedef int (* tBTA_DM_ENCRYPT_CBACK ) (int ,int ,int ) ;
typedef size_t UINT8 ;
struct TYPE_5__ {size_t count; TYPE_1__* peer_device; } ;
struct TYPE_6__ {TYPE_2__ device_list; } ;
struct TYPE_4__ {scalar_t__ conn_state; int (* p_encrypt_cback ) (int ,int ,int ) ;int peer_bdaddr; } ;
typedef int BD_ADDR ;


 int FUNC_0 (char*,int ,int (*) (int ,int ,int )) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 TYPE_3__ VAR_6 ;
 int FUNC_3 (int ,int ,int ) ;

void FUNC_4(BD_ADDR VAR_7, tBT_TRANSPORT VAR_8, void *VAR_9, tBTM_STATUS VAR_10)
{
    tBTA_STATUS VAR_11 = VAR_4;
    tBTA_DM_ENCRYPT_CBACK *VAR_12 = ((void*)0);
    UINT8 VAR_13 ;
    FUNC_1(VAR_9);

    for (VAR_13 = 0; VAR_13 < VAR_6.device_list.count; VAR_13++) {
        if (FUNC_2( VAR_6.device_list.peer_device[VAR_13].peer_bdaddr, VAR_7) == 0 &&
                VAR_6.device_list.peer_device[VAR_13].conn_state == VAR_1) {
            break;
        }
    }

    if (VAR_13 < VAR_6.device_list.count) {
        VAR_12 = &VAR_6.device_list.peer_device[VAR_13].p_encrypt_cback;
        VAR_6.device_list.peer_device[VAR_13].p_encrypt_cback = ((void*)0);
    }

    switch (VAR_10) {
    case 129:
        break;
    case 128:
        VAR_11 = VAR_5;
        break;
    case 130:
        VAR_11 = VAR_3;
        break;
    case 131:
        VAR_11 = VAR_0;
        break;
    default:
        VAR_11 = VAR_2;
        break;
    }

    FUNC_0("bta_dm_encrypt_cback status =%d p_callback=%p", VAR_11, *VAR_12);

    if (VAR_12) {
        (*VAR_12)(VAR_7, VAR_8, VAR_11);
    }
}
