
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int uu; int len; } ;
typedef TYPE_2__ tSDP_UUID ;
struct TYPE_10__ {int len; int uuid; } ;
typedef TYPE_3__ esp_bt_uuid_t ;
struct TYPE_12__ {int address; } ;
struct TYPE_8__ {TYPE_5__ bda; TYPE_3__ uuid; } ;
struct TYPE_11__ {TYPE_1__ get_rmt_srv_rcd; } ;
typedef TYPE_4__ btc_gap_bt_args_t ;
typedef TYPE_5__ bt_bdaddr_t ;


 int FUNC_0 (int ,TYPE_2__*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,int ) ;

__attribute__((used)) static void FUNC_2(btc_gap_bt_args_t *VAR_2)
{
    esp_bt_uuid_t *VAR_3 = &VAR_2->get_rmt_srv_rcd.uuid;
    bt_bdaddr_t *VAR_4 = &VAR_2->get_rmt_srv_rcd.bda;

    tSDP_UUID VAR_5;

    VAR_5.len = VAR_3->len;
    FUNC_1(&VAR_5.uu, &VAR_3->uuid, VAR_3->len);

    FUNC_0(VAR_4->address, &VAR_5,
                       VAR_1, VAR_0);
}
