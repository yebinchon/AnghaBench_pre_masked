
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {float* src; float* dst; } ;
typedef TYPE_1__ ThreadData ;
struct TYPE_8__ {TYPE_2__* priv; } ;
struct TYPE_7__ {int pr_width; int pr_height; int const bsize; int p_linesize; float* weights; float** slices; int step; int (* filter_freq_func ) (TYPE_2__*,float const*,int const,float*,int const,int) ;} ;
typedef TYPE_2__ DCTdnoizContext ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int const,int ) ;
 int FUNC_1 (int const,int const) ;
 int FUNC_2 (float*,int ,int const) ;
 int FUNC_3 (TYPE_2__*,float const*,int const,float*,int const,int) ;

__attribute__((used)) static int FUNC_4(AVFilterContext *VAR_0,
                        void *VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4, VAR_5;
    DCTdnoizContext *VAR_6 = VAR_0->priv;
    const ThreadData *VAR_7 = VAR_1;
    const int VAR_8 = VAR_6->pr_width;
    const int VAR_9 = VAR_6->pr_height;
    const int VAR_10 = (VAR_9 * VAR_2 ) / VAR_3;
    const int VAR_11 = (VAR_9 * (VAR_2+1)) / VAR_3;
    const int VAR_12 = FUNC_0(VAR_10 - VAR_6->bsize + 1, 0);
    const int VAR_13 = FUNC_1(VAR_11, VAR_9 - VAR_6->bsize + 1);
    const int VAR_14 = VAR_13 - VAR_12;
    const int VAR_15 = VAR_6->p_linesize;
    const int VAR_16 = VAR_6->p_linesize;
    const int VAR_17 = VAR_6->p_linesize;
    float *VAR_18;
    const float *VAR_19 = VAR_7->src + VAR_12 * VAR_15;
    const float *VAR_20 = VAR_6->weights + VAR_10 * VAR_16;
    float *VAR_21 = VAR_6->slices[VAR_2];


    FUNC_2(VAR_21, 0, (VAR_14 + VAR_6->bsize - 1) * VAR_16 * sizeof(*VAR_21));


    for (VAR_5 = 0; VAR_5 < VAR_14; VAR_5 += VAR_6->step) {
        for (VAR_4 = 0; VAR_4 < VAR_8 - VAR_6->bsize + 1; VAR_4 += VAR_6->step)
            VAR_6->filter_freq_func(VAR_6, VAR_19 + VAR_4, VAR_15,
                                VAR_21 + VAR_4, VAR_17,
                                VAR_2);
        VAR_19 += VAR_6->step * VAR_15;
        VAR_21 += VAR_6->step * VAR_17;
    }


    VAR_21 = VAR_6->slices[VAR_2] + (VAR_10 - VAR_12) * VAR_17;
    VAR_18 = VAR_7->dst + VAR_10 * VAR_16;
    for (VAR_5 = VAR_10; VAR_5 < VAR_11; VAR_5++) {
        for (VAR_4 = 0; VAR_4 < VAR_8; VAR_4++)
            VAR_18[VAR_4] = VAR_21[VAR_4] * VAR_20[VAR_4];
        VAR_21 += VAR_17;
        VAR_18 += VAR_16;
        VAR_20 += VAR_16;
    }

    return 0;
}
