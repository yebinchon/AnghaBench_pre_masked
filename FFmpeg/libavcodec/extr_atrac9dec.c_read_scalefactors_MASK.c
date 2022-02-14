
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {int table; } ;
typedef TYPE_2__ VLC ;
struct TYPE_13__ {int band_ext_q_unit; int q_unit_cnt_prev; TYPE_1__* channel; } ;
struct TYPE_12__ {int* scalefactors; int* scalefactors_prev; } ;
struct TYPE_11__ {TYPE_2__** sf_vlc; int avctx; } ;
struct TYPE_9__ {int* scalefactors; } ;
typedef int GetBitContext ;
typedef TYPE_3__ ATRAC9Context ;
typedef TYPE_4__ ATRAC9ChannelData ;
typedef TYPE_5__ ATRAC9BlockData ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int const) ;
 int** VAR_2 ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (int *,int const) ;
 int FUNC_3 (int *,int ,int,int) ;
 int FUNC_4 (int*,int*,int) ;
 int FUNC_5 (int*,int ,int) ;

__attribute__((used)) static inline int FUNC_6(ATRAC9Context *VAR_3, ATRAC9BlockData *VAR_4,
                                    ATRAC9ChannelData *VAR_5, GetBitContext *VAR_6,
                                    int VAR_7, int VAR_8)
{
    static const uint8_t VAR_9[2][4] = { { 0, 1, 2, 3 }, { 0, 2, 3, 4 } };
    const int VAR_10 = VAR_9[VAR_7][FUNC_2(VAR_6, 2)];

    FUNC_5(VAR_5->scalefactors, 0, sizeof(VAR_5->scalefactors));

    if (VAR_8 && (VAR_10 == 4 || ((VAR_10 == 3) && !VAR_7))) {
        FUNC_1(VAR_3->avctx, VAR_1, "Invalid scalefactor coding mode!\n");
        return VAR_0;
    }

    switch (VAR_10) {
    case 0: {
        const uint8_t *VAR_11 = VAR_2[FUNC_2(VAR_6, 3)];
        const int VAR_12 = FUNC_2(VAR_6, 5);
        const int VAR_13 = FUNC_2(VAR_6, 2) + 3;
        const VLC *VAR_14 = &VAR_3->sf_vlc[0][VAR_13];

        VAR_5->scalefactors[0] = FUNC_2(VAR_6, VAR_13);

        for (int VAR_15 = 1; VAR_15 < VAR_4->band_ext_q_unit; VAR_15++) {
            int VAR_16 = VAR_5->scalefactors[VAR_15 - 1] + FUNC_3(VAR_6, VAR_14->table, 9, 2);
            VAR_5->scalefactors[VAR_15] = VAR_16 & ((1 << VAR_13) - 1);
        }

        for (int VAR_17 = 0; VAR_17 < VAR_4->band_ext_q_unit; VAR_17++)
            VAR_5->scalefactors[VAR_17] += VAR_12 - VAR_11[VAR_17];

        break;
    }
    case 1: {
        const int VAR_18 = FUNC_2(VAR_6, 2) + 2;
        const int VAR_19 = VAR_18 < 5 ? FUNC_2(VAR_6, 5) : 0;
        for (int VAR_20 = 0; VAR_20 < VAR_4->band_ext_q_unit; VAR_20++)
            VAR_5->scalefactors[VAR_20] = VAR_19 + FUNC_2(VAR_6, VAR_18);
        break;
    }
    case 2:
    case 4: {
        const int *VAR_21 = VAR_10 == 4 ? VAR_5->scalefactors_prev :
                              VAR_7 ? VAR_4->channel[0].scalefactors :
                              VAR_5->scalefactors_prev;
        const int VAR_22 = VAR_10 == 4 ? VAR_4->q_unit_cnt_prev :
                                 VAR_7 ? VAR_4->band_ext_q_unit :
                                 VAR_4->q_unit_cnt_prev;

        const int VAR_23 = FUNC_2(VAR_6, 2) + 2;
        const int VAR_24 = FUNC_0(VAR_4->band_ext_q_unit, VAR_22);
        const VLC *VAR_25 = &VAR_3->sf_vlc[1][VAR_23];

        for (int VAR_26 = 0; VAR_26 < VAR_24; VAR_26++) {
            int VAR_27 = FUNC_3(VAR_6, VAR_25->table, 9, 2);
            VAR_5->scalefactors[VAR_26] = VAR_21[VAR_26] + VAR_27;
        }

        for (int VAR_28 = VAR_24; VAR_28 < VAR_4->band_ext_q_unit; VAR_28++)
            VAR_5->scalefactors[VAR_28] = FUNC_2(VAR_6, 5);

        break;
    }
    case 3: {
        const int *VAR_29 = VAR_7 ? VAR_4->channel[0].scalefactors :
                              VAR_5->scalefactors_prev;
        const int VAR_30 = VAR_7 ? VAR_4->band_ext_q_unit :
                                 VAR_4->q_unit_cnt_prev;

        const int VAR_31 = FUNC_2(VAR_6, 5) - (1 << (5 - 1));
        const int VAR_32 = FUNC_2(VAR_6, 2) + 1;
        const int VAR_33 = FUNC_0(VAR_4->band_ext_q_unit, VAR_30);
        const VLC *VAR_34 = &VAR_3->sf_vlc[0][VAR_32];

        VAR_5->scalefactors[0] = FUNC_2(VAR_6, VAR_32);

        for (int VAR_35 = 1; VAR_35 < VAR_33; VAR_35++) {
            int VAR_36 = VAR_5->scalefactors[VAR_35 - 1] + FUNC_3(VAR_6, VAR_34->table, 9, 2);
            VAR_5->scalefactors[VAR_35] = VAR_36 & ((1 << VAR_32) - 1);
        }

        for (int VAR_37 = 0; VAR_37 < VAR_33; VAR_37++)
            VAR_5->scalefactors[VAR_37] += VAR_31 + VAR_29[VAR_37];

        for (int VAR_38 = VAR_33; VAR_38 < VAR_4->band_ext_q_unit; VAR_38++)
            VAR_5->scalefactors[VAR_38] = FUNC_2(VAR_6, 5);
        break;
    }
    }

    for (int VAR_39 = 0; VAR_39 < VAR_4->band_ext_q_unit; VAR_39++)
        if (VAR_5->scalefactors[VAR_39] < 0 || VAR_5->scalefactors[VAR_39] > 31)
            return VAR_0;

    FUNC_4(VAR_5->scalefactors_prev, VAR_5->scalefactors, sizeof(VAR_5->scalefactors));

    return 0;
}
