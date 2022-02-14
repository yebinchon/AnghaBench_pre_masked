
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int cl_int ;
typedef scalar_t__ cl_context_properties ;
typedef int * VADisplay ;
struct TYPE_11__ {TYPE_1__* internal; TYPE_3__* hwctx; } ;
struct TYPE_10__ {int context; int device_id; scalar_t__ command_queue; } ;
struct TYPE_9__ {int beignet_drm_mapping_usable; int qsv_mapping_usable; int dxva2_mapping_usable; int d3d11_mapping_usable; int drm_arm_mapping_usable; int dx9_media_adapter_type; int platform_id; scalar_t__ command_queue; } ;
struct TYPE_8__ {TYPE_2__* priv; } ;
typedef TYPE_2__ OpenCLDeviceContext ;
typedef TYPE_3__ AVOpenCLDeviceContext ;
typedef TYPE_4__ AVHWDeviceContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (TYPE_4__*,int ,char*,...) ;
 scalar_t__* FUNC_4 (size_t) ;
 scalar_t__ FUNC_5 (int ,int ,int ,int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_6 (int ,int ,size_t,scalar_t__*,size_t*) ;
 int FUNC_7 (int ,int ,int,int *,int *) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (TYPE_4__*,char const*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(AVHWDeviceContext *VAR_20)
{
    AVOpenCLDeviceContext *VAR_21 = VAR_20->hwctx;
    OpenCLDeviceContext *VAR_22 = VAR_20->internal->priv;
    cl_int VAR_23;

    if (VAR_21->command_queue) {
        VAR_23 = FUNC_8(VAR_21->command_queue);
        if (VAR_23 != VAR_7) {
            FUNC_3(VAR_20, VAR_0, "Failed to retain external "
                   "command queue: %d.\n", VAR_23);
            return FUNC_0(VAR_8);
        }
        VAR_22->command_queue = VAR_21->command_queue;
    } else {
        VAR_22->command_queue = FUNC_5(VAR_21->context,
                                                   VAR_21->device_id,
                                                   0, &VAR_23);
        if (!VAR_22->command_queue) {
            FUNC_3(VAR_20, VAR_0, "Failed to create internal "
                   "command queue: %d.\n", VAR_23);
            return FUNC_0(VAR_8);
        }
    }

    VAR_23 = FUNC_7(VAR_21->device_id, VAR_6,
                          sizeof(VAR_22->platform_id), &VAR_22->platform_id,
                          ((void*)0));
    if (VAR_23 != VAR_7) {
        FUNC_3(VAR_20, VAR_0, "Failed to determine the OpenCL "
               "platform containing the device.\n");
        return FUNC_0(VAR_8);
    }
    return 0;
}
