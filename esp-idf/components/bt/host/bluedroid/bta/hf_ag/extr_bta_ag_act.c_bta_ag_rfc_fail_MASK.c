
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int reg_services; int peer_addr; int hsp_version; int svc_conn; scalar_t__ role; void* sco_codec; void* peer_codecs; scalar_t__ peer_features; scalar_t__ conn_service; scalar_t__ conn_handle; } ;
typedef TYPE_1__ tBTA_AG_SCB ;
typedef int tBTA_AG_DATA ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*,int *,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;

void FUNC_4(tBTA_AG_SCB *VAR_5, tBTA_AG_DATA *VAR_6)
{
    FUNC_0(VAR_6);

    VAR_5->conn_handle = 0;
    VAR_5->conn_service = 0;
    VAR_5->peer_features = 0;

    VAR_5->peer_codecs = VAR_0;
    VAR_5->sco_codec = VAR_0;

    VAR_5->role = 0;
    VAR_5->svc_conn = VAR_2;
    VAR_5->hsp_version = VAR_3;

    FUNC_1(VAR_5->peer_addr, VAR_4);

    FUNC_3(VAR_5, VAR_5->reg_services);

    FUNC_2(VAR_5, ((void*)0), VAR_1);
}
