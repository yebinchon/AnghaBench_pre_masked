
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int handle; TYPE_1__* svc_def; } ;
struct ble_gatt_register_ctxt {scalar_t__ op; TYPE_2__ svc; } ;
struct TYPE_3__ {int uuid; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_2(struct ble_gatt_register_ctxt *VAR_5,
                      void *VAR_6 )
{
    if (VAR_5->op == VAR_0) {
        if (FUNC_1(VAR_5->svc.svc_def->uuid, FUNC_0(VAR_2)) == 0) {
            VAR_4 = VAR_5->svc.handle;
        } else if (FUNC_1(VAR_5->svc.svc_def->uuid, FUNC_0(VAR_1)) == 0) {
            VAR_3 = VAR_5->svc.handle;
        }
    }
}
