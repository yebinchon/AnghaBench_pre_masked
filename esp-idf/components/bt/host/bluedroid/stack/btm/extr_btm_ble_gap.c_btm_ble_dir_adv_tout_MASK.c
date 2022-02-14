
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int directed_conn; int adv_mode; } ;
struct TYPE_5__ {TYPE_1__ inq_var; } ;
struct TYPE_6__ {TYPE_2__ ble_ctr_cb; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;

void FUNC_0(void)
{
    VAR_2.ble_ctr_cb.inq_var.adv_mode = VAR_0;


    VAR_2.ble_ctr_cb.inq_var.directed_conn = VAR_1;
}
