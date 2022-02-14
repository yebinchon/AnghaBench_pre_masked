
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int* scalefactors; size_t q_unit_cnt; int* codebookset; } ;
struct TYPE_5__ {int samplerate_idx; } ;
typedef TYPE_1__ ATRAC9Context ;
typedef TYPE_2__ ATRAC9ChannelData ;
typedef int ATRAC9BlockData ;


 int FUNC_0 (int const,int const) ;
 int* VAR_0 ;
 int FUNC_1 (int*,int ,int) ;

__attribute__((used)) static inline void FUNC_2(ATRAC9Context *VAR_1, ATRAC9BlockData *VAR_2,
                                     ATRAC9ChannelData *VAR_3)
{
    int VAR_4 = 0;
    const int VAR_5 = VAR_3->scalefactors[VAR_3->q_unit_cnt];

    FUNC_1(VAR_3->codebookset, 0, sizeof(VAR_3->codebookset));

    if (VAR_3->q_unit_cnt <= 1)
        return;
    if (VAR_1->samplerate_idx > 7)
        return;

    VAR_3->scalefactors[VAR_3->q_unit_cnt] = VAR_3->scalefactors[VAR_3->q_unit_cnt - 1];

    if (VAR_3->q_unit_cnt > 12) {
        for (int VAR_6 = 0; VAR_6 < 12; VAR_6++)
            VAR_4 += VAR_3->scalefactors[VAR_6];
        VAR_4 = (VAR_4 + 6) / 12;
    }

    for (int VAR_7 = 8; VAR_7 < VAR_3->q_unit_cnt; VAR_7++) {
        const int VAR_8 = VAR_3->scalefactors[VAR_7 - 1];
        const int VAR_9 = VAR_3->scalefactors[VAR_7 ];
        const int VAR_10 = VAR_3->scalefactors[VAR_7 + 1];
        const int VAR_11 = FUNC_0(VAR_8, VAR_10);
        if ((VAR_9 - VAR_11 >= 3 || 2*VAR_9 - VAR_8 - VAR_10 >= 3))
            VAR_3->codebookset[VAR_7] = 1;
    }


    for (int VAR_12 = 12; VAR_12 < VAR_3->q_unit_cnt; VAR_12++) {
        const int VAR_13 = VAR_3->scalefactors[VAR_12];
        const int VAR_14 = VAR_0[VAR_12] == 16;
        const int VAR_15 = FUNC_0(VAR_3->scalefactors[VAR_12 + 1], VAR_3->scalefactors[VAR_12 - 1]);
        if (VAR_3->codebookset[VAR_12])
            continue;

        VAR_3->codebookset[VAR_12] = (((VAR_13 - VAR_15) >= 2) && (VAR_13 >= (VAR_4 - VAR_14)));
    }

    VAR_3->scalefactors[VAR_3->q_unit_cnt] = VAR_5;
}
