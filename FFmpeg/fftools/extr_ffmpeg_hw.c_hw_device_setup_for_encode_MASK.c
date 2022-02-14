
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int device_ref; } ;
struct TYPE_7__ {TYPE_1__* enc_ctx; int enc; } ;
struct TYPE_6__ {int hw_device_ctx; } ;
typedef TYPE_2__ OutputStream ;
typedef TYPE_3__ HWDevice ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (int ) ;

int FUNC_3(OutputStream *VAR_1)
{
    HWDevice *VAR_2;

    VAR_2 = FUNC_2(VAR_1->enc);
    if (VAR_2) {
        VAR_1->enc_ctx->hw_device_ctx = FUNC_1(VAR_2->device_ref);
        if (!VAR_1->enc_ctx->hw_device_ctx)
            return FUNC_0(VAR_0);
        return 0;
    } else {

        return 0;
    }
}
