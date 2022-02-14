
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int remote_bd_addr; int flag; int device_type; int inq_result_type; int ble_addr_type; int rssi; int dev_class; } ;
typedef TYPE_2__ tBTM_INQ_RESULTS ;
struct TYPE_11__ {void* appl_knows_rem_name; } ;
typedef TYPE_3__ tBTM_INQ_INFO ;
struct TYPE_9__ {void* remt_name_not_required; int * p_eir; int flag; int device_type; int inq_result_type; int ble_addr_type; int rssi; void* is_limited; int dev_class; int bd_addr; } ;
struct TYPE_12__ {TYPE_1__ inq_res; } ;
typedef TYPE_4__ tBTA_DM_SEARCH ;
typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_13__ {int (* p_search_cback ) (int ,TYPE_4__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 TYPE_3__* FUNC_1 (int ) ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_2 (int ,int ) ;
 TYPE_6__ VAR_5 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,TYPE_4__*) ;

__attribute__((used)) static void FUNC_5 (tBTM_INQ_RESULTS *VAR_6, UINT8 *VAR_7)
{

    tBTA_DM_SEARCH VAR_8;
    tBTM_INQ_INFO *VAR_9;
    UINT16 VAR_10;

    FUNC_2(VAR_8.inq_res.bd_addr, VAR_6->remote_bd_addr);
    FUNC_3(VAR_8.inq_res.dev_class, VAR_6->dev_class, VAR_2);
    FUNC_0(VAR_10, VAR_6->dev_class);
    VAR_8.inq_res.is_limited = (VAR_10 & VAR_1) ? VAR_4 : VAR_3;
    VAR_8.inq_res.rssi = VAR_6->rssi;


    VAR_8.inq_res.ble_addr_type = VAR_6->ble_addr_type;
    VAR_8.inq_res.inq_result_type = VAR_6->inq_result_type;
    VAR_8.inq_res.device_type = VAR_6->device_type;
    VAR_8.inq_res.flag = VAR_6->flag;



    VAR_8.inq_res.p_eir = VAR_7;

    if ((VAR_9 = FUNC_1(VAR_6->remote_bd_addr)) != ((void*)0)) {

        VAR_8.inq_res.remt_name_not_required = VAR_3;

    }

    if (VAR_5.p_search_cback) {
        VAR_5.p_search_cback(VAR_0, &VAR_8);
    }

    if (VAR_9) {


        if (VAR_8.inq_res.remt_name_not_required) {
            VAR_9->appl_knows_rem_name = VAR_4;
        }

    }


}
