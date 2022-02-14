
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ extended_data; } ;
struct TYPE_10__ {TYPE_1__* priv; } ;
struct TYPE_9__ {int channels; int format; int sample_rate; TYPE_3__* src; } ;
struct TYPE_8__ {int K; int S; int eof_left; int H; int N; float pdiff_lut_scale; float m; int dsp; int * weight_lut; TYPE_7__* in; int fifo; TYPE_7__* cache; int pts; int rd; int pd; } ;
typedef TYPE_1__ AudioNLMeansContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 float VAR_4 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,void**,int) ;
 int FUNC_3 (TYPE_7__**) ;
 int FUNC_4 (TYPE_3__*,int ,char*,int,int,int,int) ;
 void* FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (float) ;
 int FUNC_7 (int *) ;
 void* FUNC_8 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_9(AVFilterLink *VAR_5)
{
    AVFilterContext *VAR_6 = VAR_5->src;
    AudioNLMeansContext *VAR_7 = VAR_6->priv;
    int VAR_8;

    VAR_7->K = FUNC_5(VAR_7->pd, VAR_5->sample_rate, VAR_2);
    VAR_7->S = FUNC_5(VAR_7->rd, VAR_5->sample_rate, VAR_2);

    VAR_7->eof_left = -1;
    VAR_7->pts = VAR_1;
    VAR_7->H = VAR_7->K * 2 + 1;
    VAR_7->N = VAR_7->H + (VAR_7->K + VAR_7->S) * 2;

    FUNC_4(VAR_6, VAR_0, "K:%d S:%d H:%d N:%d\n", VAR_7->K, VAR_7->S, VAR_7->H, VAR_7->N);

    FUNC_3(&VAR_7->in);
    FUNC_3(&VAR_7->cache);
    VAR_7->in = FUNC_8(VAR_5, VAR_7->N);
    if (!VAR_7->in)
        return FUNC_0(VAR_3);

    VAR_7->cache = FUNC_8(VAR_5, VAR_7->S * 2);
    if (!VAR_7->cache)
        return FUNC_0(VAR_3);

    VAR_7->fifo = FUNC_1(VAR_5->format, VAR_5->channels, VAR_7->N);
    if (!VAR_7->fifo)
        return FUNC_0(VAR_3);

    VAR_8 = FUNC_2(VAR_7->fifo, (void **)VAR_7->in->extended_data, VAR_7->K + VAR_7->S);
    if (VAR_8 < 0)
        return VAR_8;

    VAR_7->pdiff_lut_scale = 1.f / VAR_7->m * VAR_4;
    for (int VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
        float VAR_10 = -VAR_9 / VAR_7->pdiff_lut_scale;

        VAR_7->weight_lut[VAR_9] = FUNC_6(VAR_10);
    }

    FUNC_7(&VAR_7->dsp);

    return 0;
}
