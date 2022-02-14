
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
typedef enum AVHWFrameTransferDirection { ____Placeholder_AVHWFrameTransferDirection } AVHWFrameTransferDirection ;
struct TYPE_10__ {int nb_formats; TYPE_3__* formats; } ;
typedef TYPE_4__ VAAPIDeviceContext ;
struct TYPE_11__ {scalar_t__ sw_format; TYPE_2__* device_ctx; } ;
struct TYPE_9__ {scalar_t__ pix_fmt; } ;
struct TYPE_8__ {TYPE_1__* internal; } ;
struct TYPE_7__ {TYPE_4__* priv; } ;
typedef TYPE_5__ AVHWFramesContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int* FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(AVHWFramesContext *VAR_2,
                                      enum AVHWFrameTransferDirection VAR_3,
                                      enum AVPixelFormat **VAR_4)
{
    VAAPIDeviceContext *VAR_5 = VAR_2->device_ctx->internal->priv;
    enum AVPixelFormat *VAR_6;
    int VAR_7, VAR_8, VAR_9;

    VAR_9 = 0;
    for (VAR_7 = 0; VAR_7 < VAR_5->nb_formats; VAR_7++) {
        if (VAR_5->formats[VAR_7].pix_fmt == VAR_2->sw_format)
            VAR_9 = 1;
    }

    VAR_6 = FUNC_2((VAR_5->nb_formats + 1) * sizeof(*VAR_6));
    if (!VAR_6)
        return FUNC_0(VAR_1);

    if (VAR_9) {
        VAR_6[0] = VAR_2->sw_format;
        VAR_8 = 1;
    } else {
        VAR_8 = 0;
    }
    for (VAR_7 = 0; VAR_7 < VAR_5->nb_formats; VAR_7++) {
        if (VAR_5->formats[VAR_7].pix_fmt == VAR_2->sw_format)
            continue;
        FUNC_1(VAR_8 < VAR_5->nb_formats);
        VAR_6[VAR_8++] = VAR_5->formats[VAR_7].pix_fmt;
    }
    VAR_6[VAR_8] = VAR_0;

    *VAR_4 = VAR_6;
    return 0;
}
