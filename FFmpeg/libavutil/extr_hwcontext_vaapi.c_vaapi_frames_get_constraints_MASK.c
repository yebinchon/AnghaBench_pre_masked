
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef int pix_fmt ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_19__ {unsigned int i; } ;
struct TYPE_20__ {TYPE_2__ value; } ;
struct TYPE_22__ {int type; TYPE_3__ value; } ;
typedef TYPE_5__ VASurfaceAttrib ;
typedef scalar_t__ VAStatus ;
struct TYPE_23__ {int nb_formats; TYPE_4__* formats; } ;
typedef TYPE_6__ VAAPIDeviceContext ;
struct TYPE_26__ {unsigned int min_width; unsigned int min_height; unsigned int max_width; unsigned int max_height; int* valid_sw_formats; int* valid_hw_formats; } ;
struct TYPE_25__ {int driver_quirks; int display; } ;
struct TYPE_24__ {int config_id; } ;
struct TYPE_21__ {int pix_fmt; } ;
struct TYPE_18__ {TYPE_6__* priv; } ;
struct TYPE_17__ {TYPE_1__* internal; TYPE_8__* hwctx; } ;
typedef TYPE_7__ AVVAAPIHWConfig ;
typedef TYPE_8__ AVVAAPIDeviceContext ;
typedef TYPE_9__ AVHWFramesConstraints ;
typedef TYPE_10__ AVHWDeviceContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;





 scalar_t__ VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_5__**) ;
 int FUNC_3 (TYPE_10__*,int ,char*,scalar_t__,int ) ;
 TYPE_5__* FUNC_4 (int) ;
 void* FUNC_5 (int,int) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int ,int ,TYPE_5__*,int*) ;
 int FUNC_8 (unsigned int) ;

__attribute__((used)) static int FUNC_9(AVHWDeviceContext *VAR_7,
                                        const void *VAR_8,
                                        AVHWFramesConstraints *VAR_9)
{
    AVVAAPIDeviceContext *VAR_10 = VAR_7->hwctx;
    const AVVAAPIHWConfig *VAR_11 = VAR_8;
    VAAPIDeviceContext *VAR_12 = VAR_7->internal->priv;
    VASurfaceAttrib *VAR_13 = ((void*)0);
    VAStatus VAR_14;
    enum AVPixelFormat VAR_15;
    unsigned int VAR_16;
    int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;

    if (VAR_11 &&
        !(VAR_10->driver_quirks & VAR_3)) {
        VAR_20 = 0;
        VAR_14 = FUNC_7(VAR_10->display, VAR_11->config_id,
                                       0, &VAR_20);
        if (VAR_14 != VAR_6) {
            FUNC_3(VAR_7, VAR_0, "Failed to query surface attributes: "
                   "%d (%s).\n", VAR_14, FUNC_6(VAR_14));
            VAR_17 = FUNC_0(VAR_5);
            goto fail;
        }

        VAR_13 = FUNC_4(VAR_20 * sizeof(*VAR_13));
        if (!VAR_13) {
            VAR_17 = FUNC_0(VAR_4);
            goto fail;
        }

        VAR_14 = FUNC_7(VAR_10->display, VAR_11->config_id,
                                       VAR_13, &VAR_20);
        if (VAR_14 != VAR_6) {
            FUNC_3(VAR_7, VAR_0, "Failed to query surface attributes: "
                   "%d (%s).\n", VAR_14, FUNC_6(VAR_14));
            VAR_17 = FUNC_0(VAR_5);
            goto fail;
        }

        VAR_21 = 0;
        for (VAR_18 = 0; VAR_18 < VAR_20; VAR_18++) {
            switch (VAR_13[VAR_18].type) {
            case 128:
                VAR_16 = VAR_13[VAR_18].value.value.i;
                VAR_15 = FUNC_8(VAR_16);
                if (VAR_15 != VAR_1) {
                    ++VAR_21;
                } else {

                }
                break;
            case 129:
                VAR_9->min_width = VAR_13[VAR_18].value.value.i;
                break;
            case 130:
                VAR_9->min_height = VAR_13[VAR_18].value.value.i;
                break;
            case 131:
                VAR_9->max_width = VAR_13[VAR_18].value.value.i;
                break;
            case 132:
                VAR_9->max_height = VAR_13[VAR_18].value.value.i;
                break;
            }
        }
        if (VAR_21 == 0) {


            VAR_9->valid_sw_formats = ((void*)0);
        } else {
            VAR_9->valid_sw_formats = FUNC_5(VAR_21 + 1,
                                                            sizeof(VAR_15));
            if (!VAR_9->valid_sw_formats) {
                VAR_17 = FUNC_0(VAR_4);
                goto fail;
            }

            for (VAR_18 = VAR_19 = 0; VAR_18 < VAR_20; VAR_18++) {
                if (VAR_13[VAR_18].type != 128)
                    continue;
                VAR_16 = VAR_13[VAR_18].value.value.i;
                VAR_15 = FUNC_8(VAR_16);
                if (VAR_15 != VAR_1)
                    VAR_9->valid_sw_formats[VAR_19++] = VAR_15;
            }
            FUNC_1(VAR_19 == VAR_21);
            VAR_9->valid_sw_formats[VAR_19] = VAR_1;
        }
    } else {


        VAR_9->valid_sw_formats = FUNC_5(VAR_12->nb_formats + 1,
                                                        sizeof(VAR_15));
        if (!VAR_9->valid_sw_formats) {
            VAR_17 = FUNC_0(VAR_4);
            goto fail;
        }
        for (VAR_18 = 0; VAR_18 < VAR_12->nb_formats; VAR_18++)
            VAR_9->valid_sw_formats[VAR_18] = VAR_12->formats[VAR_18].pix_fmt;
        VAR_9->valid_sw_formats[VAR_18] = VAR_1;
    }

    VAR_9->valid_hw_formats = FUNC_5(2, sizeof(VAR_15));
    if (!VAR_9->valid_hw_formats) {
        VAR_17 = FUNC_0(VAR_4);
        goto fail;
    }
    VAR_9->valid_hw_formats[0] = VAR_2;
    VAR_9->valid_hw_formats[1] = VAR_1;

    VAR_17 = 0;
fail:
    FUNC_2(&VAR_13);
    return VAR_17;
}
