
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* out; TYPE_3__* in; } ;
typedef TYPE_1__ ThreadData ;
struct TYPE_10__ {TYPE_2__* priv; } ;
struct TYPE_9__ {int channels; scalar_t__* extended_data; } ;
struct TYPE_8__ {int * st; } ;
typedef TYPE_2__ AudioRNNContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (TYPE_2__*,int *,float*,float const*) ;

__attribute__((used)) static int FUNC_1(AVFilterContext *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
    AudioRNNContext *VAR_4 = VAR_0->priv;
    ThreadData *VAR_5 = VAR_1;
    AVFrame *VAR_6 = VAR_5->in;
    AVFrame *VAR_7 = VAR_5->out;
    const int VAR_8 = (VAR_7->channels * VAR_2) / VAR_3;
    const int VAR_9 = (VAR_7->channels * (VAR_2+1)) / VAR_3;

    for (int VAR_10 = VAR_8; VAR_10 < VAR_9; VAR_10++) {
        FUNC_0(VAR_4, &VAR_4->st[VAR_10],
                        (float *)VAR_7->extended_data[VAR_10],
                        (const float *)VAR_6->extended_data[VAR_10]);
    }

    return 0;
}
