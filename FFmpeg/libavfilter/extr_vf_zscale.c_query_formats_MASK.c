
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_7__ {TYPE_2__** outputs; TYPE_1__** inputs; } ;
struct TYPE_6__ {int in_formats; } ;
struct TYPE_5__ {int out_formats; } ;
typedef TYPE_3__ AVFilterContext ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int const*) ;

__attribute__((used)) static int FUNC_2(AVFilterContext *VAR_0)
{
    static const enum AVPixelFormat VAR_1[] = {
        165, 164,
        163, 157,
        151, 150,
        131, 130,
        129, 128,
        132,
        158, 152, 145,
        162, 156, 149,
        161, 155, 148,
        160, 154, 147,
        159, 153, 146,
        144, 140, 136,
        141, 137, 133,
        143, 139, 135,
        142, 138, 134,
        173, 168, 172,
        171, 170, 169,
        176, 175,
        167, 174,
        166
    };
    int VAR_2;

    VAR_2 = FUNC_0(FUNC_1(VAR_1), &VAR_0->inputs[0]->out_formats);
    if (VAR_2 < 0)
        return VAR_2;
    return FUNC_0(FUNC_1(VAR_1), &VAR_0->outputs[0]->in_formats);
}
