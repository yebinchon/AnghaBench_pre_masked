
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {size_t frame_len_bits; size_t block_len_bits; float** exponents; int block_len; int version; int pb; int ** exponent_bands; } ;
typedef TYPE_1__ WMACodecContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int* VAR_0 ;
 int* VAR_1 ;
 int FUNC_2 (int *,int,int) ;

__attribute__((used)) static void FUNC_3(WMACodecContext *VAR_2, int VAR_3, const int *VAR_4)
{
    int VAR_5;
    const uint16_t *VAR_6;
    float *VAR_7, *VAR_8;

    VAR_6 = VAR_2->exponent_bands[VAR_2->frame_len_bits - VAR_2->block_len_bits];
    VAR_7 = VAR_2->exponents[VAR_3];
    VAR_8 = VAR_7 + VAR_2->block_len;
    if (VAR_2->version == 1) {
        VAR_5 = *VAR_4++;
        FUNC_0(VAR_5 - 10 >= 0 && VAR_5 - 10 < 32);
        FUNC_2(&VAR_2->pb, 5, VAR_5 - 10);
        VAR_7 += *VAR_6++;
    } else
        VAR_5 = 36;
    while (VAR_7 < VAR_8) {
        int VAR_9 = *VAR_4++;
        int VAR_10 = VAR_9 - VAR_5 + 60;
        FUNC_1(VAR_10 >= 0 && VAR_10 < 120);
        FUNC_2(&VAR_2->pb, VAR_0[VAR_10],
                 VAR_1[VAR_10]);

        VAR_7 += *VAR_6++;
        VAR_5 = VAR_9;
    }
}
