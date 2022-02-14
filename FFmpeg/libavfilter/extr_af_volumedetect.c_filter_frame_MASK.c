
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_8__ {int * histogram; } ;
typedef TYPE_1__ VolDetectContext ;
struct TYPE_11__ {int * outputs; TYPE_1__* priv; } ;
struct TYPE_10__ {TYPE_4__* dst; } ;
struct TYPE_9__ {int nb_samples; int channels; scalar_t__* extended_data; int format; } ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(AVFilterLink *VAR_0, AVFrame *VAR_1)
{
    AVFilterContext *VAR_2 = VAR_0->dst;
    VolDetectContext *VAR_3 = VAR_2->priv;
    int VAR_4 = VAR_1->nb_samples;
    int VAR_5 = VAR_1->channels;
    int VAR_6 = VAR_5;
    int VAR_7, VAR_8;
    int16_t *VAR_9;

    if (!FUNC_0(VAR_1->format)) {
        VAR_4 *= VAR_5;
        VAR_6 = 1;
    }
    for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
        VAR_9 = (int16_t *)VAR_1->extended_data[VAR_7];
        for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
            VAR_3->histogram[VAR_9[VAR_8] + 0x8000]++;
    }

    return FUNC_1(VAR_0->dst->outputs[0], VAR_1);
}
