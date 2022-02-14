
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_13__ {int codec_type; int format; int sample_rate; int channel_layout; } ;
struct TYPE_12__ {int nb_outputs; TYPE_4__** outputs; TYPE_3__* priv; } ;
struct TYPE_11__ {int in_channel_layouts; int in_samplerates; int in_formats; } ;
struct TYPE_10__ {TYPE_2__* st; } ;
struct TYPE_9__ {TYPE_1__* st; } ;
struct TYPE_8__ {TYPE_6__* codecpar; } ;
typedef TYPE_2__ MovieStream ;
typedef TYPE_3__ MovieContext ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;
typedef TYPE_6__ AVCodecParameters ;




 int FUNC_0 (int*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int*) ;

__attribute__((used)) static int FUNC_4(AVFilterContext *VAR_0)
{
    MovieContext *VAR_1 = VAR_0->priv;
    int VAR_2[] = { 0, -1 };
    int64_t VAR_3[] = { 0, -1 };
    int VAR_4, VAR_5;

    for (VAR_4 = 0; VAR_4 < VAR_0->nb_outputs; VAR_4++) {
        MovieStream *VAR_6 = &VAR_1->st[VAR_4];
        AVCodecParameters *VAR_7 = VAR_6->st->codecpar;
        AVFilterLink *VAR_8 = VAR_0->outputs[VAR_4];

        switch (VAR_7->codec_type) {
        case 128:
            VAR_2[0] = VAR_7->format;
            if ((VAR_5 = FUNC_2(FUNC_3(VAR_2), &VAR_8->in_formats)) < 0)
                return VAR_5;
            break;
        case 129:
            VAR_2[0] = VAR_7->format;
            if ((VAR_5 = FUNC_2(FUNC_3(VAR_2), &VAR_8->in_formats)) < 0)
                return VAR_5;
            VAR_2[0] = VAR_7->sample_rate;
            if ((VAR_5 = FUNC_2(FUNC_3(VAR_2), &VAR_8->in_samplerates)) < 0)
                return VAR_5;
            VAR_3[0] = VAR_7->channel_layout;
            if ((VAR_5 = FUNC_1(FUNC_0(VAR_3),
                                   &VAR_8->in_channel_layouts)) < 0)
                return VAR_5;
            break;
        }
    }

    return 0;
}
