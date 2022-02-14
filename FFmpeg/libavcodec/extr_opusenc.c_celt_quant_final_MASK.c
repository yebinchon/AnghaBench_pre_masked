
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {float* error_energy; } ;
struct TYPE_4__ {int start_band; int end_band; scalar_t__ framebits; scalar_t__ channels; int* fine_priority; int* fine_bits; TYPE_2__* block; } ;
typedef int OpusRangeCoder ;
typedef int OpusEncContext ;
typedef TYPE_1__ CeltFrame ;
typedef TYPE_2__ CeltBlock ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (float const) ;
 int FUNC_1 (int *,int const,int) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(OpusEncContext *VAR_1, OpusRangeCoder *VAR_2, CeltFrame *VAR_3)
{
    for (int VAR_4 = 0; VAR_4 < 2; VAR_4++) {
        for (int VAR_5 = VAR_3->start_band; VAR_5 < VAR_3->end_band && (VAR_3->framebits - FUNC_2(VAR_2)) >= VAR_3->channels; VAR_5++) {
            if (VAR_3->fine_priority[VAR_5] != VAR_4 || VAR_3->fine_bits[VAR_5] >= VAR_0)
                continue;
            for (int VAR_6 = 0; VAR_6 < VAR_3->channels; VAR_6++) {
                CeltBlock *VAR_7 = &VAR_3->block[VAR_6];
                const float VAR_8 = VAR_7->error_energy[VAR_5];
                const float VAR_9 = 0.5f * (1 << (14 - VAR_3->fine_bits[VAR_5] - 1)) / 16384.0f;
                const int VAR_10 = FUNC_0(VAR_8 + VAR_9) < FUNC_0(VAR_8 - VAR_9);
                FUNC_1(VAR_2, VAR_10, 1);
                VAR_7->error_energy[VAR_5] -= VAR_9*(1 - 2*VAR_10);
            }
        }
    }
}
