
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_12__ {TYPE_2__** outputs; TYPE_1__** inputs; } ;
struct TYPE_11__ {struct TYPE_11__* formats; } ;
struct TYPE_10__ {int in_formats; } ;
struct TYPE_9__ {int out_formats; } ;
typedef TYPE_3__ AVFilterFormats ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;



 int VAR_0 ;
 int FUNC_1 (TYPE_3__**) ;
 int FUNC_2 (TYPE_3__*,int *) ;
 TYPE_3__* FUNC_3 (int const*) ;

__attribute__((used)) static int FUNC_4(AVFilterContext *VAR_1)
{
    static const enum AVPixelFormat VAR_2[] = {129, 130};
    static const enum AVPixelFormat VAR_3[] = {128, 130};
    int VAR_4;
    AVFilterFormats *VAR_5 = FUNC_3(VAR_2);
    AVFilterFormats *VAR_6 = FUNC_3(VAR_3);
    if (!VAR_5 || !VAR_6) {
        VAR_4 = FUNC_0(VAR_0);
        goto fail;
    }

    if ((VAR_4 = FUNC_2(VAR_5 , &VAR_1->inputs[0]->out_formats)) < 0 ||
        (VAR_4 = FUNC_2(VAR_6, &VAR_1->outputs[0]->in_formats)) < 0)
        goto fail;
    return 0;
fail:
    if (VAR_5)
        FUNC_1(&VAR_5->formats);
    FUNC_1(&VAR_5);
    if (VAR_6)
        FUNC_1(&VAR_6->formats);
    FUNC_1(&VAR_6);
    return VAR_4;
}
