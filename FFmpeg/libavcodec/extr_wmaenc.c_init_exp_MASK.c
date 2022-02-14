
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {size_t frame_len_bits; size_t block_len_bits; float** exponents; int block_len; float* max_exponent; int ** exponent_bands; } ;
typedef TYPE_1__ WMACodecContext ;


 float FUNC_0 (float,float) ;
 float FUNC_1 (double) ;

__attribute__((used)) static void FUNC_2(WMACodecContext *VAR_0, int VAR_1, const int *VAR_2)
{
    int VAR_3;
    const uint16_t *VAR_4;
    float VAR_5, *VAR_6, VAR_7, *VAR_8;

    VAR_4 = VAR_0->exponent_bands[VAR_0->frame_len_bits - VAR_0->block_len_bits];
    VAR_6 = VAR_0->exponents[VAR_1];
    VAR_8 = VAR_6 + VAR_0->block_len;
    VAR_7 = 0;
    while (VAR_6 < VAR_8) {

        VAR_5 = FUNC_1(*VAR_2++ *(1.0 / 16.0));
        VAR_7 = FUNC_0(VAR_7, VAR_5);
        VAR_3 = *VAR_4++;
        do {
            *VAR_6++ = VAR_5;
        } while (--VAR_3);
    }
    VAR_0->max_exponent[VAR_1] = VAR_7;
}
