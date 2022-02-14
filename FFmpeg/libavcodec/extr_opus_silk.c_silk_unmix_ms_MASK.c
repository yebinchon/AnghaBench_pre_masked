
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flength; float* prev_stereo_weights; float* stereo_weights; size_t bandwidth; TYPE_1__* frame; } ;
struct TYPE_4__ {int output; } ;
typedef TYPE_2__ SilkContext ;


 int VAR_0 ;
 float FUNC_0 (int,double,double) ;
 int* VAR_1 ;
 int FUNC_1 (float*,float*,int) ;

__attribute__((used)) static void FUNC_2(SilkContext *VAR_2, float *VAR_3, float *VAR_4)
{
    float *VAR_5 = VAR_2->frame[0].output + VAR_0 - VAR_2->flength;
    float *VAR_6 = VAR_2->frame[1].output + VAR_0 - VAR_2->flength;
    float VAR_7 = VAR_2->prev_stereo_weights[0];
    float VAR_8 = VAR_2->prev_stereo_weights[1];
    float VAR_9 = VAR_2->stereo_weights[0];
    float VAR_10 = VAR_2->stereo_weights[1];
    int VAR_11 = VAR_1[VAR_2->bandwidth];
    int VAR_12;

    for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
        float VAR_13 = VAR_7 + VAR_12 * (VAR_9 - VAR_7) / VAR_11;
        float VAR_14 = VAR_8 + VAR_12 * (VAR_10 - VAR_8) / VAR_11;
        float VAR_15 = 0.25 * (VAR_5[VAR_12 - 2] + 2 * VAR_5[VAR_12 - 1] + VAR_5[VAR_12]);

        VAR_3[VAR_12] = FUNC_0((1 + VAR_14) * VAR_5[VAR_12 - 1] + VAR_6[VAR_12 - 1] + VAR_13 * VAR_15, -1.0, 1.0);
        VAR_4[VAR_12] = FUNC_0((1 - VAR_14) * VAR_5[VAR_12 - 1] - VAR_6[VAR_12 - 1] - VAR_13 * VAR_15, -1.0, 1.0);
    }

    for (; VAR_12 < VAR_2->flength; VAR_12++) {
        float VAR_16 = 0.25 * (VAR_5[VAR_12 - 2] + 2 * VAR_5[VAR_12 - 1] + VAR_5[VAR_12]);

        VAR_3[VAR_12] = FUNC_0((1 + VAR_10) * VAR_5[VAR_12 - 1] + VAR_6[VAR_12 - 1] + VAR_9 * VAR_16, -1.0, 1.0);
        VAR_4[VAR_12] = FUNC_0((1 - VAR_10) * VAR_5[VAR_12 - 1] - VAR_6[VAR_12 - 1] - VAR_9 * VAR_16, -1.0, 1.0);
    }

    FUNC_1(VAR_2->prev_stereo_weights, VAR_2->stereo_weights, sizeof(VAR_2->stereo_weights));
}
