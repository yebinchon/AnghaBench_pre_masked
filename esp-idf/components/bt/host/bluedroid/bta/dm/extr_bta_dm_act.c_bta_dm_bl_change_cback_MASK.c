
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int p_bda; int handle; int transport; } ;
struct TYPE_12__ {int p_bda; int hci_status; int new_role; } ;
struct TYPE_11__ {int busy_level_flags; int busy_level; } ;
struct TYPE_10__ {int handle; int transport; int p_bda; } ;
struct TYPE_15__ {int event; TYPE_4__ conn; TYPE_3__ role_chg; TYPE_2__ update; TYPE_1__ discn; } ;
typedef TYPE_6__ tBTM_BL_EVENT_DATA ;
struct TYPE_14__ {int event; } ;
struct TYPE_16__ {int event; TYPE_5__ hdr; int bd_addr; int hci_status; int new_role; int busy_level_flags; int busy_level; int handle; int transport; int is_new; } ;
typedef TYPE_7__ tBTA_DM_ACL_CHANGE ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_7__*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3 (tBTM_BL_EVENT_DATA *VAR_3)
{
    tBTA_DM_ACL_CHANGE *VAR_4;

    if ((VAR_4 = (tBTA_DM_ACL_CHANGE *) FUNC_2(sizeof(tBTA_DM_ACL_CHANGE))) != ((void*)0)) {
        VAR_4->event = VAR_3->event;
        VAR_4->is_new = VAR_1;

        switch (VAR_4->event) {
        case 131:
            VAR_4->is_new = VAR_2;
            FUNC_0(VAR_4->bd_addr, VAR_3->conn.p_bda);

            VAR_4->transport = VAR_3->conn.transport;
            VAR_4->handle = VAR_3->conn.handle;

            break;
        case 130:
            FUNC_0(VAR_4->bd_addr, VAR_3->discn.p_bda);

            VAR_4->transport = VAR_3->discn.transport;
            VAR_4->handle = VAR_3->discn.handle;

            break;
        case 128:
            VAR_4->busy_level = VAR_3->update.busy_level;
            VAR_4->busy_level_flags = VAR_3->update.busy_level_flags;
            break;
        case 129:
            VAR_4->new_role = VAR_3->role_chg.new_role;
            VAR_4->hci_status = VAR_3->role_chg.hci_status;
            FUNC_0(VAR_4->bd_addr, VAR_3->role_chg.p_bda);
            break;
        case 132:
            FUNC_0(VAR_4->bd_addr, VAR_3->conn.p_bda);
            break;
        }

        VAR_4->hdr.event = VAR_0;
        FUNC_1(VAR_4);

    }

}
