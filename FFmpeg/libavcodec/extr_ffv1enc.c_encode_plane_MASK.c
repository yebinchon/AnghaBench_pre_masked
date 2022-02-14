
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int int16_t ;
struct TYPE_4__ {int* sample_buffer; int bits_per_raw_sample; scalar_t__ packed_at_lsb; scalar_t__ run_index; scalar_t__ context_model; } ;
typedef TYPE_1__ FFV1Context ;


 int FUNC_0 (TYPE_1__*,int,int**,int,int) ;
 int FUNC_1 (int*,int ,int const) ;

__attribute__((used)) static int FUNC_2(FFV1Context *VAR_0, uint8_t *VAR_1, int VAR_2, int VAR_3,
                         int VAR_4, int VAR_5, int VAR_6)
{
    int VAR_7, VAR_8, VAR_9, VAR_10;
    const int VAR_11 = VAR_0->context_model ? 3 : 2;
    int16_t *VAR_12[3];
    VAR_0->run_index = 0;

    FUNC_1(VAR_0->sample_buffer, 0, VAR_11 * (VAR_2 + 6) * sizeof(*VAR_0->sample_buffer));

    for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
        for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++)
            VAR_12[VAR_9] = VAR_0->sample_buffer + (VAR_2 + 6) * ((VAR_3 + VAR_9 - VAR_8) % VAR_11) + 3;

        VAR_12[0][-1]= VAR_12[1][0 ];
        VAR_12[1][ VAR_2]= VAR_12[1][VAR_2-1];

        if (VAR_0->bits_per_raw_sample <= 8) {
            for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
                VAR_12[0][VAR_7] = VAR_1[VAR_7 * VAR_6 + VAR_4 * VAR_8];
            if((VAR_10 = FUNC_0(VAR_0, VAR_2, VAR_12, VAR_5, 8)) < 0)
                return VAR_10;
        } else {
            if (VAR_0->packed_at_lsb) {
                for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
                    VAR_12[0][VAR_7] = ((uint16_t*)(VAR_1 + VAR_4*VAR_8))[VAR_7];
                }
            } else {
                for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
                    VAR_12[0][VAR_7] = ((uint16_t*)(VAR_1 + VAR_4*VAR_8))[VAR_7] >> (16 - VAR_0->bits_per_raw_sample);
                }
            }
            if((VAR_10 = FUNC_0(VAR_0, VAR_2, VAR_12, VAR_5, VAR_0->bits_per_raw_sample)) < 0)
                return VAR_10;
        }

    }
    return 0;
}
