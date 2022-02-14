
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_10__ {TYPE_2__** inputs; TYPE_1__** outputs; TYPE_3__* priv; } ;
struct TYPE_9__ {int ppsrc; } ;
struct TYPE_8__ {int out_formats; } ;
struct TYPE_7__ {int in_formats; } ;
typedef TYPE_3__ FieldMatchContext ;
typedef int AVFilterFormats ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int const*) ;
 int FUNC_3 (TYPE_4__*,int *) ;

__attribute__((used)) static int FUNC_4(AVFilterContext *VAR_3)
{
    FieldMatchContext *VAR_4 = VAR_3->priv;

    static const enum AVPixelFormat VAR_5[] = {
        138, 147, 153,
        154, 155,
        156
    };
    static const enum AVPixelFormat VAR_6[] = {
        155, 154,
        153, 147,
        141, 138,
        131, 130,
        129, 128,
        132,
        148, 142, 133,
        152, 146, 137,
        140,
        136, 145, 151,
        139,
        135, 144, 150,
        149, 143, 134,
        156
    };
    int VAR_7;

    AVFilterFormats *VAR_8 = FUNC_2(VAR_5);
    if (!VAR_8)
        return FUNC_0(VAR_0);
    if (!VAR_4->ppsrc) {
        return FUNC_3(VAR_3, VAR_8);
    }

    if ((VAR_7 = FUNC_1(VAR_8, &VAR_3->inputs[VAR_2]->out_formats)) < 0)
        return VAR_7;
    VAR_8 = FUNC_2(VAR_6);
    if (!VAR_8)
        return FUNC_0(VAR_0);
    if ((VAR_7 = FUNC_1(VAR_8, &VAR_3->outputs[0]->in_formats)) < 0)
        return VAR_7;
    if ((VAR_7 = FUNC_1(VAR_8, &VAR_3->inputs[VAR_1]->out_formats)) < 0)
        return VAR_7;
    return 0;
}
