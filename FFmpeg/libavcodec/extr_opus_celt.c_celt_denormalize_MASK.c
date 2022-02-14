
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {float* energy; } ;
struct TYPE_5__ {int start_band; int end_band; int size; } ;
typedef TYPE_1__ CeltFrame ;
typedef TYPE_2__ CeltBlock ;


 int FUNC_0 (float,float) ;
 float FUNC_1 (int ) ;
 int* VAR_0 ;
 int* VAR_1 ;
 float* VAR_2 ;

__attribute__((used)) static void FUNC_2(CeltFrame *VAR_3, CeltBlock *VAR_4, float *VAR_5)
{
    int VAR_6, VAR_7;

    for (VAR_6 = VAR_3->start_band; VAR_6 < VAR_3->end_band; VAR_6++) {
        float *VAR_8 = VAR_5 + (VAR_0[VAR_6] << VAR_3->size);
        float VAR_9 = VAR_4->energy[VAR_6] + VAR_2[VAR_6];
        float VAR_10 = FUNC_1(FUNC_0(VAR_9, 32.0f));

        for (VAR_7 = 0; VAR_7 < VAR_1[VAR_6] << VAR_3->size; VAR_7++)
            VAR_8[VAR_7] *= VAR_10;
    }
}
