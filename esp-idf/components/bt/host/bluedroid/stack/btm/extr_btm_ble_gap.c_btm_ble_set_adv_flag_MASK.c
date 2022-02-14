
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int* p_flags; } ;
typedef TYPE_3__ tBTM_BLE_LOCAL_ADV_DATA ;
typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_5__ {TYPE_3__ adv_data; } ;
struct TYPE_6__ {TYPE_1__ inq_var; } ;
struct TYPE_8__ {TYPE_2__ ble_ctr_cb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int*,int,int) ;
 TYPE_4__ VAR_4 ;

void FUNC_4(UINT16 VAR_5, UINT16 VAR_6)
{
    UINT8 VAR_7 = 0, VAR_8 = 0;
    tBTM_BLE_LOCAL_ADV_DATA *VAR_9 = &VAR_4.ble_ctr_cb.inq_var.adv_data;

    if (VAR_9->p_flags != ((void*)0)) {
        VAR_7 = VAR_8 = *(VAR_9->p_flags);
    }

    FUNC_3 (&VAR_7, VAR_5, VAR_6);

    FUNC_0("disc_mode %04x", VAR_6);

    if (VAR_6 & VAR_2) {
        VAR_7 &= ~VAR_1;
        VAR_7 |= VAR_3;
    } else if (VAR_6 & VAR_0) {
        VAR_7 |= VAR_1;
        VAR_7 &= ~VAR_3;
    } else {
        VAR_7 &= ~(VAR_3 | VAR_1);
    }

    if (VAR_7 != VAR_8) {
        FUNC_1("flag = 0x%x,old_flag = 0x%x", VAR_7, VAR_8);
        FUNC_2(VAR_7);
    }
}
