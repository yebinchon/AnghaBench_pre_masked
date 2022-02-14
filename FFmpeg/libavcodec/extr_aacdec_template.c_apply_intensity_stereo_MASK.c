
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_12__ {TYPE_1__* fdsp; int avctx; int (* subband_scale ) (int*,int*,int,int,int const,int ) ;} ;
struct TYPE_11__ {int* ms_mask; TYPE_2__* ch; } ;
struct TYPE_10__ {int* swb_offset; int num_window_groups; int max_sfb; int* group_len; } ;
struct TYPE_9__ {int* coeffs; int* band_type; int* band_type_run_end; int* sf; TYPE_3__ ics; } ;
struct TYPE_8__ {int (* vector_fmul_scalar ) (int*,int*,int,int const) ;} ;
typedef TYPE_2__ SingleChannelElement ;
typedef TYPE_3__ IndividualChannelStream ;
typedef int INTFLOAT ;
typedef TYPE_4__ ChannelElement ;
typedef TYPE_5__ AACContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int*,int,int,int const,int ) ;
 int FUNC_1 (int*,int*,int,int const) ;

__attribute__((used)) static void FUNC_2(AACContext *VAR_2,
                                   ChannelElement *VAR_3, int VAR_4)
{
    const IndividualChannelStream *VAR_5 = &VAR_3->ch[1].ics;
    SingleChannelElement *VAR_6 = &VAR_3->ch[1];
    INTFLOAT *VAR_7 = VAR_3->ch[0].coeffs, *VAR_8 = VAR_3->ch[1].coeffs;
    const uint16_t *VAR_9 = VAR_5->swb_offset;
    int VAR_10, VAR_11, VAR_12, VAR_13 = 0;
    int VAR_14;
    INTFLOAT VAR_15;
    for (VAR_10 = 0; VAR_10 < VAR_5->num_window_groups; VAR_10++) {
        for (VAR_12 = 0; VAR_12 < VAR_5->max_sfb;) {
            if (VAR_6->band_type[VAR_13] == VAR_0 ||
                VAR_6->band_type[VAR_13] == VAR_1) {
                const int VAR_16 = VAR_6->band_type_run_end[VAR_13];
                for (; VAR_12 < VAR_16; VAR_12++, VAR_13++) {
                    VAR_14 = -1 + 2 * (VAR_6->band_type[VAR_13] - 14);
                    if (VAR_4)
                        VAR_14 *= 1 - 2 * VAR_3->ms_mask[VAR_13];
                    VAR_15 = VAR_14 * VAR_6->sf[VAR_13];
                    for (VAR_11 = 0; VAR_11 < VAR_5->group_len[VAR_10]; VAR_11++)







                        VAR_2->fdsp->vector_fmul_scalar(VAR_8 + VAR_11 * 128 + VAR_9[VAR_12],
                                                    VAR_7 + VAR_11 * 128 + VAR_9[VAR_12],
                                                    VAR_15,
                                                    VAR_9[VAR_12 + 1] - VAR_9[VAR_12]);

                }
            } else {
                int VAR_17 = VAR_6->band_type_run_end[VAR_13];
                VAR_13 += VAR_17 - VAR_12;
                VAR_12 = VAR_17;
            }
        }
        VAR_7 += VAR_5->group_len[VAR_10] * 128;
        VAR_8 += VAR_5->group_len[VAR_10] * 128;
    }
}
