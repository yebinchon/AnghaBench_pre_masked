
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
struct TYPE_19__ {int avctx; TYPE_2__* oc; } ;
struct TYPE_15__ {float** gain; } ;
struct TYPE_18__ {TYPE_4__ coup; TYPE_3__* ch; } ;
struct TYPE_17__ {int* swb_offset; int num_window_groups; int max_sfb; int* group_len; } ;
struct TYPE_16__ {float* coeffs; } ;
struct TYPE_14__ {float* coeffs; scalar_t__* band_type; TYPE_6__ ics; } ;
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

__attribute__((used)) static void FUNC_1(AACContext *VAR_3,
                                     SingleChannelElement *VAR_4,
                                     ChannelElement *VAR_5, int VAR_6)
{
    IndividualChannelStream *VAR_7 = &VAR_5->ch[0].ics;
    const uint16_t *VAR_8 = VAR_7->swb_offset;
    float *VAR_9 = VAR_4->coeffs;
    const float *VAR_10 = VAR_5->ch[0].coeffs;
    int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15 = 0;
    if (VAR_3->oc[1].m4ac.object_type == VAR_0) {
        FUNC_0(VAR_3->avctx, VAR_1,
               "Dependent coupling is not supported together with LTP\n");
        return;
    }
    for (VAR_11 = 0; VAR_11 < VAR_7->num_window_groups; VAR_11++) {
        for (VAR_12 = 0; VAR_12 < VAR_7->max_sfb; VAR_12++, VAR_15++) {
            if (VAR_5->ch[0].band_type[VAR_15] != VAR_2) {
                const float VAR_16 = VAR_5->coup.gain[VAR_6][VAR_15];
                for (VAR_13 = 0; VAR_13 < VAR_7->group_len[VAR_11]; VAR_13++) {
                    for (VAR_14 = VAR_8[VAR_12]; VAR_14 < VAR_8[VAR_12 + 1]; VAR_14++) {

                        VAR_9[VAR_13 * 128 + VAR_14] += VAR_16 * VAR_10[VAR_13 * 128 + VAR_14];
                    }
                }
            }
        }
        VAR_9 += VAR_7->group_len[VAR_11] * 128;
        VAR_10 += VAR_7->group_len[VAR_11] * 128;
    }
}
