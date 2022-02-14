
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef float uint8_t ;
typedef float uint16_t ;
struct TYPE_8__ {int nb_planes; int* planeheight; int* planewidth; float* block; int nsteps; int planes; int bpc; int depth; int in; int** vlowsize; int** vhighsize; int** hlowsize; int** hhighsize; int peak; int out; int tmp; int percent; int threshold; int (* thresholding ) (float*,int const,int const,int const,int ,int ,int) ;} ;
typedef TYPE_1__ VagueDenoiserContext ;
struct TYPE_9__ {float** data; int* linesize; } ;
typedef TYPE_2__ AVFrame ;


 int VAR_0 ;
 float FUNC_0 (float const,int ,int ) ;
 float FUNC_1 (float const) ;
 int FUNC_2 (float*,int,float*,int,int,int) ;
 int FUNC_3 (float*,...) ;
 int FUNC_4 (int ,float*,int const,int const) ;
 int FUNC_5 (float*,int const,int,int const) ;
 int FUNC_6 (int,int ,int ,int const,TYPE_1__*) ;
 int FUNC_7 (float*,int const,int const,int const,int ,int ,int) ;
 int FUNC_8 (int,int ,int,int,TYPE_1__*) ;

__attribute__((used)) static void FUNC_9(VagueDenoiserContext *VAR_1, AVFrame *VAR_2, AVFrame *VAR_3)
{
    int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;

    for (VAR_4 = 0; VAR_4 < VAR_1->nb_planes; VAR_4++) {
        const int VAR_9 = VAR_1->planeheight[VAR_4];
        const int VAR_10 = VAR_1->planewidth[VAR_4];
        const uint8_t *VAR_11 = VAR_2->data[VAR_4];
        const uint16_t *VAR_12 = (const uint16_t *)VAR_2->data[VAR_4];
        uint8_t *VAR_13 = VAR_3->data[VAR_4];
        uint16_t *VAR_14 = (uint16_t *)VAR_3->data[VAR_4];
        float *VAR_15 = VAR_1->block;
        int VAR_16 = VAR_10;
        int VAR_17 = VAR_9;
        int VAR_18 = VAR_1->nsteps;
        int VAR_19 = VAR_1->nsteps;
        const float *VAR_20 = VAR_1->block;

        if (!((1 << VAR_4) & VAR_1->planes)) {
            FUNC_2(VAR_3->data[VAR_4], VAR_3->linesize[VAR_4], VAR_2->data[VAR_4], VAR_2->linesize[VAR_4],
                                VAR_1->planewidth[VAR_4] * VAR_1->bpc, VAR_1->planeheight[VAR_4]);
            continue;
        }

        if (VAR_1->depth <= 8) {
            for (VAR_5 = 0; VAR_5 < VAR_9; VAR_5++) {
                for (VAR_6 = 0; VAR_6 < VAR_10; VAR_6++)
                    VAR_15[VAR_6] = VAR_11[VAR_6];
                VAR_11 += VAR_2->linesize[VAR_4];
                VAR_15 += VAR_10;
            }
        } else {
            for (VAR_5 = 0; VAR_5 < VAR_9; VAR_5++) {
                for (VAR_6 = 0; VAR_6 < VAR_10; VAR_6++)
                    VAR_15[VAR_6] = VAR_12[VAR_6];
                VAR_12 += VAR_2->linesize[VAR_4] / 2;
                VAR_15 += VAR_10;
            }
        }

        while (VAR_18--) {
            int VAR_21 = (VAR_16 + 1) >> 1;
            float *VAR_22 = VAR_1->block;
            for (VAR_8 = 0; VAR_8 < VAR_17; VAR_8++) {
                FUNC_3(VAR_22, VAR_1->in + VAR_0, VAR_16);
                FUNC_8(VAR_1->in, VAR_1->out, VAR_16, VAR_21, VAR_1);
                FUNC_3(VAR_1->out + VAR_0, VAR_22, VAR_16);
                VAR_22 += VAR_10;
            }

            VAR_21 = (VAR_17 + 1) >> 1;
            VAR_22 = VAR_1->block;
            for (VAR_8 = 0; VAR_8 < VAR_16; VAR_8++) {
                FUNC_5(VAR_22, VAR_10, VAR_1->in + VAR_0, VAR_17);
                FUNC_8(VAR_1->in, VAR_1->out, VAR_17, VAR_21, VAR_1);
                FUNC_4(VAR_1->out + VAR_0, VAR_22, VAR_10, VAR_17);
                VAR_22++;
            }

            VAR_16 = (VAR_16 + 1) >> 1;
            VAR_17 = (VAR_17 + 1) >> 1;
        }

        VAR_1->thresholding(VAR_1->block, VAR_10, VAR_9, VAR_10, VAR_1->threshold, VAR_1->percent, VAR_1->nsteps);

        while (VAR_19--) {
            const int VAR_23 = VAR_1->vlowsize[VAR_4][VAR_19] + VAR_1->vhighsize[VAR_4][VAR_19];
            const int VAR_24 = VAR_1->hlowsize[VAR_4][VAR_19] + VAR_1->hhighsize[VAR_4][VAR_19];
            float * VAR_25 = VAR_1->block;
            for (VAR_7 = 0; VAR_7 < VAR_24; VAR_7++) {
                FUNC_5(VAR_25, VAR_10, VAR_1->in + VAR_0, VAR_23);
                FUNC_6(VAR_1->in, VAR_1->out, VAR_1->tmp, VAR_23, VAR_1);
                FUNC_4(VAR_1->out + VAR_0, VAR_25, VAR_10, VAR_23);
                VAR_25++;
            }

            VAR_25 = VAR_1->block;
            for (VAR_7 = 0; VAR_7 < VAR_23; VAR_7++) {
                FUNC_3(VAR_25, VAR_1->in + VAR_0, VAR_24);
                FUNC_6(VAR_1->in, VAR_1->out, VAR_1->tmp, VAR_24, VAR_1);
                FUNC_3(VAR_1->out + VAR_0, VAR_25, VAR_24);
                VAR_25 += VAR_10;
            }
        }

        if (VAR_1->depth <= 8) {
            for (VAR_5 = 0; VAR_5 < VAR_9; VAR_5++) {
                for (VAR_6 = 0; VAR_6 < VAR_10; VAR_6++)
                    VAR_13[VAR_6] = FUNC_1(VAR_20[VAR_6] + 0.5f);
                VAR_20 += VAR_10;
                VAR_13 += VAR_3->linesize[VAR_4];
            }
        } else {
            for (VAR_5 = 0; VAR_5 < VAR_9; VAR_5++) {
                for (VAR_6 = 0; VAR_6 < VAR_10; VAR_6++)
                    VAR_14[VAR_6] = FUNC_0(VAR_20[VAR_6] + 0.5f, 0, VAR_1->peak);
                VAR_20 += VAR_10;
                VAR_14 += VAR_3->linesize[VAR_4] / 2;
            }
        }
    }
}
