
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int size; int sample_number; scalar_t__ own_data; scalar_t__ offset; int * data; } ;
struct TYPE_6__ {size_t len; size_t size; TYPE_2__* samples; } ;
typedef TYPE_1__ HintSampleQueue ;
typedef TYPE_2__ HintSample ;


 TYPE_2__* FUNC_0 (TYPE_2__*,size_t,int) ;

__attribute__((used)) static void FUNC_1(HintSampleQueue *VAR_0, uint8_t *VAR_1, int VAR_2,
                              int VAR_3)
{


    if (VAR_2 <= 14)
        return;
    if (!VAR_0->samples || VAR_0->len >= VAR_0->size) {
        HintSample *VAR_4;
        VAR_4 = FUNC_0(VAR_0->samples, VAR_0->size + 10, sizeof(HintSample));
        if (!VAR_4)
            return;
        VAR_0->size += 10;
        VAR_0->samples = VAR_4;
    }
    VAR_0->samples[VAR_0->len].data = VAR_1;
    VAR_0->samples[VAR_0->len].size = VAR_2;
    VAR_0->samples[VAR_0->len].sample_number = VAR_3;
    VAR_0->samples[VAR_0->len].offset = 0;
    VAR_0->samples[VAR_0->len].own_data = 0;
    VAR_0->len++;
}
