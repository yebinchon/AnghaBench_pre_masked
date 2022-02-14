
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {void** p_flags; void** p_pad; void** ad_data; int data_mask; } ;
typedef TYPE_3__ tBTM_BLE_LOCAL_ADV_DATA ;
typedef void* UINT8 ;
struct TYPE_5__ {TYPE_3__ adv_data; } ;
struct TYPE_6__ {TYPE_1__ inq_var; } ;
struct TYPE_8__ {TYPE_2__ ble_ctr_cb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,void*) ;
 TYPE_4__ VAR_3 ;
 scalar_t__ FUNC_1 (void*,void**) ;
 int FUNC_2 (void**,int ,int) ;

__attribute__((used)) static void FUNC_3(UINT8 VAR_4)
{
    tBTM_BLE_LOCAL_ADV_DATA *VAR_5 = &VAR_3.ble_ctr_cb.inq_var.adv_data;
    UINT8 *VAR_6;

    FUNC_0 ("btm_ble_update_adv_flag new=0x%x", VAR_4);

    if (VAR_5->p_flags != ((void*)0)) {
        FUNC_0 ("btm_ble_update_adv_flag old=0x%x", *VAR_5->p_flags);
        *VAR_5->p_flags = VAR_4;
    } else {
        VAR_6 = (VAR_5->p_pad == ((void*)0)) ? VAR_5->ad_data : VAR_5->p_pad;


        if ((VAR_1 - (VAR_6 - VAR_5->ad_data)) < 3) {
            VAR_6 = VAR_5->p_pad = VAR_5->ad_data;
            FUNC_2(VAR_5->ad_data, 0, VAR_1);
        }

        *VAR_6++ = 2;
        *VAR_6++ = VAR_2;
        VAR_5->p_flags = VAR_6;
        *VAR_6++ = VAR_4;
        VAR_5->p_pad = VAR_6;
    }

    if (FUNC_1((UINT8)(VAR_5->p_pad - VAR_5->ad_data),
                                    VAR_5->ad_data)) {
        VAR_5->data_mask |= VAR_0;
    }

}
