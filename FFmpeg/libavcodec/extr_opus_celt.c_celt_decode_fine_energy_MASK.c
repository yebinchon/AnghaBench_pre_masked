
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {float* energy; } ;
struct TYPE_4__ {int start_band; int end_band; int* fine_bits; int channels; TYPE_2__* block; } ;
typedef int OpusRangeCoder ;
typedef TYPE_1__ CeltFrame ;
typedef TYPE_2__ CeltBlock ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static void FUNC_1(CeltFrame *VAR_0, OpusRangeCoder *VAR_1)
{
    int VAR_2;
    for (VAR_2 = VAR_0->start_band; VAR_2 < VAR_0->end_band; VAR_2++) {
        int VAR_3;
        if (!VAR_0->fine_bits[VAR_2])
            continue;

        for (VAR_3 = 0; VAR_3 < VAR_0->channels; VAR_3++) {
            CeltBlock *VAR_4 = &VAR_0->block[VAR_3];
            int VAR_5;
            float VAR_6;
            VAR_5 = FUNC_0(VAR_1, VAR_0->fine_bits[VAR_2]);
            VAR_6 = (VAR_5 + 0.5f) * (1 << (14 - VAR_0->fine_bits[VAR_2])) / 16384.0f - 0.5f;
            VAR_4->energy[VAR_2] += VAR_6;
        }
    }
}
