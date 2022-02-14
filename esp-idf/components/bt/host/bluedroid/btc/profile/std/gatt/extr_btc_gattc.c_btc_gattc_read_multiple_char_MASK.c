
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int handles; int num_attr; } ;
typedef TYPE_2__ tBTA_GATTC_MULTI ;
struct TYPE_6__ {int auth_req; int conn_id; int handles; int num_attr; } ;
struct TYPE_8__ {TYPE_1__ read_multiple; } ;
typedef TYPE_3__ btc_ble_gattc_args_t ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(btc_ble_gattc_args_t *VAR_1)
{
    tBTA_GATTC_MULTI VAR_2;
    VAR_2.num_attr = VAR_1->read_multiple.num_attr;
    FUNC_1(VAR_2.handles, VAR_1->read_multiple.handles, VAR_0);
    FUNC_0(VAR_1->read_multiple.conn_id, &VAR_2, VAR_1->read_multiple.auth_req);
}
