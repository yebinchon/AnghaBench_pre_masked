
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int cl_int ;
struct TYPE_11__ {TYPE_3__* priv; } ;
struct TYPE_9__ {TYPE_1__* hwctx; int program; } ;
struct TYPE_10__ {int h; int sigma; int research_size; int patch_size; int research_size_uv; int patch_size_uv; int initialised; int command_queue; void* overflow; void* sum; void* weight; void* integral_img; void* average_kernel; void* accum_kernel; void* horiz_kernel; void* vert_kernel; TYPE_2__ ocf; } ;
struct TYPE_8__ {int context; int device_id; } ;
typedef TYPE_3__ NLMeansOpenCLContext ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_4__*,int ,char*,int) ;
 void* FUNC_6 (int ,int ,int,int *,int *) ;
 int FUNC_7 (int ,int ,int ,int *) ;
 void* FUNC_8 (int ,char*,int *) ;
 int FUNC_9 (TYPE_4__*,int *,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_10(AVFilterContext *VAR_3, int VAR_4, int VAR_5)
{
    NLMeansOpenCLContext *VAR_6 = VAR_3->priv;
    cl_int VAR_7;
    int VAR_8;
    int VAR_9 = VAR_4 * VAR_5 * sizeof(float);

    VAR_6->h = VAR_6->sigma * 10;
    if (!(VAR_6->research_size & 1)) {
        VAR_6->research_size |= 1;
        FUNC_5(VAR_3, VAR_0,
               "research_size should be odd, set to %d",
               VAR_6->research_size);
    }

    if (!(VAR_6->patch_size & 1)) {
        VAR_6->patch_size |= 1;
        FUNC_5(VAR_3, VAR_0,
               "patch_size should be odd, set to %d",
               VAR_6->patch_size);
    }

    if (!VAR_6->research_size_uv)
        VAR_6->research_size_uv = VAR_6->research_size;
    if (!VAR_6->patch_size_uv)
        VAR_6->patch_size_uv = VAR_6->patch_size;

    VAR_8 = FUNC_9(VAR_3, &VAR_2, 1);
    if (VAR_8 < 0)
        goto fail;

    VAR_6->command_queue = FUNC_7(VAR_6->ocf.hwctx->context,
                                              VAR_6->ocf.hwctx->device_id,
                                              0, &VAR_7);
    FUNC_1(FUNC_0(VAR_1), "Failed to create OpenCL "
                     "command queue %d.\n", VAR_7);

    VAR_6->vert_kernel = FUNC_8(VAR_6->ocf.program,
                                      "vert_sum", &VAR_7);
    FUNC_1(FUNC_0(VAR_1), "Failed to create "
                     "vert_sum kernel %d.\n", VAR_7);

    VAR_6->horiz_kernel = FUNC_8(VAR_6->ocf.program,
                                       "horiz_sum", &VAR_7);
    FUNC_1(FUNC_0(VAR_1), "Failed to create "
                     "horiz_sum kernel %d.\n", VAR_7);

    VAR_6->accum_kernel = FUNC_8(VAR_6->ocf.program,
                                       "weight_accum", &VAR_7);
    FUNC_1(FUNC_0(VAR_1), "Failed to create "
                     "accum kernel %d.\n", VAR_7);

    VAR_6->average_kernel = FUNC_8(VAR_6->ocf.program,
                                         "average", &VAR_7);
    FUNC_1(FUNC_0(VAR_1), "Failed to create "
                     "average kernel %d.\n", VAR_7);

    VAR_6->integral_img = FUNC_6(VAR_6->ocf.hwctx->context, 0,
                                       4 * VAR_4 * VAR_5 * sizeof(cl_int),
                                       ((void*)0), &VAR_7);
    FUNC_1(FUNC_0(VAR_1), "Failed to create "
                     "integral image %d.\n", VAR_7);

    VAR_6->weight = FUNC_6(VAR_6->ocf.hwctx->context, 0,
                                 VAR_9, ((void*)0), &VAR_7);
    FUNC_1(FUNC_0(VAR_1), "Failed to create "
                     "weight buffer %d.\n", VAR_7);

    VAR_6->sum = FUNC_6(VAR_6->ocf.hwctx->context, 0,
                              VAR_9, ((void*)0), &VAR_7);
    FUNC_1(FUNC_0(VAR_1), "Failed to create "
                     "sum buffer %d.\n", VAR_7);

    VAR_6->overflow = FUNC_6(VAR_6->ocf.hwctx->context, 0,
                                   sizeof(cl_int), ((void*)0), &VAR_7);
    FUNC_1(FUNC_0(VAR_1), "Failed to create "
                     "overflow buffer %d.\n", VAR_7);

    VAR_6->initialised = 1;
    return 0;

fail:
    FUNC_2(VAR_6->vert_kernel);
    FUNC_2(VAR_6->horiz_kernel);
    FUNC_2(VAR_6->accum_kernel);
    FUNC_2(VAR_6->average_kernel);

    FUNC_3(VAR_6->integral_img);
    FUNC_3(VAR_6->weight);
    FUNC_3(VAR_6->sum);
    FUNC_3(VAR_6->overflow);

    FUNC_4(VAR_6->command_queue);
    return VAR_8;
}
