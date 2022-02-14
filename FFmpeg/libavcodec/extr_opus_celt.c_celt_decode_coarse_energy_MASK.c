
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {double* energy; } ;
struct TYPE_4__ {size_t size; scalar_t__ framebits; int channels; int start_band; int end_band; TYPE_2__* block; } ;
typedef int OpusRangeCoder ;
typedef TYPE_1__ CeltFrame ;
typedef TYPE_2__ CeltBlock ;


 int VAR_0 ;
 float FUNC_0 (float,float) ;
 int FUNC_1 (int,int) ;
 float* VAR_1 ;
 float* VAR_2 ;
 int*** VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int ) ;
 float FUNC_3 (int *,int const,int const) ;
 scalar_t__ FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(CeltFrame *VAR_5, OpusRangeCoder *VAR_6)
{
    int VAR_7, VAR_8;
    float VAR_9[2] = { 0 };
    float VAR_10 = VAR_1[VAR_5->size];
    float VAR_11 = VAR_2[VAR_5->size];
    const uint8_t *VAR_12 = VAR_3[VAR_5->size][0];


    if (FUNC_5(VAR_6) + 3 <= VAR_5->framebits && FUNC_4(VAR_6, 3)) {
        VAR_10 = 0.0f;
        VAR_11 = 1.0f - (4915.0f/32768.0f);
        VAR_12 = VAR_3[VAR_5->size][1];
    }

    for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
        for (VAR_8 = 0; VAR_8 < VAR_5->channels; VAR_8++) {
            CeltBlock *VAR_13 = &VAR_5->block[VAR_8];
            float VAR_14;
            int VAR_15;

            if (VAR_7 < VAR_5->start_band || VAR_7 >= VAR_5->end_band) {
                VAR_13->energy[VAR_7] = 0.0;
                continue;
            }

            VAR_15 = VAR_5->framebits - FUNC_5(VAR_6);
            if (VAR_15 >= 15) {

                int VAR_16 = FUNC_1(VAR_7, 20) << 1;
                VAR_14 = FUNC_3(VAR_6, VAR_12[VAR_16] << 7, VAR_12[VAR_16+1] << 6);
            } else if (VAR_15 >= 2) {
                int VAR_17 = FUNC_2(VAR_6, VAR_4);
                VAR_14 = (VAR_17>>1) ^ -(VAR_17&1);
            } else if (VAR_15 >= 1) {
                VAR_14 = -(float)FUNC_4(VAR_6, 1);
            } else VAR_14 = -1;

            VAR_13->energy[VAR_7] = FUNC_0(-9.0f, VAR_13->energy[VAR_7]) * VAR_10 + VAR_9[VAR_8] + VAR_14;
            VAR_9[VAR_8] += VAR_11 * VAR_14;
        }
    }
}
