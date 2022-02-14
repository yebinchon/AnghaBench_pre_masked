
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_7__ {int subframe_len; int esc_len; int gb; int avctx; scalar_t__ transmit_num_vec_coeffs; TYPE_2__* channel; } ;
typedef TYPE_1__ WMAProDecodeCtx ;
struct TYPE_8__ {int num_vec_coeffs; scalar_t__* coeffs; } ;
typedef TYPE_2__ WMAProChannelCtx ;
typedef int VLC ;
struct TYPE_11__ {int table; } ;
struct TYPE_10__ {int table; } ;
struct TYPE_9__ {int table; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 float* VAR_8 ;
 int * VAR_9 ;
 float* VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int FUNC_2 (int ,char*,int) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int *,int *,float const*,int const*,int,scalar_t__*,int,int,int,int ,int ) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (int *,int ,int ,int ) ;
 int FUNC_7 (scalar_t__*,int ,int) ;
 int* VAR_13 ;
 int* VAR_14 ;
 TYPE_5__ VAR_15 ;
 TYPE_4__ VAR_16 ;
 TYPE_3__ VAR_17 ;

__attribute__((used)) static int FUNC_8(WMAProDecodeCtx *VAR_18, int VAR_19)
{



    static const uint32_t VAR_20[16] = {
        0x00000000, 0x3f800000, 0x40000000, 0x40400000,
        0x40800000, 0x40a00000, 0x40c00000, 0x40e00000,
        0x41000000, 0x41100000, 0x41200000, 0x41300000,
        0x41400000, 0x41500000, 0x41600000, 0x41700000,
    };
    int VAR_21;
    VLC* VAR_22;
    WMAProChannelCtx* VAR_23 = &VAR_18->channel[VAR_19];
    int VAR_24 = 0;
    int VAR_25 = 0;
    int VAR_26 = 0;
    const uint16_t* VAR_27;
    const float* VAR_28;

    FUNC_2(VAR_18->avctx, "decode coefficients for channel %i\n", VAR_19);

    VAR_21 = FUNC_5(&VAR_18->gb);
    VAR_22 = &VAR_12[VAR_21];

    if (VAR_21) {
        VAR_27 = VAR_11;
        VAR_28 = VAR_10;
    } else {
        VAR_27 = VAR_9;
        VAR_28 = VAR_8;
    }



    while ((VAR_18->transmit_num_vec_coeffs || !VAR_24) &&
           (VAR_25 + 3 < VAR_23->num_vec_coeffs)) {
        uint32_t VAR_29[4];
        int VAR_30;
        unsigned int VAR_31;

        VAR_31 = FUNC_6(&VAR_18->gb, VAR_17.table, VAR_7, VAR_6);

        if (VAR_31 == VAR_3 - 1) {
            for (VAR_30 = 0; VAR_30 < 4; VAR_30 += 2) {
                VAR_31 = FUNC_6(&VAR_18->gb, VAR_16.table, VAR_7, VAR_5);
                if (VAR_31 == VAR_2 - 1) {
                    uint32_t VAR_32, VAR_33;
                    VAR_32 = FUNC_6(&VAR_18->gb, VAR_15.table, VAR_7, VAR_4);
                    if (VAR_32 == VAR_1 - 1)
                        VAR_32 += FUNC_3(&VAR_18->gb);
                    VAR_33 = FUNC_6(&VAR_18->gb, VAR_15.table, VAR_7, VAR_4);
                    if (VAR_33 == VAR_1 - 1)
                        VAR_33 += FUNC_3(&VAR_18->gb);
                    VAR_29[VAR_30 ] = FUNC_1(VAR_32);
                    VAR_29[VAR_30+1] = FUNC_1(VAR_33);
                } else {
                    VAR_29[VAR_30] = VAR_20[VAR_13[VAR_31] >> 4 ];
                    VAR_29[VAR_30+1] = VAR_20[VAR_13[VAR_31] & 0xF];
                }
            }
        } else {
            VAR_29[0] = VAR_20[ VAR_14[VAR_31] >> 12 ];
            VAR_29[1] = VAR_20[(VAR_14[VAR_31] >> 8) & 0xF];
            VAR_29[2] = VAR_20[(VAR_14[VAR_31] >> 4) & 0xF];
            VAR_29[3] = VAR_20[ VAR_14[VAR_31] & 0xF];
        }


        for (VAR_30 = 0; VAR_30 < 4; VAR_30++) {
            if (VAR_29[VAR_30]) {
                uint32_t VAR_34 = FUNC_5(&VAR_18->gb) - 1;
                FUNC_0(&VAR_23->coeffs[VAR_25], VAR_29[VAR_30] ^ VAR_34 << 31);
                VAR_26 = 0;
            } else {
                VAR_23->coeffs[VAR_25] = 0;


                VAR_24 |= (++VAR_26 > VAR_18->subframe_len >> 8);
            }
            ++VAR_25;
        }
    }


    if (VAR_25 < VAR_18->subframe_len) {
        FUNC_7(&VAR_23->coeffs[VAR_25], 0,
               sizeof(*VAR_23->coeffs) * (VAR_18->subframe_len - VAR_25));
        if (FUNC_4(VAR_18->avctx, &VAR_18->gb, VAR_22,
                                    VAR_28, VAR_27, 1, VAR_23->coeffs,
                                    VAR_25, VAR_18->subframe_len,
                                    VAR_18->subframe_len, VAR_18->esc_len, 0))
            return VAR_0;
    }

    return 0;
}
