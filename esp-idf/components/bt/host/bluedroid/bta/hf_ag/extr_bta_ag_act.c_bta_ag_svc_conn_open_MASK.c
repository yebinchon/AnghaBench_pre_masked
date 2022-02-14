
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ call_ind; scalar_t__ callsetup_ind; int peer_addr; int app_id; int peer_codecs; int peer_features; int act_timer; scalar_t__ bia_masked_out; scalar_t__ svc_conn; } ;
typedef TYPE_2__ tBTA_AG_SCB ;
typedef int tBTA_AG_DATA ;
struct TYPE_7__ {int app_id; int handle; } ;
struct TYPE_9__ {int peer_codec; int bd_addr; int peer_feat; TYPE_1__ hdr; } ;
typedef TYPE_3__ tBTA_AG_CONN ;
typedef int tBTA_AG ;
struct TYPE_10__ {int (* p_cback ) (int ,int *) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 TYPE_6__ VAR_5 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;

void FUNC_6(tBTA_AG_SCB *VAR_6, tBTA_AG_DATA *VAR_7)
{
    tBTA_AG_CONN VAR_8;
    FUNC_0(VAR_7);

    if (!VAR_6->svc_conn) {

        VAR_6->svc_conn = VAR_4;

        VAR_6->bia_masked_out = 0;

        FUNC_4(&VAR_6->act_timer);

        VAR_8.hdr.handle = FUNC_2(VAR_6);
        VAR_8.hdr.app_id = VAR_6->app_id;
        VAR_8.peer_feat = VAR_6->peer_features;
        FUNC_1(VAR_8.bd_addr, VAR_6->peer_addr);

        VAR_8.peer_codec = VAR_6->peer_codecs;

        if ((VAR_6->call_ind != VAR_1) ||
            (VAR_6->callsetup_ind != VAR_0)) {
            FUNC_3(VAR_3, VAR_6->app_id, VAR_6->peer_addr);
        }
        (*VAR_5.p_cback)(VAR_2, (tBTA_AG *) &VAR_8);
    }
}
