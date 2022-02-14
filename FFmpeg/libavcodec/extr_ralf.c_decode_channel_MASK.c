
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int bits; int table; } ;
struct TYPE_9__ {int table; } ;
struct TYPE_8__ {int table; } ;
struct TYPE_11__ {TYPE_5__* short_codes; TYPE_5__* long_codes; TYPE_3__ coding_mode; TYPE_5__** filter_coeffs; TYPE_2__ bias; TYPE_1__ filter_params; } ;
typedef TYPE_4__ VLCSet ;
struct TYPE_12__ {int bits; int table; } ;
typedef TYPE_5__ VLC ;
struct TYPE_13__ {int** channel_data; int filter_params; int filter_bits; int filter_length; unsigned int* bias; int* filter; TYPE_4__* sets; } ;
typedef TYPE_6__ RALFContext ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int) ;
 int FUNC_1 (int) ;
 unsigned int FUNC_2 (int *,int,int,int) ;
 int FUNC_3 (int *,int) ;
 void* FUNC_4 (int *,int ,int,int) ;
 int FUNC_5 (int*,int ,int) ;

__attribute__((used)) static int FUNC_6(RALFContext *VAR_2, GetBitContext *VAR_3, int VAR_4,
                          int VAR_5, int VAR_6, int VAR_7)
{
    int VAR_8, VAR_9;
    int VAR_10;
    VLCSet *VAR_11 = VAR_2->sets + VAR_6;
    VLC *VAR_12; int VAR_13, VAR_14, VAR_15;
    int *VAR_16 = VAR_2->channel_data[VAR_4];

    VAR_2->filter_params = FUNC_4(VAR_3, VAR_11->filter_params.table, 9, 2);
    if (VAR_2->filter_params > 1) {
        VAR_2->filter_bits = (VAR_2->filter_params - 2) >> 6;
        VAR_2->filter_length = VAR_2->filter_params - (VAR_2->filter_bits << 6) - 1;
    }

    if (VAR_2->filter_params == VAR_1) {
        for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++)
            VAR_16[VAR_8] = FUNC_3(VAR_3, VAR_7);
        VAR_2->bias[VAR_4] = 0;
        return 0;
    }

    VAR_2->bias[VAR_4] = FUNC_4(VAR_3, VAR_11->bias.table, 9, 2);
    VAR_2->bias[VAR_4] = FUNC_2(VAR_3, VAR_2->bias[VAR_4], 127, 4);

    if (VAR_2->filter_params == VAR_0) {
        FUNC_5(VAR_16, 0, sizeof(*VAR_16) * VAR_5);
        return 0;
    }

    if (VAR_2->filter_params > 1) {
        int VAR_17 = 0, VAR_18 = 0;
        VLC *VAR_19 = VAR_11->filter_coeffs[VAR_2->filter_bits] + 5;

        VAR_15 = VAR_2->filter_bits;

        for (VAR_8 = 0; VAR_8 < VAR_2->filter_length; VAR_8++) {
            VAR_9 = FUNC_4(VAR_3, VAR_19[VAR_17].table, VAR_19[VAR_17].bits, 2);
            VAR_9 = FUNC_2(VAR_3, VAR_9, 21, VAR_15);
            if (!VAR_17)
                VAR_18 -= 12 << VAR_15;
            VAR_18 = VAR_9 - VAR_18;
            VAR_2->filter[VAR_8] = VAR_18;

            VAR_17 = VAR_18 >> VAR_15;
            if (VAR_17 < 0) {
                VAR_17 = -1 - FUNC_1(-VAR_17);
                if (VAR_17 < -5)
                    VAR_17 = -5;
            } else if (VAR_17 > 0) {
                VAR_17 = 1 + FUNC_1(VAR_17);
                if (VAR_17 > 5)
                    VAR_17 = 5;
            }
        }
    }

    VAR_10 = FUNC_4(VAR_3, VAR_11->coding_mode.table, VAR_11->coding_mode.bits, 2);
    if (VAR_10 >= 15) {
        VAR_15 = FUNC_0((VAR_10 / 5 - 3) / 2, 0, 10);
        if (VAR_15 > 9 && (VAR_10 % 5) != 2)
            VAR_15--;
        VAR_13 = 10;
        VAR_14 = 21;
        VAR_12 = VAR_11->long_codes + (VAR_10 - 15);
    } else {
        VAR_15 = 0;
        VAR_13 = 6;
        VAR_14 = 13;
        VAR_12 = VAR_11->short_codes + VAR_10;
    }

    for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8 += 2) {
        int VAR_20, VAR_21;

        VAR_9 = FUNC_4(VAR_3, VAR_12->table, VAR_12->bits, 2);
        VAR_20 = VAR_9 / VAR_14;
        VAR_21 = VAR_9 % VAR_14;
        VAR_16[VAR_8] = FUNC_2(VAR_3, VAR_20, VAR_13, 0) * (1U << VAR_15);
        VAR_16[VAR_8 + 1] = FUNC_2(VAR_3, VAR_21, VAR_13, 0) * (1U << VAR_15);
        if (VAR_15) {
            VAR_16[VAR_8] |= FUNC_3(VAR_3, VAR_15);
            VAR_16[VAR_8 + 1] |= FUNC_3(VAR_3, VAR_15);
        }
    }

    return 0;
}
