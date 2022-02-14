
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tBTM_STATUS ;
struct TYPE_8__ {scalar_t__ filter_support; } ;
typedef TYPE_2__ tBTM_BLE_VSC_CB ;
typedef int tBTM_BLE_REF_VALUE ;
typedef int tBTA_STATUS ;
struct TYPE_7__ {scalar_t__ ref_value; int (* p_filt_status_cback ) (int ,scalar_t__,int ) ;int action; } ;
struct TYPE_9__ {TYPE_1__ ble_enable_scan_filt; } ;
typedef TYPE_3__ tBTA_DM_MSG ;
struct TYPE_10__ {int (* p_scan_filt_status_cback ) (int ,scalar_t__,int ) ;} ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int (*) (int ,scalar_t__,int ),int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_5__ VAR_4 ;
 int FUNC_3 (int ,scalar_t__,int ) ;

void FUNC_4(tBTA_DM_MSG *VAR_5)
{
    tBTM_STATUS VAR_6 = VAR_3;
    tBTA_STATUS VAR_7 = VAR_1;

    tBTM_BLE_VSC_CB VAR_8;
    FUNC_0("bta_dm_enable_scan_filter");
    FUNC_2(&VAR_8);

    if (0 != VAR_8.filter_support) {
        if ((VAR_6 = FUNC_1(VAR_5->ble_enable_scan_filt.action,
                  VAR_5->ble_enable_scan_filt.p_filt_status_cback,
                  (tBTM_BLE_REF_VALUE)VAR_5->ble_enable_scan_filt.ref_value)) == VAR_2) {
            VAR_4.p_scan_filt_status_cback = VAR_5->ble_enable_scan_filt.p_filt_status_cback;
        }
        return;
    }

    if (VAR_5->ble_enable_scan_filt.p_filt_status_cback) {
        VAR_5->ble_enable_scan_filt.p_filt_status_cback (VAR_0,
                VAR_5->ble_enable_scan_filt.ref_value, VAR_7);
    }

}
