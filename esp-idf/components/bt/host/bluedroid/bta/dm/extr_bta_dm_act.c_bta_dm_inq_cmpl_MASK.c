
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_13__ {int num_resps; } ;
struct TYPE_17__ {TYPE_1__ inq_cmpl; } ;
typedef TYPE_5__ tBTA_DM_SEARCH ;
struct TYPE_16__ {int layer_specific; int event; } ;
struct TYPE_14__ {int num; } ;
struct TYPE_18__ {TYPE_4__ hdr; TYPE_2__ inq_cmpl; } ;
typedef TYPE_6__ tBTA_DM_MSG ;
struct TYPE_19__ {scalar_t__ services; TYPE_11__* p_btm_inq_info; scalar_t__* peer_name; int name_discover_done; int (* p_search_cback ) (int ,TYPE_5__*) ;} ;
struct TYPE_15__ {int remote_bd_addr; } ;
struct TYPE_12__ {TYPE_3__ results; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_11__* FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 TYPE_9__ VAR_4 ;
 int FUNC_3 (TYPE_6__*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ,TYPE_5__*) ;

void FUNC_6 (tBTA_DM_MSG *VAR_5)
{
    tBTA_DM_MSG *VAR_6;
    tBTA_DM_SEARCH VAR_7;

    FUNC_0("bta_dm_inq_cmpl");

    VAR_7.inq_cmpl.num_resps = VAR_5->inq_cmpl.num;
    VAR_4.p_search_cback(VAR_1, &VAR_7);

    if ((VAR_4.p_btm_inq_info = FUNC_1()) != ((void*)0)) {

        VAR_4.name_discover_done = VAR_3;
        VAR_4.peer_name[0] = 0;

        FUNC_2(VAR_4.p_btm_inq_info->results.remote_bd_addr);

    } else {

        VAR_4.services = 0;

        if ((VAR_6 = (tBTA_DM_MSG *) FUNC_4(sizeof(tBTA_DM_MSG))) != ((void*)0)) {
            VAR_6->hdr.event = VAR_2;
            VAR_6->hdr.layer_specific = VAR_0;
            FUNC_3(VAR_6);
        }
    }
}
