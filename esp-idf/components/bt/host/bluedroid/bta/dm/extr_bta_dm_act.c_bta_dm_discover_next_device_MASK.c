
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int layer_specific; int event; } ;
struct TYPE_10__ {TYPE_2__ hdr; } ;
typedef TYPE_3__ tBTA_DM_MSG ;
struct TYPE_8__ {int remote_bd_addr; } ;
struct TYPE_12__ {TYPE_1__ results; } ;
struct TYPE_11__ {scalar_t__ services; TYPE_6__* p_btm_inq_info; scalar_t__* peer_name; int name_discover_done; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__* FUNC_1 (TYPE_6__*) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 TYPE_5__ VAR_3 ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(void)
{

    tBTA_DM_MSG *VAR_4;

    FUNC_0("bta_dm_discover_next_device");


    if ((VAR_3.p_btm_inq_info = FUNC_1(VAR_3.p_btm_inq_info)) != ((void*)0)) {
        VAR_3.name_discover_done = VAR_2;
        VAR_3.peer_name[0] = 0;

        FUNC_2(VAR_3.p_btm_inq_info->results.remote_bd_addr);

    } else {

        VAR_3.services = 0;

        if ((VAR_4 = (tBTA_DM_MSG *) FUNC_4(sizeof(tBTA_DM_MSG))) != ((void*)0)) {
            VAR_4->hdr.event = VAR_1;
            VAR_4->hdr.layer_specific = VAR_0;
            FUNC_3(VAR_4);
        }
    }
}
