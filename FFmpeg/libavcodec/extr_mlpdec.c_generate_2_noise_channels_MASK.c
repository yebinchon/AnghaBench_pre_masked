
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
typedef int int8_t ;
struct TYPE_5__ {int** sample_buffer; TYPE_1__* substream; } ;
struct TYPE_4__ {int noisegen_seed; unsigned int max_matrix_channel; unsigned int blockpos; int noise_shift; } ;
typedef TYPE_1__ SubStream ;
typedef TYPE_2__ MLPDecodeContext ;



__attribute__((used)) static void FUNC_0(MLPDecodeContext *VAR_0, unsigned int VAR_1)
{
    SubStream *VAR_2 = &VAR_0->substream[VAR_1];
    unsigned int VAR_3;
    uint32_t VAR_4 = VAR_2->noisegen_seed;
    unsigned int VAR_5 = VAR_2->max_matrix_channel;

    for (VAR_3 = 0; VAR_3 < VAR_2->blockpos; VAR_3++) {
        uint16_t VAR_6 = VAR_4 >> 7;
        VAR_0->sample_buffer[VAR_3][VAR_5+1] = ((int8_t)(VAR_4 >> 15)) * (1 << VAR_2->noise_shift);
        VAR_0->sample_buffer[VAR_3][VAR_5+2] = ((int8_t) VAR_6) * (1 << VAR_2->noise_shift);

        VAR_4 = (VAR_4 << 16) ^ VAR_6 ^ (VAR_6 << 5);
    }

    VAR_2->noisegen_seed = VAR_4;
}
