
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT8 ;
struct TYPE_3__ {scalar_t__ adv_inst_max; } ;
struct TYPE_4__ {TYPE_1__ cmn_ble_vsc_cb; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__ VAR_1 ;

extern UINT8 FUNC_0(void)
{
    return VAR_1.cmn_ble_vsc_cb.adv_inst_max < VAR_0 ?
           VAR_1.cmn_ble_vsc_cb.adv_inst_max : VAR_0;
}
