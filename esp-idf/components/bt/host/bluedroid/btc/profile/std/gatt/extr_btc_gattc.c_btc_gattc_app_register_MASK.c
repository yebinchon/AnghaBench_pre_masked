
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int uuid16; } ;
struct TYPE_9__ {int len; TYPE_1__ uu; } ;
typedef TYPE_3__ tBT_UUID ;
struct TYPE_8__ {int app_id; } ;
struct TYPE_10__ {TYPE_2__ app_reg; } ;
typedef TYPE_4__ btc_ble_gattc_args_t ;


 int FUNC_0 (TYPE_3__*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(btc_ble_gattc_args_t *VAR_1)
{
    tBT_UUID VAR_2;
    VAR_2.len = 2;
    VAR_2.uu.uuid16 = VAR_1->app_reg.app_id;
    FUNC_0(&VAR_2, VAR_0);
}
