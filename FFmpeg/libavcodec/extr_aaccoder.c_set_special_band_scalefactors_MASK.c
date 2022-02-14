
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num_windows; int num_swb; scalar_t__* group_len; } ;
struct TYPE_5__ {scalar_t__* band_type; int* sf_idx; scalar_t__* zeroes; TYPE_1__ ics; int * pns_ener; int * is_ener; } ;
typedef TYPE_2__ SingleChannelElement ;
typedef int AACEncContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(AACEncContext *VAR_4, SingleChannelElement *VAR_5)
{
    int VAR_6, VAR_7;
    int VAR_8 = -255, VAR_9 = 0;
    int VAR_10 = 0;

    for (VAR_6 = 0; VAR_6 < VAR_5->ics.num_windows; VAR_6 += VAR_5->ics.group_len[VAR_6]) {
        for (VAR_7 = 0; VAR_7 < VAR_5->ics.num_swb; VAR_7++) {
            if (VAR_5->zeroes[VAR_6*16+VAR_7])
                continue;
            if (VAR_5->band_type[VAR_6*16+VAR_7] == VAR_0 || VAR_5->band_type[VAR_6*16+VAR_7] == VAR_1) {
                VAR_5->sf_idx[VAR_6*16+VAR_7] = FUNC_0(FUNC_3(FUNC_2(VAR_5->is_ener[VAR_6*16+VAR_7])*2), -155, 100);
                VAR_10++;
            } else if (VAR_5->band_type[VAR_6*16+VAR_7] == VAR_2) {
                VAR_5->sf_idx[VAR_6*16+VAR_7] = FUNC_0(3+FUNC_1(FUNC_2(VAR_5->pns_ener[VAR_6*16+VAR_7])*2), -100, 155);
                if (VAR_8 == -255)
                    VAR_8 = VAR_5->sf_idx[VAR_6*16+VAR_7];
                VAR_10++;
            }
        }
    }

    if (!VAR_10)
        return;


    for (VAR_6 = 0; VAR_6 < VAR_5->ics.num_windows; VAR_6 += VAR_5->ics.group_len[VAR_6]) {
        for (VAR_7 = 0; VAR_7 < VAR_5->ics.num_swb; VAR_7++) {
            if (VAR_5->zeroes[VAR_6*16+VAR_7])
                continue;
            if (VAR_5->band_type[VAR_6*16+VAR_7] == VAR_0 || VAR_5->band_type[VAR_6*16+VAR_7] == VAR_1) {
                VAR_5->sf_idx[VAR_6*16+VAR_7] = VAR_9 = FUNC_0(VAR_5->sf_idx[VAR_6*16+VAR_7], VAR_9 - VAR_3, VAR_9 + VAR_3);
            } else if (VAR_5->band_type[VAR_6*16+VAR_7] == VAR_2) {
                VAR_5->sf_idx[VAR_6*16+VAR_7] = VAR_8 = FUNC_0(VAR_5->sf_idx[VAR_6*16+VAR_7], VAR_8 - VAR_3, VAR_8 + VAR_3);
            }
        }
    }
}
