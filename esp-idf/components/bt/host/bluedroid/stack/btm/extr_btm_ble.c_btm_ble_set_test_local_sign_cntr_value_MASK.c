
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_3__ {int test_local_sign_cntr; int enable_test_local_sign_cntr; } ;
struct TYPE_4__ {TYPE_1__ devcb; } ;
typedef int BOOLEAN ;


 int FUNC_0 (char*,int ,int ) ;
 TYPE_2__ VAR_0 ;

void FUNC_1(BOOLEAN VAR_1, UINT32 VAR_2 )
{
    FUNC_0 ("btm_ble_set_test_local_sign_cntr_value enable=%d local_sign_cntr=%d",
                     VAR_1, VAR_2);
    VAR_0.devcb.enable_test_local_sign_cntr = VAR_1;
    VAR_0.devcb.test_local_sign_cntr = VAR_2;
}
