
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int block_size; int* planewidth; int pgroup_size; int group_size; float hard_threshold; float sigma; int (* get_block_row ) (int const*,int,int const,int const,int const,float*) ;TYPE_2__* slices; } ;
struct TYPE_6__ {int nb_match_blocks; float* buffer; float* bufferh; float* bufferv; float* bufferz; float* num; float* den; int dcti; int gdcti; int gdctf; int dctf; TYPE_1__* match_blocks; } ;
struct TYPE_5__ {int y; int x; } ;
typedef TYPE_2__ SliceContext ;
typedef TYPE_3__ BM3DContext ;


 int FUNC_0 (int ,float*) ;
 int FUNC_1 (float*,float*,int const) ;
 float FUNC_2 (float) ;
 int FUNC_3 (int const*,int,int const,int const,int const,float*) ;

__attribute__((used)) static void FUNC_4(BM3DContext *VAR_0, const uint8_t *VAR_1, int VAR_2,
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
    float *VAR_16 = VAR_9->buffer;
    float *VAR_17 = VAR_9->bufferh;
    float *VAR_18 = VAR_9->bufferv;
    float *VAR_19 = VAR_9->bufferz;
    float VAR_20[4];
    float VAR_21, VAR_22;
    int VAR_23 = 0;
    int VAR_24, VAR_25, VAR_26;

    for (VAR_26 = 0; VAR_26 < VAR_11; VAR_26++) {
        const int VAR_27 = VAR_9->match_blocks[VAR_26].y;
        const int VAR_28 = VAR_9->match_blocks[VAR_26].x;

        for (VAR_24 = 0; VAR_24 < VAR_12; VAR_24++) {
            VAR_0->get_block_row(VAR_1, VAR_2, VAR_27 + VAR_24, VAR_28, VAR_12, VAR_17 + VAR_12 * VAR_24);
            FUNC_0(VAR_9->dctf, VAR_17 + VAR_12 * VAR_24);
        }

        for (VAR_24 = 0; VAR_24 < VAR_12; VAR_24++) {
            for (VAR_25 = 0; VAR_25 < VAR_12; VAR_25++) {
                VAR_18[VAR_24 * VAR_12 + VAR_25] = VAR_17[VAR_25 * VAR_12 + VAR_24];
            }
            FUNC_0(VAR_9->dctf, VAR_18 + VAR_24 * VAR_12);
        }

        for (VAR_24 = 0; VAR_24 < VAR_12; VAR_24++) {
            FUNC_1(VAR_16 + VAR_26 * VAR_10 + VAR_24 * VAR_12,
                   VAR_18 + VAR_24 * VAR_12, VAR_12 * 4);
        }
    }

    for (VAR_24 = 0; VAR_24 < VAR_12; VAR_24++) {
        for (VAR_25 = 0; VAR_25 < VAR_12; VAR_25++) {
            for (VAR_26 = 0; VAR_26 < VAR_11; VAR_26++)
                VAR_19[VAR_26] = VAR_16[VAR_10 * VAR_26 + VAR_24 * VAR_12 + VAR_25];
            if (VAR_15 > 1)
                FUNC_0(VAR_9->gdctf, VAR_19);
            VAR_19 += VAR_14;
        }
    }

    VAR_20[0] = VAR_0->hard_threshold * VAR_0->sigma;
    VAR_20[1] = VAR_20[0] * FUNC_2(2.f);
    VAR_20[2] = VAR_20[0] * 2.f;
    VAR_20[3] = VAR_20[0] * FUNC_2(8.f);
    VAR_19 = VAR_9->bufferz;

    for (VAR_24 = 0; VAR_24 < VAR_12; VAR_24++) {
        for (VAR_25 = 0; VAR_25 < VAR_12; VAR_25++) {
            for (VAR_26 = 0; VAR_26 < VAR_11; VAR_26++) {
                const float VAR_29 = VAR_20[(VAR_25 == 0) + (VAR_24 == 0) + (VAR_26 == 0)];

                if (VAR_19[VAR_26] > VAR_29 || VAR_19[VAR_26] < -VAR_29) {
                    VAR_23++;
                } else {
                    VAR_19[VAR_26] = 0;
                }
            }
            VAR_19 += VAR_14;
        }
    }

    VAR_19 = VAR_9->bufferz;
    VAR_16 = VAR_9->buffer;
    for (VAR_24 = 0; VAR_24 < VAR_12; VAR_24++) {
        for (VAR_25 = 0; VAR_25 < VAR_12; VAR_25++) {
            if (VAR_15 > 1)
                FUNC_0(VAR_9->gdcti, VAR_19);
            for (VAR_26 = 0; VAR_26 < VAR_11; VAR_26++) {
                VAR_16[VAR_10 * VAR_26 + VAR_24 * VAR_12 + VAR_25] = VAR_19[VAR_26];
            }
            VAR_19 += VAR_14;
        }
    }

    VAR_21 = VAR_23 < 1 ? 1.f : 1.f / VAR_23;
    VAR_22 = VAR_21;

    VAR_16 = VAR_9->buffer;
    for (VAR_26 = 0; VAR_26 < VAR_11; VAR_26++) {
        float *VAR_30 = VAR_9->num + VAR_5 * VAR_13 + VAR_6;
        float *VAR_31 = VAR_9->den + VAR_5 * VAR_13 + VAR_6;

        for (VAR_24 = 0; VAR_24 < VAR_12; VAR_24++) {
            FUNC_1(VAR_18 + VAR_24 * VAR_12,
                   VAR_16 + VAR_26 * VAR_10 + VAR_24 * VAR_12,
                   VAR_12 * 4);
        }

        for (VAR_24 = 0; VAR_24 < VAR_12; VAR_24++) {
            FUNC_0(VAR_9->dcti, VAR_18 + VAR_12 * VAR_24);
            for (VAR_25 = 0; VAR_25 < VAR_12; VAR_25++) {
                VAR_17[VAR_25 * VAR_12 + VAR_24] = VAR_18[VAR_24 * VAR_12 + VAR_25];
            }
        }

        for (VAR_24 = 0; VAR_24 < VAR_12; VAR_24++) {
            FUNC_0(VAR_9->dcti, VAR_17 + VAR_12 * VAR_24);
            for (VAR_25 = 0; VAR_25 < VAR_12; VAR_25++) {
                VAR_30[VAR_25] += VAR_17[VAR_24 * VAR_12 + VAR_25] * VAR_22;
                VAR_31[VAR_25] += VAR_21;
            }
            VAR_30 += VAR_13;
            VAR_31 += VAR_13;
        }
    }
}
