
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int block_size; int* planewidth; int pgroup_size; int group_size; float sigma; int (* get_block_row ) (int const*,int,int const,int const,int const,float*) ;TYPE_2__* slices; } ;
struct TYPE_6__ {int nb_match_blocks; float* buffer; float* bufferh; float* bufferv; float* bufferz; float* rbuffer; float* rbufferh; float* rbufferv; float* rbufferz; float* num; float* den; int dcti; int gdcti; int gdctf; int dctf; TYPE_1__* match_blocks; } ;
struct TYPE_5__ {int y; int x; } ;
typedef TYPE_2__ SliceContext ;
typedef TYPE_3__ BM3DContext ;


 float FUNC_0 (float,float) ;
 int FUNC_1 (int ,float*) ;
 scalar_t__ FUNC_2 (float) ;
 int FUNC_3 (float*,float*,int const) ;
 int FUNC_4 (int const*,int,int const,int const,int const,float*) ;
 int FUNC_5 (int const*,int,int const,int const,int const,float*) ;

__attribute__((used)) static void FUNC_6(BM3DContext *VAR_0, const uint8_t *VAR_1, int VAR_2,
                                  const uint8_t *VAR_3, int VAR_4,
                                  int VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
    SliceContext *VAR_9 = &VAR_0->slices[VAR_8];
    const int VAR_10 = VAR_0->block_size * VAR_0->block_size;
    const int VAR_11 = VAR_9->nb_match_blocks;
    const int VAR_12 = VAR_0->block_size;
    const int VAR_13 = VAR_0->planewidth[VAR_7];
    const int VAR_14 = VAR_0->pgroup_size;
    const int VAR_15 = VAR_0->group_size;
    const float VAR_16 = VAR_0->sigma * VAR_0->sigma;
    float *VAR_17 = VAR_9->buffer;
    float *VAR_18 = VAR_9->bufferh;
    float *VAR_19 = VAR_9->bufferv;
    float *VAR_20 = VAR_9->bufferz;
    float *VAR_21 = VAR_9->rbuffer;
    float *VAR_22 = VAR_9->rbufferh;
    float *VAR_23 = VAR_9->rbufferv;
    float *VAR_24 = VAR_9->rbufferz;
    float VAR_25, VAR_26;
    float VAR_27 = 0;
    int VAR_28, VAR_29, VAR_30;

    for (VAR_30 = 0; VAR_30 < VAR_11; VAR_30++) {
        const int VAR_31 = VAR_9->match_blocks[VAR_30].y;
        const int VAR_32 = VAR_9->match_blocks[VAR_30].x;

        for (VAR_28 = 0; VAR_28 < VAR_12; VAR_28++) {
            VAR_0->get_block_row(VAR_1, VAR_2, VAR_31 + VAR_28, VAR_32, VAR_12, VAR_18 + VAR_12 * VAR_28);
            VAR_0->get_block_row(VAR_3, VAR_4, VAR_31 + VAR_28, VAR_32, VAR_12, VAR_22 + VAR_12 * VAR_28);
            FUNC_1(VAR_9->dctf, VAR_18 + VAR_12 * VAR_28);
            FUNC_1(VAR_9->dctf, VAR_22 + VAR_12 * VAR_28);
        }

        for (VAR_28 = 0; VAR_28 < VAR_12; VAR_28++) {
            for (VAR_29 = 0; VAR_29 < VAR_12; VAR_29++) {
                VAR_19[VAR_28 * VAR_12 + VAR_29] = VAR_18[VAR_29 * VAR_12 + VAR_28];
                VAR_23[VAR_28 * VAR_12 + VAR_29] = VAR_22[VAR_29 * VAR_12 + VAR_28];
            }
            FUNC_1(VAR_9->dctf, VAR_19 + VAR_28 * VAR_12);
            FUNC_1(VAR_9->dctf, VAR_23 + VAR_28 * VAR_12);
        }

        for (VAR_28 = 0; VAR_28 < VAR_12; VAR_28++) {
            FUNC_3(VAR_17 + VAR_30 * VAR_10 + VAR_28 * VAR_12,
                   VAR_19 + VAR_28 * VAR_12, VAR_12 * 4);
            FUNC_3(VAR_21 + VAR_30 * VAR_10 + VAR_28 * VAR_12,
                   VAR_23 + VAR_28 * VAR_12, VAR_12 * 4);
        }
    }

    for (VAR_28 = 0; VAR_28 < VAR_12; VAR_28++) {
        for (VAR_29 = 0; VAR_29 < VAR_12; VAR_29++) {
            for (VAR_30 = 0; VAR_30 < VAR_11; VAR_30++) {
                VAR_20[VAR_30] = VAR_17[VAR_10 * VAR_30 + VAR_28 * VAR_12 + VAR_29];
                VAR_24[VAR_30] = VAR_21[VAR_10 * VAR_30 + VAR_28 * VAR_12 + VAR_29];
            }
            if (VAR_15 > 1) {
                FUNC_1(VAR_9->gdctf, VAR_20);
                FUNC_1(VAR_9->gdctf, VAR_24);
            }
            VAR_20 += VAR_14;
            VAR_24 += VAR_14;
        }
    }

    VAR_20 = VAR_9->bufferz;
    VAR_24 = VAR_9->rbufferz;

    for (VAR_28 = 0; VAR_28 < VAR_12; VAR_28++) {
        for (VAR_29 = 0; VAR_29 < VAR_12; VAR_29++) {
            for (VAR_30 = 0; VAR_30 < VAR_11; VAR_30++) {
                const float VAR_33 = VAR_24[VAR_30] * VAR_24[VAR_30];
                float VAR_34 = VAR_33 / (VAR_33 + VAR_16);

                if (FUNC_2(VAR_34))
                   VAR_34 = 1;
                VAR_20[VAR_30] *= VAR_34;
                VAR_27 += VAR_34 * VAR_34;
            }
            VAR_20 += VAR_14;
            VAR_24 += VAR_14;
        }
    }

    VAR_20 = VAR_9->bufferz;
    VAR_17 = VAR_9->buffer;
    for (VAR_28 = 0; VAR_28 < VAR_12; VAR_28++) {
        for (VAR_29 = 0; VAR_29 < VAR_12; VAR_29++) {
            if (VAR_15 > 1)
                FUNC_1(VAR_9->gdcti, VAR_20);
            for (VAR_30 = 0; VAR_30 < VAR_11; VAR_30++) {
                VAR_17[VAR_10 * VAR_30 + VAR_28 * VAR_12 + VAR_29] = VAR_20[VAR_30];
            }
            VAR_20 += VAR_14;
        }
    }

    VAR_27 = FUNC_0(VAR_27, 1e-15f);
    VAR_25 = 1.f / VAR_27;
    VAR_26 = VAR_25;

    for (VAR_30 = 0; VAR_30 < VAR_11; VAR_30++) {
        float *VAR_35 = VAR_9->num + VAR_5 * VAR_13 + VAR_6;
        float *VAR_36 = VAR_9->den + VAR_5 * VAR_13 + VAR_6;

        for (VAR_28 = 0; VAR_28 < VAR_12; VAR_28++) {
            FUNC_3(VAR_19 + VAR_28 * VAR_12,
                   VAR_17 + VAR_30 * VAR_10 + VAR_28 * VAR_12,
                   VAR_12 * 4);
        }

        for (VAR_28 = 0; VAR_28 < VAR_12; VAR_28++) {
            FUNC_1(VAR_9->dcti, VAR_19 + VAR_12 * VAR_28);
            for (VAR_29 = 0; VAR_29 < VAR_12; VAR_29++) {
                VAR_18[VAR_29 * VAR_12 + VAR_28] = VAR_19[VAR_28 * VAR_12 + VAR_29];
            }
        }

        for (VAR_28 = 0; VAR_28 < VAR_12; VAR_28++) {
            FUNC_1(VAR_9->dcti, VAR_18 + VAR_12 * VAR_28);
            for (VAR_29 = 0; VAR_29 < VAR_12; VAR_29++) {
                VAR_35[VAR_29] += VAR_18[VAR_28 * VAR_12 + VAR_29] * VAR_26;
                VAR_36[VAR_29] += VAR_25;
            }
            VAR_35 += VAR_13;
            VAR_36 += VAR_13;
        }
    }
}
