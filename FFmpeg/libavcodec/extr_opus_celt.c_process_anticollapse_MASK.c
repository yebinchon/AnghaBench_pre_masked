
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {float** prev_energy; float* energy; int* collapse_masks; } ;
struct TYPE_6__ {int start_band; int end_band; int* pulses; int size; int channels; TYPE_2__* block; } ;
typedef TYPE_1__ CeltFrame ;
typedef TYPE_2__ CeltBlock ;


 float FUNC_0 (float,float) ;
 float FUNC_1 (float,float) ;
 float VAR_0 ;
 int FUNC_2 (float*,int,float) ;
 int FUNC_3 (TYPE_1__*) ;
 float FUNC_4 (int) ;
 int* VAR_1 ;
 int* VAR_2 ;
 float FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(CeltFrame *VAR_3, CeltBlock *VAR_4, float *VAR_5)
{
    int VAR_6, VAR_7, VAR_8;

    for (VAR_6 = VAR_3->start_band; VAR_6 < VAR_3->end_band; VAR_6++) {
        int VAR_9 = 0;
        float *VAR_10;
        float VAR_11[2];
        float VAR_12, VAR_13;
        float VAR_14, VAR_15;
        int VAR_16;


        VAR_16 = (1 + VAR_3->pulses[VAR_6]) / (VAR_2[VAR_6] << VAR_3->size);
        VAR_14 = FUNC_4(-1.0 - 0.125f * VAR_16);
        VAR_15 = 1.0f / FUNC_5(VAR_2[VAR_6] << VAR_3->size);

        VAR_10 = VAR_5 + (VAR_1[VAR_6] << VAR_3->size);

        VAR_11[0] = VAR_4->prev_energy[0][VAR_6];
        VAR_11[1] = VAR_4->prev_energy[1][VAR_6];
        if (VAR_3->channels == 1) {
            CeltBlock *VAR_17 = &VAR_3->block[1];

            VAR_11[0] = FUNC_0(VAR_11[0], VAR_17->prev_energy[0][VAR_6]);
            VAR_11[1] = FUNC_0(VAR_11[1], VAR_17->prev_energy[1][VAR_6]);
        }
        VAR_12 = VAR_4->energy[VAR_6] - FUNC_1(VAR_11[0], VAR_11[1]);
        VAR_12 = FUNC_0(0, VAR_12);



        VAR_13 = FUNC_4(1 - VAR_12);
        if (VAR_3->size == 3)
            VAR_13 *= VAR_0;
        VAR_13 = FUNC_1(VAR_14, VAR_13) * VAR_15;
        for (VAR_8 = 0; VAR_8 < 1 << VAR_3->size; VAR_8++) {

            if (!(VAR_4->collapse_masks[VAR_6] & 1 << VAR_8)) {

                for (VAR_7 = 0; VAR_7 < VAR_2[VAR_6]; VAR_7++)
                    VAR_10[(VAR_7 << VAR_3->size) + VAR_8] = (FUNC_3(VAR_3) & 0x8000) ? VAR_13 : -VAR_13;
                VAR_9 = 1;
            }
        }


        if (VAR_9)
            FUNC_2(VAR_10, VAR_2[VAR_6] << VAR_3->size, 1.0f);
    }
}
