
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_5__ {TYPE_1__** outputs; } ;
struct TYPE_4__ {int in_formats; } ;
typedef TYPE_1__ AVFilterLink ;
typedef int AVFilterFormats ;
typedef TYPE_2__ AVFilterContext ;




 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int const*) ;

__attribute__((used)) static int FUNC_2(AVFilterContext *VAR_0)
{
    AVFilterLink *VAR_1 = VAR_0->outputs[0];
    static const enum AVPixelFormat VAR_2[] = {
        128,
        129
    };
    int VAR_3;

    AVFilterFormats *VAR_4 = FUNC_1(VAR_2);
    if ((VAR_3 = FUNC_0(VAR_4, &VAR_1->in_formats)) < 0)
        return VAR_3;

    return 0;
}
