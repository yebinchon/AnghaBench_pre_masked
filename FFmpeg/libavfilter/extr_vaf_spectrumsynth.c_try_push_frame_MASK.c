
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int ** outputs; TYPE_3__* priv; } ;
struct TYPE_13__ {int pts; scalar_t__* extended_data; } ;
struct TYPE_12__ {float factor; int channels; int start; int end; int win_size; int pts; TYPE_2__* buffer; int phase; int magnitude; scalar_t__ hop_size; TYPE_1__** fft_data; } ;
struct TYPE_11__ {scalar_t__* extended_data; } ;
struct TYPE_10__ {float re; } ;
typedef TYPE_3__ SpectrumSynthContext ;
typedef TYPE_4__ AVFrame ;
typedef int AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_4__*) ;
 TYPE_4__* FUNC_3 (int *,int) ;
 int FUNC_4 (float*,float*,int) ;
 int FUNC_5 (TYPE_5__*,int) ;

__attribute__((used)) static int FUNC_6(AVFilterContext *VAR_1, int VAR_2)
{
    SpectrumSynthContext *VAR_3 = VAR_1->priv;
    AVFilterLink *VAR_4 = VAR_1->outputs[0];
    const float VAR_5 = VAR_3->factor;
    int VAR_6, VAR_7, VAR_8, VAR_9;
    int VAR_10, VAR_11;
    AVFrame *VAR_12;

    FUNC_5(VAR_1, VAR_2);

    for (VAR_6 = 0; VAR_6 < VAR_3->channels; VAR_6++) {
        float *VAR_13 = (float *)VAR_3->buffer->extended_data[VAR_6];
        int VAR_14, VAR_15;

        VAR_10 = VAR_3->start;
        VAR_11 = VAR_3->end;
        VAR_15 = VAR_11;
        for (VAR_8 = 0, VAR_14 = VAR_10; VAR_14 < VAR_15 && VAR_8 < VAR_3->win_size; VAR_8++, VAR_14++) {
            VAR_13[VAR_14] += VAR_3->fft_data[VAR_6][VAR_8].re;
        }

        for (; VAR_8 < VAR_3->win_size; VAR_8++, VAR_14++) {
            VAR_13[VAR_14] = VAR_3->fft_data[VAR_6][VAR_8].re;
        }

        VAR_10 += VAR_3->hop_size;
        VAR_11 = VAR_14;

        if (VAR_10 >= VAR_3->win_size) {
            VAR_10 -= VAR_3->win_size;
            VAR_11 -= VAR_3->win_size;

            if (VAR_6 == VAR_3->channels - 1) {
                float *VAR_16;
                int VAR_17;

                VAR_12 = FUNC_3(VAR_4, VAR_3->win_size);
                if (!VAR_12) {
                    FUNC_1(&VAR_3->magnitude);
                    FUNC_1(&VAR_3->phase);
                    return FUNC_0(VAR_0);
                }

                VAR_12->pts = VAR_3->pts;
                VAR_3->pts += VAR_3->win_size;
                for (VAR_17 = 0; VAR_17 < VAR_3->channels; VAR_17++) {
                    VAR_16 = (float *)VAR_12->extended_data[VAR_17];
                    VAR_13 = (float *)VAR_3->buffer->extended_data[VAR_17];

                    for (VAR_7 = 0; VAR_7 < VAR_3->win_size; VAR_7++) {
                        VAR_16[VAR_7] = VAR_13[VAR_7] * VAR_5;
                    }
                    FUNC_4(VAR_13, VAR_13 + VAR_3->win_size, VAR_3->win_size * 4);
                }

                VAR_9 = FUNC_2(VAR_4, VAR_12);
                if (VAR_9 < 0)
                    return VAR_9;
            }
        }
    }

    VAR_3->start = VAR_10;
    VAR_3->end = VAR_11;

    return 0;
}
