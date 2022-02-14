
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tBTA_GATTC_RCB ;
struct TYPE_5__ {int layer_specific; } ;
struct TYPE_6__ {int conn_params; TYPE_1__ hdr; int remote_bda; } ;
struct TYPE_7__ {TYPE_2__ int_conn; } ;
typedef TYPE_3__ tBTA_GATTC_DATA ;


 int FUNC_0 (int *,int ,int ,int ) ;

void FUNC_1(tBTA_GATTC_RCB *VAR_0, tBTA_GATTC_DATA *VAR_1)
{
    if (VAR_0) {
        FUNC_0(VAR_0,
                                     VAR_1->int_conn.remote_bda,
                                     VAR_1->int_conn.hdr.layer_specific, VAR_1->int_conn.conn_params);

    }
}
