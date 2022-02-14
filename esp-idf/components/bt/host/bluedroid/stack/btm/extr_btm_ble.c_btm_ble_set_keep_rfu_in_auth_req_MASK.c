
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int keep_rfu_in_auth_req; } ;
struct TYPE_4__ {TYPE_1__ devcb; } ;
typedef int BOOLEAN ;


 int FUNC_0 (char*,int ) ;
 TYPE_2__ VAR_0 ;

void FUNC_1(BOOLEAN VAR_1)
{
    FUNC_0 ("btm_ble_set_keep_rfu_in_auth_req keep_rfus=%d", VAR_1);
    VAR_0.devcb.keep_rfu_in_auth_req = VAR_1;
}
