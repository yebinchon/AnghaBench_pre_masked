
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int tBTA_SERVICE_MASK ;
struct TYPE_14__ {scalar_t__ dealloc; int reg_services; scalar_t__ conn_handle; int peer_addr; int app_id; scalar_t__* serv_handle; int cn_timer; int act_timer; int at_cb; int hsp_version; scalar_t__ svc_conn; int post_sco; scalar_t__ role; int codec_msbc_settings; scalar_t__ codec_fallback; scalar_t__ codec_updated; void* sco_codec; void* peer_codecs; scalar_t__ peer_features; scalar_t__ conn_service; } ;
typedef TYPE_3__ tBTA_AG_SCB ;
typedef int tBTA_AG_DATA ;
struct TYPE_12__ {int app_id; int handle; } ;
struct TYPE_15__ {int bd_addr; TYPE_1__ hdr; } ;
typedef TYPE_4__ tBTA_AG_CLOSE ;
typedef int tBTA_AG ;
struct TYPE_13__ {scalar_t__ svc_conn; scalar_t__ in_use; } ;
struct TYPE_11__ {TYPE_2__* scb; int (* p_cback ) (int ,int *) ;} ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int VAR_10 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 TYPE_10__ VAR_11 ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_3__*,int *) ;
 int FUNC_8 (TYPE_3__*,int) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int *) ;

void FUNC_13(tBTA_AG_SCB *VAR_12, tBTA_AG_DATA *VAR_13)
{
    tBTA_AG_CLOSE VAR_14;
    tBTA_SERVICE_MASK VAR_15;
    int VAR_16, VAR_17 = 0;
    FUNC_1(VAR_13);

    VAR_12->conn_service = 0;
    VAR_12->peer_features = 0;

    VAR_12->peer_codecs = VAR_1;
    VAR_12->sco_codec = VAR_1;

    VAR_12->codec_updated = VAR_8;
    VAR_12->codec_fallback = VAR_8;
    VAR_12->codec_msbc_settings = VAR_5;

    VAR_12->role = 0;
    VAR_12->post_sco = VAR_4;
    VAR_12->svc_conn = VAR_8;
    VAR_12->hsp_version = VAR_9;
    FUNC_3(&VAR_12->at_cb);

    FUNC_11(&VAR_12->act_timer);

    FUNC_11(&VAR_12->cn_timer);

    VAR_14.hdr.handle = FUNC_5(VAR_12);
    VAR_14.hdr.app_id = VAR_12->app_id;
    FUNC_2(VAR_14.bd_addr, VAR_12->peer_addr);

    FUNC_9(VAR_7, VAR_12->app_id, VAR_12->peer_addr);



    FUNC_6();

    (*VAR_11.p_cback)(VAR_0, (tBTA_AG *) &VAR_14);


    if (VAR_12->dealloc == VAR_8) {

        FUNC_2(VAR_12->peer_addr, VAR_10);


        VAR_15 = VAR_12->reg_services;
        for (VAR_16 = 0; VAR_16 < VAR_2 && VAR_15 != 0; VAR_16++) {
            if (VAR_12->serv_handle[VAR_16]) {
                VAR_15 &= ~((tBTA_SERVICE_MASK)1 << (VAR_6 + VAR_16));
            }
        }
        FUNC_8(VAR_12, VAR_15);
        VAR_12->conn_handle = 0;

        FUNC_7(VAR_12, ((void*)0));

        for (VAR_16 = 0; VAR_16 < VAR_3; VAR_16++) {
            if (VAR_11.scb[VAR_16].in_use && VAR_11.scb[VAR_16].svc_conn) {
                VAR_17++;
            }
        }
        if (!VAR_17) {
            FUNC_10(VAR_7, VAR_12->app_id, VAR_12->peer_addr);
        }
    } else {

        FUNC_0(VAR_12->conn_handle);
        FUNC_4(VAR_12);
    }
}
