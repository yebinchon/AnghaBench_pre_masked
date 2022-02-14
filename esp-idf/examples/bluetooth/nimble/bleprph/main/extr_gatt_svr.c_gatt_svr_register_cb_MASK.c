
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int handle; TYPE_3__* dsc_def; } ;
struct TYPE_8__ {int val_handle; int def_handle; TYPE_1__* chr_def; } ;
struct TYPE_12__ {int handle; TYPE_5__* svc_def; } ;
struct ble_gatt_register_ctxt {int op; TYPE_4__ dsc; TYPE_2__ chr; TYPE_6__ svc; } ;
struct TYPE_11__ {int uuid; } ;
struct TYPE_9__ {int uuid; } ;
struct TYPE_7__ {int uuid; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;

void
FUNC_3(struct ble_gatt_register_ctxt *VAR_2, void *VAR_3)
{
    char VAR_4[VAR_0];

    switch (VAR_2->op) {
    case 128:
        FUNC_0(VAR_1, "registered service %s with handle=%d\n",
                    FUNC_2(VAR_2->svc.svc_def->uuid, VAR_4),
                    VAR_2->svc.handle);
        break;

    case 130:
        FUNC_0(VAR_1, "registering characteristic %s with "
                    "def_handle=%d val_handle=%d\n",
                    FUNC_2(VAR_2->chr.chr_def->uuid, VAR_4),
                    VAR_2->chr.def_handle,
                    VAR_2->chr.val_handle);
        break;

    case 129:
        FUNC_0(VAR_1, "registering descriptor %s with handle=%d\n",
                    FUNC_2(VAR_2->dsc.dsc_def->uuid, VAR_4),
                    VAR_2->dsc.handle);
        break;

    default:
        FUNC_1(0);
        break;
    }
}
