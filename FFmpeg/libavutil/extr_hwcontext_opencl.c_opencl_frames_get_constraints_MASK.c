
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int max_width ;
typedef int max_height ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
typedef scalar_t__ cl_uint ;
typedef int cl_int ;
struct TYPE_11__ {scalar_t__ image_channel_order; scalar_t__ image_channel_data_type; } ;
typedef TYPE_1__ cl_image_format ;
typedef int cl_image_desc ;
struct TYPE_14__ {TYPE_2__* hwctx; } ;
struct TYPE_13__ {size_t max_width; size_t max_height; int* valid_sw_formats; void** valid_hw_formats; } ;
struct TYPE_12__ {int context; int device_id; } ;
typedef TYPE_2__ AVOpenCLDeviceContext ;
typedef TYPE_3__ AVHWFramesConstraints ;
typedef TYPE_4__ AVHWDeviceContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (TYPE_1__**) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_4__*,int ,char*,...) ;
 void* FUNC_4 (int,int) ;
 int FUNC_5 (int**,int,int) ;
 int FUNC_6 (int ,int ,int,size_t*,int *) ;
 int FUNC_7 (int ,int ,int ,scalar_t__,TYPE_1__*,scalar_t__*) ;
 int FUNC_8 (int,int,int ,int ,TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_9(AVHWDeviceContext *VAR_14,
                                         const void *VAR_15,
                                         AVHWFramesConstraints *VAR_16)
{
    AVOpenCLDeviceContext *VAR_17 = VAR_14->hwctx;
    cl_uint VAR_18;
    cl_image_format *VAR_19 = ((void*)0);
    cl_int VAR_20;
    enum AVPixelFormat VAR_21;
    int VAR_22, VAR_23;
    size_t VAR_24, VAR_25;

    VAR_20 = FUNC_6(VAR_17->device_id, VAR_6,
                          sizeof(VAR_24), &VAR_24, ((void*)0));
    if (VAR_20 != VAR_9) {
        FUNC_3(VAR_14, VAR_1, "Failed to query maximum "
               "supported image width: %d.\n", VAR_20);
    } else {
        VAR_16->max_width = VAR_24;
    }
    VAR_20 = FUNC_6(VAR_17->device_id, VAR_5,
                          sizeof(VAR_25), &VAR_25, ((void*)0));
    if (VAR_20 != VAR_9) {
        FUNC_3(VAR_14, VAR_1, "Failed to query maximum "
               "supported image height: %d.\n", VAR_20);
    } else {
        VAR_16->max_height = VAR_25;
    }
    FUNC_3(VAR_14, VAR_0, "Maximum supported image size %dx%d.\n",
           VAR_16->max_width, VAR_16->max_height);

    VAR_20 = FUNC_7(VAR_17->context,
                                     VAR_8,
                                     VAR_7,
                                     0, ((void*)0), &VAR_18);
    if (VAR_20 != VAR_9) {
        FUNC_3(VAR_14, VAR_1, "Failed to query supported "
               "image formats: %d.\n", VAR_20);
        VAR_22 = FUNC_0(VAR_13);
        goto fail;
    }
    if (VAR_18 == 0) {
        FUNC_3(VAR_14, VAR_1, "No image support in OpenCL "
               "driver (zero supported image formats).\n");
        VAR_22 = FUNC_0(VAR_13);
        goto fail;
    }

    VAR_19 =
        FUNC_4(VAR_18, sizeof(*VAR_19));
    if (!VAR_19) {
        VAR_22 = FUNC_0(VAR_12);
        goto fail;
    }

    VAR_20 = FUNC_7(VAR_17->context,
                                     VAR_8,
                                     VAR_7,
                                     VAR_18,
                                     VAR_19, ((void*)0));
    if (VAR_20 != VAR_9) {
        FUNC_3(VAR_14, VAR_1, "Failed to query supported "
               "image formats: %d.\n", VAR_20);
        VAR_22 = FUNC_0(VAR_13);
        goto fail;
    }

    VAR_23 = 0;
    for (VAR_21 = 0; VAR_21 < VAR_2; VAR_21++) {
        cl_image_format VAR_26;
        cl_image_desc VAR_27;
        int VAR_28, VAR_29;

        for (VAR_28 = 0;; VAR_28++) {
            VAR_22 = FUNC_8(VAR_21, VAR_28, 0, 0,
                                          &VAR_26,
                                          &VAR_27);
            if (VAR_22 < 0)
                break;

            for (VAR_29 = 0; VAR_29 < VAR_18; VAR_29++) {
                if (VAR_19[VAR_29].image_channel_order ==
                    VAR_26.image_channel_order &&
                    VAR_19[VAR_29].image_channel_data_type ==
                    VAR_26.image_channel_data_type)
                    break;
            }
            if (VAR_29 == VAR_18) {
                VAR_22 = FUNC_0(VAR_10);
                break;
            }
        }
        if (VAR_22 != FUNC_0(VAR_11))
            continue;

        FUNC_3(VAR_14, VAR_0, "Format %s supported.\n",
               FUNC_2(VAR_21));

        VAR_22 = FUNC_5(&VAR_16->valid_sw_formats,
                                VAR_23 + 2,
                                sizeof(*VAR_16->valid_sw_formats));
        if (VAR_22 < 0)
            goto fail;
        VAR_16->valid_sw_formats[VAR_23] = VAR_21;
        VAR_16->valid_sw_formats[VAR_23 + 1] =
            VAR_3;
        ++VAR_23;
    }

    FUNC_1(&VAR_19);

    VAR_16->valid_hw_formats =
        FUNC_4(2, sizeof(*VAR_16->valid_hw_formats));
    if (!VAR_16->valid_hw_formats) {
        VAR_22 = FUNC_0(VAR_12);
        goto fail;
    }
    VAR_16->valid_hw_formats[0] = VAR_4;
    VAR_16->valid_hw_formats[1] = VAR_3;

    return 0;

fail:
    FUNC_1(&VAR_19);
    return VAR_22;
}
