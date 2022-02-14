
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_8__ {int table; } ;
typedef TYPE_1__ VLC ;
struct TYPE_11__ {int* q_coeffs_coarse; int q_unit_cnt; int* precision_coarse; int* codebookset; } ;
struct TYPE_10__ {int samplerate_idx; TYPE_1__*** coeff_vlc; } ;
struct TYPE_9__ {int const value_cnt_pow; int value_cnt; int const value_bits; int max_bit_size; } ;
typedef TYPE_2__ HuffmanCodebook ;
typedef int GetBitContext ;
typedef TYPE_3__ ATRAC9Context ;
typedef TYPE_4__ ATRAC9ChannelData ;
typedef int ATRAC9BlockData ;


 TYPE_2__*** VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 size_t* VAR_3 ;
 int FUNC_0 (int *,int const) ;
 int FUNC_1 (int *,int ,int,int ) ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (int,int const) ;

__attribute__((used)) static inline void FUNC_4(ATRAC9Context *VAR_4, ATRAC9BlockData *VAR_5,
                                      ATRAC9ChannelData *VAR_6, GetBitContext *VAR_7)
{
    const int VAR_8 = VAR_4->samplerate_idx > 7 ? 1 : 7;

    FUNC_2(VAR_6->q_coeffs_coarse, 0, sizeof(VAR_6->q_coeffs_coarse));

    for (int VAR_9 = 0; VAR_9 < VAR_6->q_unit_cnt; VAR_9++) {
        int *VAR_10 = &VAR_6->q_coeffs_coarse[VAR_3[VAR_9]];
        const int VAR_11 = VAR_2[VAR_9];
        const int VAR_12 = VAR_6->precision_coarse[VAR_9] + 1;

        if (VAR_12 <= VAR_8) {
            const int VAR_13 = VAR_6->codebookset[VAR_9];
            const int VAR_14 = VAR_1[VAR_9];
            const VLC *VAR_15 = &VAR_4->coeff_vlc[VAR_13][VAR_12][VAR_14];
            const HuffmanCodebook *VAR_16 = &VAR_0[VAR_13][VAR_12][VAR_14];
            const int VAR_17 = VAR_11 >> VAR_16->value_cnt_pow;

            for (int VAR_18 = 0; VAR_18 < VAR_17; VAR_18++) {
                uint16_t VAR_19 = FUNC_1(VAR_7, VAR_15->table, 9, VAR_16->max_bit_size);

                for (int VAR_20 = 0; VAR_20 < VAR_16->value_cnt; VAR_20++) {
                    VAR_10[VAR_20] = FUNC_3(VAR_19, VAR_16->value_bits);
                    VAR_19 >>= VAR_16->value_bits;
                }

                VAR_10 += VAR_16->value_cnt;
            }
        } else {
            for (int VAR_21 = 0; VAR_21 < VAR_11; VAR_21++)
                VAR_10[VAR_21] = FUNC_3(FUNC_0(VAR_7, VAR_12), VAR_12);
        }
    }
}
