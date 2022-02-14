
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_6__ {int* res; int** scf_idx; scalar_t__ msf; } ;
struct TYPE_5__ {float*** sb_samples; float** Q; TYPE_2__* bands; } ;
typedef TYPE_1__ MPCContext ;
typedef TYPE_2__ Band ;


 int VAR_0 ;
 int FUNC_0 (float***,int ,int) ;
 float* VAR_1 ;
 float* VAR_2 ;
 int FUNC_1 (TYPE_1__*,int **,int) ;

void FUNC_2(MPCContext * VAR_3, int VAR_4, int16_t **VAR_5,
                                 int VAR_6)
{
    int VAR_7, VAR_8, VAR_9;
    Band *VAR_10 = VAR_3->bands;
    int VAR_11;
    float VAR_12;


    FUNC_0(VAR_3->sb_samples, 0, sizeof(VAR_3->sb_samples));
    VAR_11 = 0;
    for(VAR_7 = 0; VAR_7 <= VAR_4; VAR_7++, VAR_11 += VAR_0){
        for(VAR_9 = 0; VAR_9 < 2; VAR_9++){
            if(VAR_10[VAR_7].res[VAR_9]){
                VAR_8 = 0;
                VAR_12 = (VAR_1+1)[VAR_10[VAR_7].res[VAR_9]] * VAR_2[VAR_10[VAR_7].scf_idx[VAR_9][0] & 0xFF];
                for(; VAR_8 < 12; VAR_8++)
                    VAR_3->sb_samples[VAR_9][VAR_8][VAR_7] = VAR_12 * VAR_3->Q[VAR_9][VAR_8 + VAR_11];
                VAR_12 = (VAR_1+1)[VAR_10[VAR_7].res[VAR_9]] * VAR_2[VAR_10[VAR_7].scf_idx[VAR_9][1] & 0xFF];
                for(; VAR_8 < 24; VAR_8++)
                    VAR_3->sb_samples[VAR_9][VAR_8][VAR_7] = VAR_12 * VAR_3->Q[VAR_9][VAR_8 + VAR_11];
                VAR_12 = (VAR_1+1)[VAR_10[VAR_7].res[VAR_9]] * VAR_2[VAR_10[VAR_7].scf_idx[VAR_9][2] & 0xFF];
                for(; VAR_8 < 36; VAR_8++)
                    VAR_3->sb_samples[VAR_9][VAR_8][VAR_7] = VAR_12 * VAR_3->Q[VAR_9][VAR_8 + VAR_11];
            }
        }
        if(VAR_10[VAR_7].msf){
            int VAR_13, VAR_14;
            for(VAR_8 = 0; VAR_8 < VAR_0; VAR_8++){
                VAR_13 = VAR_3->sb_samples[0][VAR_8][VAR_7];
                VAR_14 = VAR_3->sb_samples[1][VAR_8][VAR_7];
                VAR_3->sb_samples[0][VAR_8][VAR_7] = VAR_13 + VAR_14;
                VAR_3->sb_samples[1][VAR_8][VAR_7] = VAR_13 - VAR_14;
            }
        }
    }

    FUNC_1(VAR_3, VAR_5, VAR_6);
}
