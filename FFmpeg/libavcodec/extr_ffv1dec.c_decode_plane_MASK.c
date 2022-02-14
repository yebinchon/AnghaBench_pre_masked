
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int int16_t ;
struct TYPE_6__ {int* sample_buffer; TYPE_1__* avctx; scalar_t__ packed_at_lsb; scalar_t__ run_index; } ;
struct TYPE_5__ {int bits_per_raw_sample; } ;
typedef TYPE_2__ FFV1Context ;


 int FUNC_0 (TYPE_2__*,int,int**,int,int) ;
 int FUNC_1 (int*,int ,int) ;

__attribute__((used)) static int FUNC_2(FFV1Context *VAR_0, uint8_t *VAR_1,
                         int VAR_2, int VAR_3, int VAR_4, int VAR_5,
                         int VAR_6)
{
    int VAR_7, VAR_8;
    int16_t *VAR_9[2];
    VAR_9[0] = VAR_0->sample_buffer + 3;
    VAR_9[1] = VAR_0->sample_buffer + VAR_2 + 6 + 3;

    VAR_0->run_index = 0;

    FUNC_1(VAR_0->sample_buffer, 0, 2 * (VAR_2 + 6) * sizeof(*VAR_0->sample_buffer));

    for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
        int16_t *VAR_10 = VAR_9[0];

        VAR_9[0] = VAR_9[1];
        VAR_9[1] = VAR_10;

        VAR_9[1][-1] = VAR_9[0][0];
        VAR_9[0][VAR_2] = VAR_9[0][VAR_2 - 1];


        if (VAR_0->avctx->bits_per_raw_sample <= 8) {
            int VAR_11 = FUNC_0(VAR_0, VAR_2, VAR_9, VAR_5, 8);
            if (VAR_11 < 0)
                return VAR_11;
            for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
                VAR_1[VAR_7*VAR_6 + VAR_4 * VAR_8] = VAR_9[1][VAR_7];
        } else {
            int VAR_12 = FUNC_0(VAR_0, VAR_2, VAR_9, VAR_5, VAR_0->avctx->bits_per_raw_sample);
            if (VAR_12 < 0)
                return VAR_12;
            if (VAR_0->packed_at_lsb) {
                for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
                    ((uint16_t*)(VAR_1 + VAR_4*VAR_8))[VAR_7*VAR_6] = VAR_9[1][VAR_7];
                }
            } else {
                for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
                    ((uint16_t*)(VAR_1 + VAR_4*VAR_8))[VAR_7*VAR_6] = VAR_9[1][VAR_7] << (16 - VAR_0->avctx->bits_per_raw_sample) | ((uint16_t **)VAR_9)[1][VAR_7] >> (2 * VAR_0->avctx->bits_per_raw_sample - 16);
                }
            }
        }

    }
    return 0;
}
