
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {void* layer_specific; void* event; } ;
struct TYPE_8__ {TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_MSG ;
struct TYPE_9__ {int peer_bdaddr; scalar_t__ gatt_disc_active; int name_discover_done; int cancel_pending; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int VAR_4 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 TYPE_4__ VAR_5 ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (int) ;

void FUNC_8 (tBTA_DM_MSG *VAR_6)
{
    FUNC_3(VAR_6);
    tBTA_DM_MSG *VAR_7;

    if (FUNC_2()) {
        if (FUNC_0() != VAR_3) {
            FUNC_5(((void*)0));
            VAR_7 = (tBTA_DM_MSG *) FUNC_7(sizeof(tBTA_DM_MSG));
            if (VAR_7 != ((void*)0)) {
                VAR_7->hdr.event = VAR_2;
                VAR_7->hdr.layer_specific = VAR_0;
                FUNC_6(VAR_7);
            }
        } else {

            VAR_5.cancel_pending = VAR_4;
        }
    }

    else if (!VAR_5.name_discover_done) {
        FUNC_1();

        if ((VAR_7 = (tBTA_DM_MSG *) FUNC_7(sizeof(tBTA_DM_MSG))) != ((void*)0)) {
            VAR_7->hdr.event = VAR_2;
            VAR_7->hdr.layer_specific = VAR_0;
            FUNC_6(VAR_7);
        }

    } else {
        if ((VAR_7 = (tBTA_DM_MSG *) FUNC_7(sizeof(tBTA_DM_MSG))) != ((void*)0)) {
            VAR_7->hdr.event = VAR_1;
            VAR_7->hdr.layer_specific = VAR_0;
            FUNC_6(VAR_7);
        }
    }


    if (VAR_5.gatt_disc_active) {
        FUNC_4(VAR_5.peer_bdaddr);
    }

}
