
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_10__ {TYPE_2__** outputs; TYPE_1__** inputs; TYPE_3__* priv; } ;
struct TYPE_9__ {int const user_format; } ;
struct TYPE_8__ {int in_formats; } ;
struct TYPE_7__ {int out_formats; } ;
typedef TYPE_3__ ColorSpaceContext ;
typedef int AVFilterFormats ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int **,int const) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int const*) ;
 int FUNC_4 (TYPE_4__*,int *) ;

__attribute__((used)) static int FUNC_5(AVFilterContext *VAR_1)
{
    static const enum AVPixelFormat VAR_2[] = {
        139, 136, 133,
        138, 135, 132,
        137, 134, 131,
        130, 129, 128,
        140
    };
    int VAR_3;
    ColorSpaceContext *VAR_4 = VAR_1->priv;
    AVFilterFormats *VAR_5 = FUNC_3(VAR_2);

    if (!VAR_5)
        return FUNC_0(VAR_0);
    if (VAR_4->user_format == 140)
        return FUNC_4(VAR_1, VAR_5);
    VAR_3 = FUNC_2(VAR_5, &VAR_1->inputs[0]->out_formats);
    if (VAR_3 < 0)
        return VAR_3;
    VAR_5 = ((void*)0);
    VAR_3 = FUNC_1(&VAR_5, VAR_4->user_format);
    if (VAR_3 < 0)
        return VAR_3;

    return FUNC_2(VAR_5, &VAR_1->outputs[0]->in_formats);
}
