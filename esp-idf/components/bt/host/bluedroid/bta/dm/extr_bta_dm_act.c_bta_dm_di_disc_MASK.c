
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int tSDP_DISCOVERY_DB ;
struct TYPE_9__ {scalar_t__ offset; int layer_specific; int event; } ;
struct TYPE_8__ {int len; int p_sdp_db; int bd_addr; int p_cback; } ;
struct TYPE_10__ {TYPE_2__ hdr; TYPE_1__ di_disc; } ;
typedef TYPE_3__ tBTA_DM_MSG ;
typedef scalar_t__ UINT16 ;
struct TYPE_12__ {int p_di_db; } ;
struct TYPE_11__ {int peer_bdaddr; int * p_sdp_db; int p_search_cback; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ,int ) ;
 TYPE_7__ VAR_6 ;
 int VAR_7 ;
 TYPE_5__ VAR_8 ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (int) ;

void FUNC_5 (tBTA_DM_MSG *VAR_9)
{
    UINT16 VAR_10 = VAR_3;
    tBTA_DM_MSG *VAR_11;

    VAR_8.p_search_cback = VAR_9->di_disc.p_cback;
    FUNC_2(VAR_8.peer_bdaddr, VAR_9->di_disc.bd_addr);
    VAR_6.p_di_db = VAR_9->di_disc.p_sdp_db;

    if ((VAR_8.p_sdp_db = (tSDP_DISCOVERY_DB *)FUNC_4(VAR_1)) != ((void*)0)) {
        if ( FUNC_1(VAR_8.peer_bdaddr, VAR_9->di_disc.p_sdp_db,
                            VAR_9->di_disc.len, VAR_7) == VAR_5) {
            VAR_10 = VAR_4;
        }
    } else {
        FUNC_0("No buffer to start DI discovery");
    }

    if ( VAR_10 == VAR_3 &&
            (VAR_11 = (tBTA_DM_MSG *) FUNC_4(sizeof(tBTA_DM_MSG))) != ((void*)0)) {
        VAR_11->hdr.event = VAR_2;
        VAR_11->hdr.layer_specific = VAR_0;
        VAR_9->hdr.offset = VAR_10;
        FUNC_3(VAR_11);
    }
}
