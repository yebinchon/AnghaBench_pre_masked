
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ UINT16 ;
struct TYPE_2__ {scalar_t__ controller_le_xmit_window; scalar_t__ num_lm_ble_bufs; int num_lm_acl_bufs; } ;


 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;

void FUNC_1 (UINT16 VAR_2)
{
    if (VAR_2 == 0) {
        VAR_2 = VAR_0;
        VAR_1.num_lm_acl_bufs -= VAR_0;
    }
    FUNC_0("num_lm_ble_bufs = %d",VAR_2);
    VAR_1.num_lm_ble_bufs = VAR_1.controller_le_xmit_window = VAR_2;
}
