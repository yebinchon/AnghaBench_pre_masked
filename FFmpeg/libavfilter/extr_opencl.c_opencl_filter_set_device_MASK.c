
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ data; } ;
struct TYPE_9__ {TYPE_1__* priv; } ;
struct TYPE_8__ {int hwctx; } ;
struct TYPE_7__ {TYPE_2__* device; int hwctx; TYPE_5__* device_ref; } ;
typedef TYPE_1__ OpenCLFilterContext ;
typedef TYPE_2__ AVHWDeviceContext ;
typedef TYPE_3__ AVFilterContext ;
typedef int AVBufferRef ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_5__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_5__**) ;

__attribute__((used)) static int FUNC_3(AVFilterContext *VAR_1,
                                    AVBufferRef *VAR_2)
{
    OpenCLFilterContext *VAR_3 = VAR_1->priv;

    FUNC_2(&VAR_3->device_ref);

    VAR_3->device_ref = FUNC_1(VAR_2);
    if (!VAR_3->device_ref)
        return FUNC_0(VAR_0);

    VAR_3->device = (AVHWDeviceContext*)VAR_3->device_ref->data;
    VAR_3->hwctx = VAR_3->device->hwctx;

    return 0;
}
