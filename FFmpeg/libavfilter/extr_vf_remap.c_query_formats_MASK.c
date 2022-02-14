
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_14__ {TYPE_2__** outputs; TYPE_1__** inputs; TYPE_3__* priv; } ;
struct TYPE_13__ {struct TYPE_13__* formats; } ;
struct TYPE_12__ {scalar_t__ format; } ;
struct TYPE_11__ {int in_formats; } ;
struct TYPE_10__ {int out_formats; } ;
typedef TYPE_3__ RemapContext ;
typedef TYPE_4__ AVFilterFormats ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_4__**) ;
 int FUNC_2 (TYPE_4__*,int *) ;
 TYPE_4__* FUNC_3 (int const*) ;

__attribute__((used)) static int FUNC_4(AVFilterContext *VAR_1)
{
    RemapContext *VAR_2 = VAR_1->priv;
    static const enum AVPixelFormat VAR_3[] = {
        132,
        138,
        128,
        142, 163,
        164, 165, 140, 161,
        155, 159,
        133, 137, 136,
        135, 134,
        129, 131, 130,
        150, 154, 153,
        152, 151,
        158, 157, 156,
        141, 162,
        139, 160,
        143
    };
    static const enum AVPixelFormat VAR_4[] = {
        145, 144,
        149, 148,
        147, 146,
        143
    };
    static const enum AVPixelFormat VAR_5[] = {
        146,
        143
    };
    AVFilterFormats *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
    int VAR_8;

    if (!(VAR_6 = FUNC_3(VAR_2->format ? VAR_4 : VAR_3)) ||
        !(VAR_7 = FUNC_3(VAR_5))) {
        VAR_8 = FUNC_0(VAR_0);
        goto fail;
    }
    if ((VAR_8 = FUNC_2(VAR_6, &VAR_1->inputs[0]->out_formats)) < 0 ||
        (VAR_8 = FUNC_2(VAR_7, &VAR_1->inputs[1]->out_formats)) < 0 ||
        (VAR_8 = FUNC_2(VAR_7, &VAR_1->inputs[2]->out_formats)) < 0 ||
        (VAR_8 = FUNC_2(VAR_6, &VAR_1->outputs[0]->in_formats)) < 0)
        goto fail;
    return 0;
fail:
    if (VAR_6)
        FUNC_1(&VAR_6->formats);
    FUNC_1(&VAR_6);
    if (VAR_7)
        FUNC_1(&VAR_7->formats);
    FUNC_1(&VAR_7);
    return VAR_8;
}
