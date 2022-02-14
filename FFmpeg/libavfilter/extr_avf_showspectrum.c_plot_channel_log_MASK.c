
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__** inputs; TYPE_1__* priv; } ;
struct TYPE_9__ {int sample_rate; } ;
struct TYPE_8__ {scalar_t__ orientation; int channel_height; int channel_width; scalar_t__ mode; float** color_buffer; } ;
typedef TYPE_1__ ShowSpectrumContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int const) ;
 scalar_t__ VAR_1 ;
 float FUNC_1 (int,int const,int ) ;
 int FUNC_2 (TYPE_1__*,int const,float*,float*,float*) ;
 float FUNC_3 (TYPE_3__*,int const,int) ;
 int FUNC_4 (float) ;
 int FUNC_5 (TYPE_1__*,float,float,float,float,float*) ;

__attribute__((used)) static int FUNC_6(AVFilterContext *VAR_2, void *VAR_3, int VAR_4, int VAR_5)
{
    ShowSpectrumContext *VAR_6 = VAR_2->priv;
    AVFilterLink *VAR_7 = VAR_2->inputs[0];
    const int VAR_8 = VAR_6->orientation == VAR_1 ? VAR_6->channel_height : VAR_6->channel_width;
    const int VAR_9 = VAR_4;
    float VAR_10, VAR_11, VAR_12, VAR_13;
    int VAR_14 = 0;


    FUNC_2(VAR_6, VAR_9, &VAR_11, &VAR_12, &VAR_13);


    for (VAR_10 = 0; VAR_10 < VAR_8 && VAR_14 < VAR_8; VAR_14++) {
        float VAR_15 = FUNC_1(VAR_14+0, VAR_8, VAR_7->sample_rate);
        float VAR_16 = FUNC_1(VAR_14+1, VAR_8, VAR_7->sample_rate);
        float VAR_17 = VAR_16 - VAR_15;
        float VAR_18, VAR_19;

        VAR_18 = FUNC_3(VAR_2, VAR_9, VAR_14+0);
        VAR_19 = FUNC_3(VAR_2, VAR_9, FUNC_0(VAR_14+1, VAR_8-1));
        for (float VAR_20 = VAR_15; VAR_20 < VAR_16 && VAR_10 + VAR_20 - VAR_15 < VAR_8; VAR_20++) {
            float VAR_21 = (VAR_6->mode == VAR_0) ? VAR_10 + VAR_20 - VAR_15 : VAR_9 * VAR_8 + VAR_10 + VAR_20 - VAR_15;
            float *VAR_22 = &VAR_6->color_buffer[VAR_9][3 * FUNC_0(FUNC_4(VAR_21), VAR_8-1)];
            float VAR_23 = (VAR_20 - VAR_15) / VAR_17;

            FUNC_5(VAR_6, VAR_11, VAR_12, VAR_13, VAR_23 * VAR_19 + (1.f-VAR_23) * VAR_18, VAR_22);
        }
        VAR_10 += VAR_17;
    }

    return 0;
}
