
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int framebits; int start_band; int end_band; int channels; int* fine_priority; scalar_t__* fine_bits; TYPE_1__* block; } ;
struct TYPE_4__ {float* energy; } ;
typedef int OpusRangeCoder ;
typedef TYPE_2__ CeltFrame ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(CeltFrame *VAR_1, OpusRangeCoder *VAR_2)
{
    int VAR_3, VAR_4, VAR_5;
    int VAR_6 = VAR_1->framebits - FUNC_1(VAR_2);

    for (VAR_3 = 0; VAR_3 < 2; VAR_3++) {
        for (VAR_4 = VAR_1->start_band; VAR_4 < VAR_1->end_band && VAR_6 >= VAR_1->channels; VAR_4++) {
            if (VAR_1->fine_priority[VAR_4] != VAR_3 || VAR_1->fine_bits[VAR_4] >= VAR_0)
                continue;

            for (VAR_5 = 0; VAR_5 < VAR_1->channels; VAR_5++) {
                int VAR_7;
                float VAR_8;
                VAR_7 = FUNC_0(VAR_2, 1);
                VAR_8 = (VAR_7 - 0.5f) * (1 << (14 - VAR_1->fine_bits[VAR_4] - 1)) / 16384.0f;
                VAR_1->block[VAR_5].energy[VAR_4] += VAR_8;
                VAR_6--;
            }
        }
    }
}
