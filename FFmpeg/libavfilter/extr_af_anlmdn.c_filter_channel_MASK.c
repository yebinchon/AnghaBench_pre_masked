
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


struct TYPE_13__ {int is_disabled; TYPE_4__* priv; } ;
struct TYPE_12__ {scalar_t__* extended_data; } ;
struct TYPE_10__ {float (* compute_distance_ssd ) (float const*,float const*,int const) ;int (* compute_cache ) (float*,float const*,int const,int const,int,int) ;} ;
struct TYPE_11__ {int S; int K; int om; int offset; float m; int const H; float pdiff_lut_scale; float* weight_lut; TYPE_3__ dsp; int a; TYPE_2__* cache; TYPE_1__* in; } ;
struct TYPE_9__ {scalar_t__* extended_data; } ;
struct TYPE_8__ {scalar_t__* extended_data; } ;
typedef TYPE_4__ AudioNLMeansContext ;
typedef TYPE_5__ AVFrame ;
typedef TYPE_6__ AVFilterContext ;





 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 float FUNC_1 (int ) ;
 float FUNC_2 (float const*,float const*,int const) ;
 int FUNC_3 (float*,float const*,int const,int const,int,int) ;
 int FUNC_4 (float*,float const*,int const,int const,int,int) ;

__attribute__((used)) static int FUNC_5(AVFilterContext *VAR_1, void *VAR_2, int VAR_3, int VAR_4)
{
    AudioNLMeansContext *VAR_5 = VAR_1->priv;
    AVFrame *VAR_6 = VAR_2;
    const int VAR_7 = VAR_5->S;
    const int VAR_8 = VAR_5->K;
    const int VAR_9 = VAR_5->om;
    const float *VAR_10 = (const float *)(VAR_5->in->extended_data[VAR_3]) + VAR_8;
    float *VAR_11 = (float *)VAR_5->cache->extended_data[VAR_3];
    const float VAR_12 = (65536.f / (4 * VAR_8 + 2)) / FUNC_1(VAR_5->a);
    float *VAR_13 = (float *)VAR_6->extended_data[VAR_3] + VAR_5->offset;
    const float VAR_14 = VAR_5->m;

    for (int VAR_15 = VAR_7; VAR_15 < VAR_5->H + VAR_7; VAR_15++) {
        float VAR_16 = 0.f, VAR_17 = 0.f;
        int VAR_18 = 0;

        if (VAR_15 == VAR_7) {
            for (int VAR_19 = VAR_15 - VAR_7; VAR_19 <= VAR_15 + VAR_7; VAR_19++) {
                if (VAR_15 == VAR_19)
                    continue;
                VAR_11[VAR_18++] = VAR_5->dsp.compute_distance_ssd(VAR_10 + VAR_15, VAR_10 + VAR_19, VAR_8);
            }
        } else {
            VAR_5->dsp.compute_cache(VAR_11, VAR_10, VAR_7, VAR_8, VAR_15, VAR_15 - VAR_7);
            VAR_5->dsp.compute_cache(VAR_11 + VAR_7, VAR_10, VAR_7, VAR_8, VAR_15, VAR_15 + 1);
        }

        for (int VAR_20 = 0; VAR_20 < 2 * VAR_7 && !VAR_1->is_disabled; VAR_20++) {
            const float VAR_21 = VAR_11[VAR_20];
            unsigned VAR_22;
            float VAR_23;

            if (VAR_21 < 0.f) {
                VAR_11[VAR_20] = 0.f;
                continue;
            }
            VAR_23 = VAR_21 * VAR_12;
            if (VAR_23 >= VAR_14)
                continue;
            VAR_22 = VAR_23 * VAR_5->pdiff_lut_scale;
            FUNC_0(VAR_22 < VAR_0);
            VAR_23 = VAR_5->weight_lut[VAR_22];
            VAR_16 += VAR_23 * VAR_10[VAR_15 - VAR_7 + VAR_20 + (VAR_20 >= VAR_7)];
            VAR_17 += VAR_23;
        }

        VAR_16 += VAR_10[VAR_15];
        VAR_17 += 1;

        switch (VAR_9) {
        case 130: VAR_13[VAR_15 - VAR_7] = VAR_10[VAR_15]; break;
        case 128: VAR_13[VAR_15 - VAR_7] = VAR_16 / VAR_17; break;
        case 129: VAR_13[VAR_15 - VAR_7] = VAR_10[VAR_15] - (VAR_16 / VAR_17); break;
        }
    }

    return 0;
}
