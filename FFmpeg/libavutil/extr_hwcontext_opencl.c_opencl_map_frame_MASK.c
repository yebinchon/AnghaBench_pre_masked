
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int cl_mem ;
typedef int cl_map_flags ;
typedef int cl_int ;
typedef int cl_image_format ;
struct TYPE_19__ {size_t image_width; size_t image_height; } ;
typedef TYPE_2__ cl_image_desc ;
typedef int cl_event ;
struct TYPE_23__ {scalar_t__ format; scalar_t__* data; int height; int width; int hw_frames_ctx; } ;
struct TYPE_22__ {scalar_t__ sw_format; TYPE_1__* internal; } ;
struct TYPE_21__ {int command_queue; } ;
struct TYPE_20__ {scalar_t__* address; } ;
struct TYPE_18__ {TYPE_4__* priv; } ;
typedef TYPE_3__ OpenCLMapping ;
typedef TYPE_4__ OpenCLFramesContext ;
typedef TYPE_5__ AVHWFramesContext ;
typedef TYPE_6__ AVFrame ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__**) ;
 int FUNC_3 (TYPE_5__*,int ,char*,int,scalar_t__,...) ;
 TYPE_3__* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ,int ,int ,int ,size_t*,size_t*,size_t*,int *,int ,int *,int *,int *) ;
 int FUNC_6 (int ,int ,scalar_t__,int ,int *,int *) ;
 int FUNC_7 (int ,TYPE_6__*,TYPE_6__ const*,int *,TYPE_3__*) ;
 int FUNC_8 (scalar_t__,int,int ,int ,int *,TYPE_2__*) ;
 int VAR_13 ;
 int FUNC_9 (TYPE_5__*,int *,int) ;

__attribute__((used)) static int FUNC_10(AVHWFramesContext *VAR_14, AVFrame *VAR_15,
                            const AVFrame *VAR_16, int VAR_17)
{
    OpenCLFramesContext *VAR_18 = VAR_14->internal->priv;
    cl_map_flags VAR_19;
    cl_image_format VAR_20;
    cl_image_desc VAR_21;
    cl_int VAR_22;
    OpenCLMapping *VAR_23;
    size_t VAR_24[3] = { 0, 0, 0 };
    size_t VAR_25[3];
    size_t VAR_26;
    cl_event VAR_27[VAR_5];
    int VAR_28, VAR_29;

    FUNC_1(VAR_14->sw_format == VAR_15->format);

    if (VAR_17 & VAR_0 &&
        !(VAR_17 & VAR_1)) {


        VAR_19 = VAR_9;
    } else {
        VAR_19 = 0;
        if (VAR_17 & VAR_1)
            VAR_19 |= VAR_7;
        if (VAR_17 & VAR_2)
            VAR_19 |= VAR_8;
    }

    VAR_23 = FUNC_4(sizeof(*VAR_23));
    if (!VAR_23)
        return FUNC_0(VAR_12);

    for (VAR_29 = 0;; VAR_29++) {
        VAR_28 = FUNC_8(VAR_14->sw_format, VAR_29,
                                      VAR_16->width, VAR_16->height,
                                      &VAR_20, &VAR_21);
        if (VAR_28 == FUNC_0(VAR_11))
            break;
        if (VAR_28 < 0)
            goto fail;

        VAR_25[0] = VAR_21.image_width;
        VAR_25[1] = VAR_21.image_height;
        VAR_25[2] = 1;

        VAR_23->address[VAR_29] =
            FUNC_5(VAR_18->command_queue,
                              (cl_mem)VAR_16->data[VAR_29],
                              VAR_6, VAR_19, VAR_24, VAR_25,
                              &VAR_26, ((void*)0), 0, ((void*)0),
                              &VAR_27[VAR_29], &VAR_22);
        if (!VAR_23->address[VAR_29]) {
            FUNC_3(VAR_14, VAR_4, "Failed to map OpenCL "
                   "image plane %d: %d.\n", VAR_29, VAR_22);
            VAR_28 = FUNC_0(VAR_10);
            goto fail;
        }

        VAR_15->data[VAR_29] = VAR_23->address[VAR_29];

        FUNC_3(VAR_14, VAR_3, "Map plane %d (%p -> %p).\n",
               VAR_29, VAR_16->data[VAR_29], VAR_15->data[VAR_29]);
    }

    VAR_28 = FUNC_9(VAR_14, VAR_27, VAR_29);
    if (VAR_28 < 0)
        goto fail;

    VAR_28 = FUNC_7(VAR_16->hw_frames_ctx, VAR_15, VAR_16,
                                &VAR_13, VAR_23);
    if (VAR_28 < 0)
        goto fail;

    VAR_15->width = VAR_16->width;
    VAR_15->height = VAR_16->height;

    return 0;

fail:
    for (VAR_29 = 0; VAR_29 < VAR_5; VAR_29++) {
        if (!VAR_23->address[VAR_29])
            break;
        FUNC_6(VAR_18->command_queue,
                                (cl_mem)VAR_16->data[VAR_29],
                                VAR_23->address[VAR_29],
                                0, ((void*)0), &VAR_27[VAR_29]);
    }
    if (VAR_29 > 0)
        FUNC_9(VAR_14, VAR_27, VAR_29);
    FUNC_2(&VAR_23);
    return VAR_28;
}
