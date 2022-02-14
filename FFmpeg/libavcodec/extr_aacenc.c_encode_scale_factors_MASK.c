
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int pb; } ;
struct TYPE_6__ {int num_windows; int max_sfb; scalar_t__* group_len; } ;
struct TYPE_7__ {int* sf_idx; scalar_t__* band_type; int * zeroes; TYPE_1__ ics; } ;
typedef TYPE_2__ SingleChannelElement ;
typedef int AVCodecContext ;
typedef TYPE_3__ AACEncContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 int * VAR_7 ;
 scalar_t__* VAR_8 ;
 int FUNC_1 (int *,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(AVCodecContext *VAR_9, AACEncContext *VAR_10,
                                 SingleChannelElement *VAR_11)
{
    int VAR_12, VAR_13 = VAR_11->sf_idx[0], VAR_14 = VAR_11->sf_idx[0] - VAR_3;
    int VAR_15 = 0, VAR_16 = 1;
    int VAR_17, VAR_18;

    for (VAR_18 = 0; VAR_18 < VAR_11->ics.num_windows; VAR_18 += VAR_11->ics.group_len[VAR_18]) {
        for (VAR_17 = 0; VAR_17 < VAR_11->ics.max_sfb; VAR_17++) {
            if (!VAR_11->zeroes[VAR_18*16 + VAR_17]) {
                if (VAR_11->band_type[VAR_18*16 + VAR_17] == VAR_2) {
                    VAR_12 = VAR_11->sf_idx[VAR_18*16 + VAR_17] - VAR_14;
                    VAR_14 = VAR_11->sf_idx[VAR_18*16 + VAR_17];
                    if (VAR_16-- > 0) {
                        FUNC_1(&VAR_10->pb, VAR_5, VAR_12 + VAR_4);
                        continue;
                    }
                } else if (VAR_11->band_type[VAR_18*16 + VAR_17] == VAR_0 ||
                           VAR_11->band_type[VAR_18*16 + VAR_17] == VAR_1) {
                    VAR_12 = VAR_11->sf_idx[VAR_18*16 + VAR_17] - VAR_15;
                    VAR_15 = VAR_11->sf_idx[VAR_18*16 + VAR_17];
                } else {
                    VAR_12 = VAR_11->sf_idx[VAR_18*16 + VAR_17] - VAR_13;
                    VAR_13 = VAR_11->sf_idx[VAR_18*16 + VAR_17];
                }
                VAR_12 += VAR_6;
                FUNC_0(VAR_12 >= 0 && VAR_12 <= 120);
                FUNC_1(&VAR_10->pb, VAR_7[VAR_12], VAR_8[VAR_12]);
            }
        }
    }
}
