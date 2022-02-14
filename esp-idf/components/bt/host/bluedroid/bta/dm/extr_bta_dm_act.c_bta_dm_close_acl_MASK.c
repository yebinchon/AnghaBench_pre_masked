
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int bd_addr; int transport; scalar_t__ remove_dev; } ;
struct TYPE_9__ {TYPE_4__ remove_acl; } ;
typedef TYPE_3__ tBTA_DM_MSG ;
typedef TYPE_4__ tBTA_DM_API_REMOVE_ACL ;
typedef size_t UINT8 ;
struct TYPE_8__ {size_t count; TYPE_1__* peer_device; } ;
struct TYPE_11__ {TYPE_2__ device_list; } ;
struct TYPE_7__ {int remove_dev_pending; int peer_bdaddr; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int ,int ) ;
 TYPE_6__ VAR_2 ;
 int FUNC_7 (int ,int ) ;

void FUNC_8(tBTA_DM_MSG *VAR_3)
{
    tBTA_DM_API_REMOVE_ACL *VAR_4 = &VAR_3->remove_acl;
    UINT8 VAR_5;

    FUNC_0("bta_dm_close_acl");

    if (FUNC_4(VAR_4->bd_addr, VAR_4->transport)) {
        for (VAR_5 = 0; VAR_5 < VAR_2.device_list.count; VAR_5 ++) {
            if (!FUNC_6( VAR_2.device_list.peer_device[VAR_5].peer_bdaddr, VAR_4->bd_addr)) {
                break;
            }
        }
        if (VAR_5 != VAR_2.device_list.count) {
            if (VAR_4->remove_dev) {
                VAR_2.device_list.peer_device[VAR_5].remove_dev_pending = VAR_1;
            }
        } else {
            FUNC_1("unknown device, remove ACL failed");
        }

        FUNC_7(VAR_4->bd_addr, VAR_4->transport);
    }

    else if (VAR_4->remove_dev) {
        if (!FUNC_5(VAR_4->bd_addr, VAR_4->transport)) {
            FUNC_1("delete device from security database failed.");
        }


        FUNC_2(0, VAR_4->bd_addr, VAR_0);

        FUNC_3(VAR_4->bd_addr, 0);

    }


}
