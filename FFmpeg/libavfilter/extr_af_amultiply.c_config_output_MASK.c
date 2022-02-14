
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__** inputs; TYPE_1__* priv; } ;
struct TYPE_6__ {int channels; int format; TYPE_3__* src; } ;
struct TYPE_5__ {int channels; int planes; int samples_align; } ;
typedef TYPE_1__ AudioMultiplyContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(AVFilterLink *VAR_0)
{
    AVFilterContext *VAR_1 = VAR_0->src;
    AudioMultiplyContext *VAR_2 = VAR_1->priv;
    AVFilterLink *VAR_3 = VAR_1->inputs[0];

    VAR_2->channels = VAR_3->channels;
    VAR_2->planes = FUNC_0(VAR_3->format) ? VAR_3->channels : 1;
    VAR_2->samples_align = 16;

    return 0;
}
