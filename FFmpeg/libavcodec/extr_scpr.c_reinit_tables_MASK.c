
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int** run_model; int** op_model; int* range_model; int* count_model; int* fill_model; int** sxy_model; int** mv_model; TYPE_1__** pixel_model; } ;
struct TYPE_4__ {int total_freq; int* freq; int* lookup; } ;
typedef TYPE_2__ SCPRContext ;



__attribute__((used)) static void FUNC_0(SCPRContext *VAR_0)
{
    int VAR_1, VAR_2, VAR_3;

    for (VAR_1 = 0; VAR_1 < 3; VAR_1++) {
        for (VAR_3 = 0; VAR_3 < 4096; VAR_3++) {
            if (VAR_0->pixel_model[VAR_1][VAR_3].total_freq != 256) {
                for (VAR_2 = 0; VAR_2 < 256; VAR_2++)
                    VAR_0->pixel_model[VAR_1][VAR_3].freq[VAR_2] = 1;
                for (VAR_2 = 0; VAR_2 < 16; VAR_2++)
                    VAR_0->pixel_model[VAR_1][VAR_3].lookup[VAR_2] = 16;
                VAR_0->pixel_model[VAR_1][VAR_3].total_freq = 256;
            }
        }
    }

    for (VAR_3 = 0; VAR_3 < 6; VAR_3++) {
        uint32_t *VAR_4 = VAR_0->run_model[VAR_3];
        for (VAR_2 = 0; VAR_2 < 256; VAR_2++)
            VAR_4[VAR_2] = 1;
        VAR_4[256] = 256;
    }

    for (VAR_3 = 0; VAR_3 < 6; VAR_3++) {
        uint32_t *VAR_5 = VAR_0->op_model[VAR_3];
        for (VAR_2 = 0; VAR_2 < 6; VAR_2++)
            VAR_5[VAR_2] = 1;
        VAR_5[6] = 6;
    }

    for (VAR_2 = 0; VAR_2 < 256; VAR_2++) {
        VAR_0->range_model[VAR_2] = 1;
        VAR_0->count_model[VAR_2] = 1;
    }
    VAR_0->range_model[256] = 256;
    VAR_0->count_model[256] = 256;

    for (VAR_2 = 0; VAR_2 < 5; VAR_2++) {
        VAR_0->fill_model[VAR_2] = 1;
    }
    VAR_0->fill_model[5] = 5;

    for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
        for (VAR_2 = 0; VAR_2 < 16; VAR_2++) {
            VAR_0->sxy_model[VAR_3][VAR_2] = 1;
        }
        VAR_0->sxy_model[VAR_3][16] = 16;
    }

    for (VAR_2 = 0; VAR_2 < 512; VAR_2++) {
        VAR_0->mv_model[0][VAR_2] = 1;
        VAR_0->mv_model[1][VAR_2] = 1;
    }
    VAR_0->mv_model[0][512] = 512;
    VAR_0->mv_model[1][512] = 512;
}
