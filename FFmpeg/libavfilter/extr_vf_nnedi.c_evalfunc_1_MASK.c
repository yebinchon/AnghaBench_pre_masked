
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {float* input; float* temp; int* padded_stride; int* padded_width; int* padded_height; int* dst_stride; int* field; scalar_t__* dstp; scalar_t__* paddedp; } ;
struct TYPE_6__ {float** weights1; int qual; int asize; int nns; int xdia; int ydia; int nb_planes; int process_plane; int max_value; int (* wae5 ) (float*,int const,float*) ;int (* expfunc ) (float*,int const) ;int (* dot_prod ) (TYPE_1__*,float*,float*,float*,int const,int const,float*) ;int (* extract ) (int const*,int const,int const,int const,float*,float*) ;} ;
typedef TYPE_1__ NNEDIContext ;
typedef TYPE_2__ FrameData ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int const*,int const,int const,int const,float*,float*) ;
 int FUNC_3 (TYPE_1__*,float*,float*,float*,int const,int const,float*) ;
 int FUNC_4 (float*,int const) ;
 int FUNC_5 (float*,int const,float*) ;

__attribute__((used)) static void FUNC_6(NNEDIContext *VAR_0, FrameData *VAR_1)
{
    float *VAR_2 = VAR_1->input;
    float *VAR_3 = VAR_1->temp;
    float **VAR_4 = VAR_0->weights1;
    const int VAR_5 = VAR_0->qual;
    const int VAR_6 = VAR_0->asize;
    const int VAR_7 = VAR_0->nns;
    const int VAR_8 = VAR_0->xdia;
    const int VAR_9 = (VAR_8 / 2) - 1;
    const int VAR_10 = VAR_0->ydia;
    const float VAR_11 = 1.0f / (float)VAR_5;
    int VAR_12, VAR_13, VAR_14, VAR_15;

    for (VAR_12 = 0; VAR_12 < VAR_0->nb_planes; VAR_12++) {
        const uint8_t *VAR_16 = (const uint8_t *)VAR_1->paddedp[VAR_12];
        const int VAR_17 = VAR_1->padded_stride[VAR_12] / sizeof(uint8_t);

        const int VAR_18 = VAR_1->padded_width[VAR_12];
        const int VAR_19 = VAR_1->padded_height[VAR_12];

        uint8_t *VAR_20 = (uint8_t *)VAR_1->dstp[VAR_12];
        const int VAR_21 = VAR_1->dst_stride[VAR_12] / sizeof(uint8_t);

        const int VAR_22 = VAR_1->field[VAR_12];
        const int VAR_23 = VAR_19 - 12;
        const uint8_t *VAR_24;

        if (!(VAR_0->process_plane & (1 << VAR_12)))
            continue;

        VAR_16 += (VAR_22 + 6) * VAR_17;
        VAR_20 += VAR_22 * VAR_21 - 32;
        VAR_24 = VAR_16 - (VAR_10 - 1) * VAR_17 - VAR_9;

        for (VAR_13 = VAR_22; VAR_13 < VAR_23; VAR_13 += 2) {
            for (VAR_14 = 32; VAR_14 < VAR_18 - 32; VAR_14++) {
                float VAR_25[4];

                if (VAR_20[VAR_14] != 255)
                    continue;

                VAR_0->extract((const uint8_t *)(VAR_24 + VAR_14), VAR_17, VAR_8, VAR_10, VAR_25, VAR_2);
                for (VAR_15 = 0; VAR_15 < VAR_5; VAR_15++) {
                    VAR_0->dot_prod(VAR_0, VAR_2, VAR_4[VAR_15], VAR_3, VAR_7 * 2, VAR_6, VAR_25 + 2);
                    VAR_0->expfunc(VAR_3, VAR_7);
                    VAR_0->wae5(VAR_3, VAR_7, VAR_25);
                }

                VAR_20[VAR_14] = FUNC_1(FUNC_0((int)(VAR_25[3] * VAR_11 + 0.5f), 0), VAR_0->max_value);
            }
            VAR_24 += VAR_17 * 2;
            VAR_20 += VAR_21 * 2;
        }
    }
}
