
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {int handle; TYPE_5__* dsc_def; } ;
struct TYPE_11__ {TYPE_3__* chr_def; int val_handle; int def_handle; } ;
struct TYPE_9__ {TYPE_1__* svc_def; int handle; } ;
struct ble_gatt_register_ctxt {int op; TYPE_6__ dsc; TYPE_4__ chr; TYPE_2__ svc; } ;
struct TYPE_14__ {int type; } ;
struct TYPE_12__ {TYPE_7__* uuid; } ;
struct TYPE_10__ {TYPE_7__* uuid; } ;
struct TYPE_8__ {TYPE_7__* uuid; } ;





 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ,...) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_7__*,char*) ;

void
FUNC_3(struct ble_gatt_register_ctxt *VAR_2, void *VAR_3)
{
    char VAR_4[VAR_0];

    switch (VAR_2->op) {
    case 128:
        FUNC_0(VAR_1, "registering service %s with handle=%d TYPE =%d",
                 FUNC_2(VAR_2->svc.svc_def->uuid, VAR_4),
                 VAR_2->svc.handle, VAR_2->svc.svc_def->uuid->type);
        break;

    case 130:
        FUNC_0(VAR_1, "registering characteristic %s with "
                 "def_handle=%d val_handle=%d , TYPE = %d",
                 FUNC_2(VAR_2->chr.chr_def->uuid, VAR_4),
                 VAR_2->chr.def_handle,
                 VAR_2->chr.val_handle, VAR_2->chr.chr_def->uuid->type);
        break;

    case 129:
        FUNC_0(VAR_1, "registering descriptor %s with handle=%d",
                 FUNC_2(VAR_2->dsc.dsc_def->uuid, VAR_4),
                 VAR_2->dsc.handle);
        break;

    default:
        FUNC_1(0);
        break;
    }
}
