
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int cl_int ;
struct TYPE_8__ {int program; TYPE_1__* hwctx; } ;
struct TYPE_9__ {int initialised; scalar_t__ kernel; scalar_t__ command_queue; TYPE_2__ ocf; } ;
typedef TYPE_3__ TransposeOpenCLContext ;
struct TYPE_10__ {TYPE_3__* priv; } ;
struct TYPE_7__ {int device_id; int context; } ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ,int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,char*,int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_4__*,int *,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_7(AVFilterContext *VAR_2)
{
    TransposeOpenCLContext *VAR_3 = VAR_2->priv;
    cl_int VAR_4;
    int VAR_5;

    VAR_5 = FUNC_6(VAR_2, &VAR_1, 1);
    if (VAR_5 < 0)
        goto fail;

    VAR_3->command_queue = FUNC_2(VAR_3->ocf.hwctx->context,
                                              VAR_3->ocf.hwctx->device_id,
                                              0, &VAR_4);
    FUNC_1(FUNC_0(VAR_0), "Failed to create OpenCL "
                     "command queue %d.\n", VAR_4);

    VAR_3->kernel = FUNC_3(VAR_3->ocf.program, "transpose", &VAR_4);
    FUNC_1(FUNC_0(VAR_0), "Failed to create kernel %d.\n", VAR_4);


    VAR_3->initialised = 1;
    return 0;

fail:
    if (VAR_3->command_queue)
        FUNC_4(VAR_3->command_queue);
    if (VAR_3->kernel)
        FUNC_5(VAR_3->kernel);
    return VAR_5;
}
