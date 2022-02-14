
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct TYPE_5__ {unsigned int access_unit_size_pow2; int * noise_buffer; TYPE_1__* substream; } ;
struct TYPE_4__ {int noisegen_seed; } ;
typedef TYPE_1__ SubStream ;
typedef TYPE_2__ MLPDecodeContext ;


 int * VAR_0 ;

__attribute__((used)) static void FUNC_0(MLPDecodeContext *VAR_1, unsigned int VAR_2)
{
    SubStream *VAR_3 = &VAR_1->substream[VAR_2];
    unsigned int VAR_4;
    uint32_t VAR_5 = VAR_3->noisegen_seed;

    for (VAR_4 = 0; VAR_4 < VAR_1->access_unit_size_pow2; VAR_4++) {
        uint8_t VAR_6 = VAR_5 >> 15;
        VAR_1->noise_buffer[VAR_4] = VAR_0[VAR_6];
        VAR_5 = (VAR_5 << 8) ^ VAR_6 ^ (VAR_6 << 5);
    }

    VAR_3->noisegen_seed = VAR_5;
}
