
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT8 ;
struct TYPE_3__ {int test_mac; int enable_test_mac_val; } ;
struct TYPE_4__ {TYPE_1__ devcb; } ;
typedef int BOOLEAN ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (int ,int *,int ) ;

void FUNC_2(BOOLEAN VAR_2, UINT8 *VAR_3 )
{
    FUNC_0 ("btm_ble_set_test_mac_value enable=%d", VAR_2);
    VAR_1.devcb.enable_test_mac_val = VAR_2;
    FUNC_1(VAR_1.devcb.test_mac, VAR_3, VAR_0);
}
