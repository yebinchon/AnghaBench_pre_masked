
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int peer_bdaddr; } ;
typedef TYPE_2__ tBTA_DM_PEER_DEVICE ;
struct TYPE_5__ {int count; TYPE_2__* peer_device; } ;
struct TYPE_7__ {TYPE_1__ device_list; } ;
typedef int BD_ADDR ;


 int FUNC_0 (int ,int ) ;
 TYPE_4__ VAR_0 ;

tBTA_DM_PEER_DEVICE *FUNC_1(BD_ADDR VAR_1)
{
    tBTA_DM_PEER_DEVICE *VAR_2 = ((void*)0);

    for (int VAR_3 = 0; VAR_3 < VAR_0.device_list.count; VAR_3++) {
        if (!FUNC_0( VAR_0.device_list.peer_device[VAR_3].peer_bdaddr, VAR_1)) {
            VAR_2 = &VAR_0.device_list.peer_device[VAR_3];
            break;
        }

    }
    return VAR_2;
}
