
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tBTA_HF_CLIENT_DATA ;
struct TYPE_7__ {int chld_feat; int peer_feat; } ;
typedef TYPE_2__ tBTA_HF_CLIENT_CONN ;
typedef int evt ;
struct TYPE_6__ {int chld_features; int peer_features; scalar_t__ svc_conn; } ;
struct TYPE_8__ {int (* p_cback ) (int ,TYPE_2__*) ;TYPE_1__ scb; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 TYPE_5__ VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (int ,TYPE_2__*) ;

void FUNC_3(tBTA_HF_CLIENT_DATA *VAR_3)
{
    tBTA_HF_CLIENT_CONN VAR_4;
    FUNC_0(VAR_3);

    FUNC_1(&VAR_4, 0, sizeof(VAR_4));

    if (!VAR_2.scb.svc_conn) {

        VAR_2.scb.svc_conn = VAR_1;


        VAR_4.peer_feat = VAR_2.scb.peer_features;
        VAR_4.chld_feat = VAR_2.scb.chld_features;

        (*VAR_2.p_cback)(VAR_0, &VAR_4);
    }
}
