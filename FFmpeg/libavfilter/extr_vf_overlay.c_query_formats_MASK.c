
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_16__ {TYPE_2__** outputs; TYPE_1__** inputs; TYPE_3__* priv; } ;
struct TYPE_15__ {struct TYPE_15__* formats; } ;
struct TYPE_14__ {int format; } ;
struct TYPE_13__ {int in_formats; } ;
struct TYPE_12__ {int out_formats; } ;
typedef TYPE_3__ OverlayContext ;
typedef TYPE_4__ AVFilterFormats ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;






 int const* VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__**) ;
 int FUNC_3 (TYPE_4__*,int *) ;
 TYPE_4__* FUNC_4 (int const*) ;
 int FUNC_5 (TYPE_5__*,TYPE_4__*) ;

__attribute__((used)) static int FUNC_6(AVFilterContext *VAR_4)
{
    OverlayContext *VAR_5 = VAR_4->priv;


    static const enum AVPixelFormat VAR_6[] = {
        142, 136, 139,
        146, 145,
        147
    };
    static const enum AVPixelFormat VAR_7[] = {
        139, 147
    };

    static const enum AVPixelFormat VAR_8[] = {
        141, 135, 138, 147
    };
    static const enum AVPixelFormat VAR_9[] = {
        138, 147
    };

    static const enum AVPixelFormat VAR_10[] = {
        140, 134, 137, 147
    };
    static const enum AVPixelFormat VAR_11[] = {
        137, 147
    };

    static const enum AVPixelFormat VAR_12[] = {
        148, 149, 147
    };
    static const enum AVPixelFormat VAR_13[] = {
        149, 147
    };

    static const enum AVPixelFormat VAR_14[] = {
        152, 143,
        153, 150,
        144, 151,
        147
    };
    static const enum AVPixelFormat VAR_15[] = {
        152, 143,
        153, 150,
        147
    };

    AVFilterFormats *VAR_16 = ((void*)0);
    AVFilterFormats *VAR_17 = ((void*)0);
    int VAR_18;

    switch (VAR_5->format) {
    case 130:
        if (!(VAR_16 = FUNC_4(VAR_6)) ||
            !(VAR_17 = FUNC_4(VAR_7))) {
                VAR_18 = FUNC_0(VAR_0);
                goto fail;
            }
        break;
    case 129:
        if (!(VAR_16 = FUNC_4(VAR_8)) ||
            !(VAR_17 = FUNC_4(VAR_9))) {
                VAR_18 = FUNC_0(VAR_0);
                goto fail;
            }
        break;
    case 128:
        if (!(VAR_16 = FUNC_4(VAR_10)) ||
            !(VAR_17 = FUNC_4(VAR_11))) {
                VAR_18 = FUNC_0(VAR_0);
                goto fail;
            }
        break;
    case 131:
        if (!(VAR_16 = FUNC_4(VAR_14)) ||
            !(VAR_17 = FUNC_4(VAR_15))) {
                VAR_18 = FUNC_0(VAR_0);
                goto fail;
            }
        break;
    case 132:
        if (!(VAR_16 = FUNC_4(VAR_12)) ||
            !(VAR_17 = FUNC_4(VAR_13))) {
                VAR_18 = FUNC_0(VAR_0);
                goto fail;
            }
        break;
    case 133:
        if (!(VAR_16 = FUNC_4(VAR_3))) {
                VAR_18 = FUNC_0(VAR_0);
                goto fail;
            }
        break;
    default:
        FUNC_1(0);
    }

    if (VAR_5->format == 133) {
        VAR_18 = FUNC_5(VAR_4, VAR_16);
        if (VAR_18 < 0)
            goto fail;
    } else {
        if ((VAR_18 = FUNC_3(VAR_16 , &VAR_4->inputs[VAR_1]->out_formats )) < 0 ||
            (VAR_18 = FUNC_3(VAR_17, &VAR_4->inputs[VAR_2]->out_formats)) < 0 ||
            (VAR_18 = FUNC_3(VAR_16 , &VAR_4->outputs[VAR_1]->in_formats )) < 0)
                goto fail;
    }

    return 0;
fail:
    if (VAR_16)
        FUNC_2(&VAR_16->formats);
    FUNC_2(&VAR_16);
    if (VAR_17)
        FUNC_2(&VAR_17->formats);
    FUNC_2(&VAR_17);
    return VAR_18;
}
