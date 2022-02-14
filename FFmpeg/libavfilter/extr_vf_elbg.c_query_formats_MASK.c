
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
struct TYPE_9__ {int pal8; } ;
struct TYPE_8__ {int in_formats; } ;
struct TYPE_7__ {int out_formats; } ;
typedef TYPE_3__ ELBGContext ;
typedef int AVFilterFormats ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int const*) ;
 int FUNC_3 (TYPE_4__*,int *) ;

__attribute__((used)) static int FUNC_4(AVFilterContext *VAR_1)
{
    ELBGContext *VAR_2 = VAR_1->priv;
    int VAR_3;

    static const enum AVPixelFormat VAR_4[] = {
        134, 128, 135, 132,
        129, 133,
        131
    };
    if (!VAR_2->pal8) {
        AVFilterFormats *VAR_5 = FUNC_2(VAR_4);
        if (!VAR_5)
            return FUNC_0(VAR_0);
        return FUNC_3(VAR_1, VAR_5);
    } else {
        static const enum AVPixelFormat VAR_6[] = {
            130,
            131
        };
        if ((VAR_3 = FUNC_1(FUNC_2(VAR_4), &VAR_1->inputs[0]->out_formats)) < 0 ||
            (VAR_3 = FUNC_1(FUNC_2(VAR_6), &VAR_1->outputs[0]->in_formats)) < 0)
            return VAR_3;
    }
    return 0;
}
