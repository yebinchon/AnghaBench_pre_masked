
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int cl_int ;
struct TYPE_12__ {TYPE_4__* priv; } ;
struct TYPE_10__ {float* s; } ;
struct TYPE_9__ {int program; TYPE_1__* hwctx; } ;
struct TYPE_11__ {double blend; int initialized; void* kernel_colorkey; scalar_t__ command_queue; scalar_t__* colorkey_rgba; TYPE_3__ colorkey_rgba_float; TYPE_2__ ocf; } ;
struct TYPE_8__ {int device_id; int context; } ;
typedef TYPE_4__ ColorkeyOpenCLContext ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ,int ,int ,int *) ;
 void* FUNC_3 (int ,char*,int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (TYPE_5__*,int *,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_7(AVFilterContext *VAR_2)
{
    ColorkeyOpenCLContext *VAR_3 = VAR_2->priv;
    cl_int VAR_4;
    int VAR_5;

    VAR_5 = FUNC_6(VAR_2, &VAR_1, 1);
    if (VAR_5 < 0)
        goto fail;

    VAR_3->command_queue = FUNC_2(
        VAR_3->ocf.hwctx->context,
        VAR_3->ocf.hwctx->device_id,
        0,
        &VAR_4
    );

    FUNC_1(FUNC_0(VAR_0), "Failed to create OpenCL command queue %d.\n", VAR_4);

    if (VAR_3->blend > 0.0001) {
        VAR_3->kernel_colorkey = FUNC_3(VAR_3->ocf.program, "colorkey_blend", &VAR_4);
        FUNC_1(FUNC_0(VAR_0), "Failed to create colorkey_blend kernel: %d.\n", VAR_4);
    } else {
        VAR_3->kernel_colorkey = FUNC_3(VAR_3->ocf.program, "colorkey", &VAR_4);
        FUNC_1(FUNC_0(VAR_0), "Failed to create colorkey kernel: %d.\n", VAR_4);
    }

    for (int VAR_6 = 0; VAR_6 < 4; ++VAR_6) {
        VAR_3->colorkey_rgba_float.s[VAR_6] = (float)VAR_3->colorkey_rgba[VAR_6] / 255.0;
    }

    VAR_3->initialized = 1;
    return 0;

fail:
    if (VAR_3->command_queue)
        FUNC_4(VAR_3->command_queue);
    if (VAR_3->kernel_colorkey)
        FUNC_5(VAR_3->kernel_colorkey);
    return VAR_5;
}
