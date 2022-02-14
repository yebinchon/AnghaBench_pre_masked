
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {float* error_energy; } ;
struct TYPE_4__ {int start_band; int end_band; int* fine_bits; int channels; TYPE_2__* block; } ;
typedef int OpusRangeCoder ;
typedef TYPE_1__ CeltFrame ;
typedef TYPE_2__ CeltBlock ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (float) ;

__attribute__((used)) static void FUNC_3(CeltFrame *VAR_0, OpusRangeCoder *VAR_1)
{
    for (int VAR_2 = VAR_0->start_band; VAR_2 < VAR_0->end_band; VAR_2++) {
        if (!VAR_0->fine_bits[VAR_2])
            continue;
        for (int VAR_3 = 0; VAR_3 < VAR_0->channels; VAR_3++) {
            CeltBlock *VAR_4 = &VAR_0->block[VAR_3];
            int VAR_5, VAR_6 = (1 << VAR_0->fine_bits[VAR_2]);
            float VAR_7, VAR_8 = 0.5f - VAR_4->error_energy[VAR_2];
            VAR_5 = FUNC_0(FUNC_2(VAR_8*VAR_6), 0, VAR_6 - 1);
            FUNC_1(VAR_1, VAR_5, VAR_0->fine_bits[VAR_2]);
            VAR_7 = 0.5f - ((VAR_5 + 0.5f) * (1 << (14 - VAR_0->fine_bits[VAR_2])) / 16384.0f);
            VAR_4->error_energy[VAR_2] -= VAR_7;
        }
    }
}
