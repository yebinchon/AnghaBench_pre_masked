
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ cl_int ;
struct TYPE_11__ {TYPE_3__* priv; } ;
struct TYPE_9__ {int program; TYPE_1__* hwctx; } ;
struct TYPE_10__ {scalar_t__ kernel_name; int loaded; int kernel; TYPE_2__ ocf; int command_queue; int source_file; } ;
struct TYPE_8__ {int device_id; int context; } ;
typedef TYPE_3__ ProgramOpenCLContext ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_4__*,int ,char*,scalar_t__) ;
 int FUNC_2 (int ,int ,int ,scalar_t__*) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__*) ;
 int FUNC_4 (TYPE_4__*,int ) ;

__attribute__((used)) static int FUNC_5(AVFilterContext *VAR_3)
{
    ProgramOpenCLContext *VAR_4 = VAR_3->priv;
    cl_int VAR_5;
    int VAR_6;

    VAR_6 = FUNC_4(VAR_3, VAR_4->source_file);
    if (VAR_6 < 0)
        return VAR_6;

    VAR_4->command_queue = FUNC_2(VAR_4->ocf.hwctx->context,
                                              VAR_4->ocf.hwctx->device_id,
                                              0, &VAR_5);
    if (!VAR_4->command_queue) {
        FUNC_1(VAR_3, VAR_0, "Failed to create OpenCL "
               "command queue: %d.\n", VAR_5);
        return FUNC_0(VAR_2);
    }

    VAR_4->kernel = FUNC_3(VAR_4->ocf.program, VAR_4->kernel_name, &VAR_5);
    if (!VAR_4->kernel) {
        if (VAR_5 == VAR_1) {
            FUNC_1(VAR_3, VAR_0, "Kernel function '%s' not found in "
                   "program.\n", VAR_4->kernel_name);
        } else {
            FUNC_1(VAR_3, VAR_0, "Failed to create kernel: %d.\n", VAR_5);
        }
        return FUNC_0(VAR_2);
    }

    VAR_4->loaded = 1;
    return 0;
}
