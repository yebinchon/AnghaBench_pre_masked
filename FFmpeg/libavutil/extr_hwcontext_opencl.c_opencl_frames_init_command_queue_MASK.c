
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ cl_int ;
struct TYPE_16__ {TYPE_3__* internal; TYPE_2__* device_ctx; TYPE_6__* hwctx; } ;
struct TYPE_15__ {scalar_t__ command_queue; } ;
struct TYPE_14__ {scalar_t__ command_queue; } ;
struct TYPE_13__ {scalar_t__ command_queue; } ;
struct TYPE_12__ {TYPE_4__* priv; } ;
struct TYPE_11__ {TYPE_1__* internal; } ;
struct TYPE_10__ {TYPE_5__* priv; } ;
typedef TYPE_4__ OpenCLFramesContext ;
typedef TYPE_5__ OpenCLDeviceContext ;
typedef TYPE_6__ AVOpenCLFramesContext ;
typedef TYPE_7__ AVHWFramesContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_7__*,int ,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(AVHWFramesContext *VAR_3)
{
    AVOpenCLFramesContext *VAR_4 = VAR_3->hwctx;
    OpenCLDeviceContext *VAR_5 = VAR_3->device_ctx->internal->priv;
    OpenCLFramesContext *VAR_6 = VAR_3->internal->priv;
    cl_int VAR_7;

    VAR_6->command_queue = VAR_4->command_queue ? VAR_4->command_queue
                                               : VAR_5->command_queue;
    VAR_7 = FUNC_2(VAR_6->command_queue);
    if (VAR_7 != VAR_1) {
        FUNC_1(VAR_3, VAR_0, "Failed to retain frame "
               "command queue: %d.\n", VAR_7);
        return FUNC_0(VAR_2);
    }

    return 0;
}
