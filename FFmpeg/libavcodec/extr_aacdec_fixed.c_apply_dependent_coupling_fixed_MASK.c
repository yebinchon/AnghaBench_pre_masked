
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint16_t ;
typedef int int64_t ;
struct TYPE_19__ {int avctx; TYPE_2__* oc; } ;
struct TYPE_15__ {int** gain; } ;
struct TYPE_18__ {TYPE_4__ coup; TYPE_3__* ch; } ;
struct TYPE_17__ {int* swb_offset; int num_window_groups; int max_sfb; int* group_len; } ;
struct TYPE_16__ {int* coeffs; } ;
struct TYPE_14__ {int* coeffs; scalar_t__* band_type; TYPE_6__ ics; } ;
struct TYPE_12__ {scalar_t__ object_type; } ;
struct TYPE_13__ {TYPE_1__ m4ac; } ;
typedef TYPE_5__ SingleChannelElement ;
typedef TYPE_6__ IndividualChannelStream ;
typedef TYPE_7__ ChannelElement ;
typedef TYPE_8__ AACContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;
 int* VAR_3 ;

__attribute__((used)) static void FUNC_1(AACContext *VAR_4,
                                     SingleChannelElement *VAR_5,
                                     ChannelElement *VAR_6, int VAR_7)
{
    IndividualChannelStream *VAR_8 = &VAR_6->ch[0].ics;
    const uint16_t *VAR_9 = VAR_8->swb_offset;
    int *VAR_10 = VAR_5->coeffs;
    const int *VAR_11 = VAR_6->ch[0].coeffs;
    int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16 = 0;
    if (VAR_4->oc[1].m4ac.object_type == VAR_0) {
        FUNC_0(VAR_4->avctx, VAR_1,
               "Dependent coupling is not supported together with LTP\n");
        return;
    }
    for (VAR_12 = 0; VAR_12 < VAR_8->num_window_groups; VAR_12++) {
        for (VAR_13 = 0; VAR_13 < VAR_8->max_sfb; VAR_13++, VAR_16++) {
            if (VAR_6->ch[0].band_type[VAR_16] != VAR_2) {
                const int VAR_17 = VAR_6->coup.gain[VAR_7][VAR_16];
                int VAR_18, VAR_19, VAR_20, VAR_21;

                if (VAR_17 < 0) {
                    VAR_20 = -VAR_3[-VAR_17 & 7];
                    VAR_18 = (-VAR_17-1024) >> 3;
                }
                else {
                    VAR_20 = VAR_3[VAR_17 & 7];
                    VAR_18 = (VAR_17-1024) >> 3;
                }

                if (VAR_18 < -31) {

                } else if (VAR_18 < 0) {
                    VAR_18 = -VAR_18;
                    VAR_19 = 1 << (VAR_18 - 1);

                    for (VAR_14 = 0; VAR_14 < VAR_8->group_len[VAR_12]; VAR_14++) {
                        for (VAR_15 = VAR_9[VAR_13]; VAR_15 < VAR_9[VAR_13 + 1]; VAR_15++) {
                            VAR_21 = (int)(((int64_t)VAR_11[VAR_14 * 128 + VAR_15] * VAR_20 + (int64_t)0x1000000000) >> 37);

                            VAR_10[VAR_14 * 128 + VAR_15] += (VAR_21 + (int64_t)VAR_19) >> VAR_18;
                        }
                    }
                }
                else {
                    for (VAR_14 = 0; VAR_14 < VAR_8->group_len[VAR_12]; VAR_14++) {
                        for (VAR_15 = VAR_9[VAR_13]; VAR_15 < VAR_9[VAR_13 + 1]; VAR_15++) {
                            VAR_21 = (int)(((int64_t)VAR_11[VAR_14 * 128 + VAR_15] * VAR_20 + (int64_t)0x1000000000) >> 37);

                            VAR_10[VAR_14 * 128 + VAR_15] += VAR_21 * (1U << VAR_18);
                        }
                    }
                }
            }
        }
        VAR_10 += VAR_8->group_len[VAR_12] * 128;
        VAR_11 += VAR_8->group_len[VAR_12] * 128;
    }
}
