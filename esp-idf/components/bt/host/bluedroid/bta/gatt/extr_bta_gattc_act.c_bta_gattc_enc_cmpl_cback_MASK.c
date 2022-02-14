
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int tGATT_IF ;
struct TYPE_8__ {int layer_specific; int event; } ;
struct TYPE_9__ {int remote_bda; int client_if; TYPE_1__ hdr; } ;
struct TYPE_10__ {TYPE_2__ enc_cmpl; } ;
typedef TYPE_3__ tBTA_GATTC_DATA ;
struct TYPE_11__ {int bta_conn_id; } ;
typedef TYPE_4__ tBTA_GATTC_CLCB ;
typedef int BD_ADDR ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 TYPE_4__* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(tGATT_IF VAR_2, BD_ADDR VAR_3)
{
    tBTA_GATTC_DATA *VAR_4;
    tBTA_GATTC_CLCB *VAR_5 = ((void*)0);

    if ((VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_1)) == ((void*)0)) {
        return;
    }
    FUNC_0("bta_gattc_enc_cmpl_cback: cif = %d", VAR_2);

    if ((VAR_4 = (tBTA_GATTC_DATA *) FUNC_6(sizeof(tBTA_GATTC_DATA))) != ((void*)0)) {
        FUNC_5(VAR_4, 0, sizeof(tBTA_GATTC_DATA));

        VAR_4->enc_cmpl.hdr.event = VAR_0;
        VAR_4->enc_cmpl.hdr.layer_specific = VAR_5->bta_conn_id;
        VAR_4->enc_cmpl.client_if = VAR_2;
        FUNC_1(VAR_4->enc_cmpl.remote_bda, VAR_3);

        FUNC_4(VAR_4);
    }
}
