
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int value ;
typedef int uint8_t ;
typedef int uint16_t ;
typedef int key ;
struct TYPE_12__ {TYPE_1__* priv; } ;
struct TYPE_11__ {int w; } ;
struct TYPE_10__ {int width; int** data; int* linesize; int metadata; } ;
struct TYPE_9__ {int spw; int* temp; int min_range; int white; int black; int max_peak_diff; int max_period_diff; int max_start_diff; int bhd; int nb_found; scalar_t__ chp; scalar_t__ lp; } ;
typedef TYPE_1__ ReadEIA608Context ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int const) ;
 int FUNC_2 (int,int const) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,int*,int*,int ) ;
 int FUNC_4 (TYPE_4__*,int ,char*,int,...) ;
 int FUNC_5 (int*,int,char*,int,...) ;

__attribute__((used)) static void FUNC_6(AVFilterContext *VAR_4, AVFilterLink *VAR_5, AVFrame *VAR_6, int VAR_7)
{
    ReadEIA608Context *VAR_8 = VAR_4->priv;
    int VAR_9 = 0, VAR_10 = VAR_2;
    int VAR_11, VAR_12, VAR_13 = 0;
    const uint8_t *VAR_14;
    uint16_t VAR_15[8][2] = { { 0 } };
    const int VAR_16 = VAR_8->spw * VAR_6->width;
    int VAR_17 = 0, VAR_18 = 0, VAR_19 = 0, VAR_20 = VAR_3;
    const int VAR_21 = (VAR_6->width - VAR_16) / 19;
    uint8_t VAR_22[2] = { 0 };
    int VAR_23, VAR_24, VAR_25, VAR_26;

    VAR_14 = &VAR_6->data[0][VAR_7 * VAR_6->linesize[0]];

    if (VAR_8->lp) {
        uint8_t *VAR_27 = VAR_8->temp;
        int VAR_28 = VAR_5->w - 1;

        for (VAR_11 = 0; VAR_11 < VAR_5->w; VAR_11++) {
            int VAR_29 = FUNC_1(VAR_11 - 3, 0);
            int VAR_30 = FUNC_1(VAR_11 - 2, 0);
            int VAR_31 = FUNC_1(VAR_11 - 1, 0);
            int VAR_32 = FUNC_2(VAR_11 + 3, VAR_28);
            int VAR_33 = FUNC_2(VAR_11 + 2, VAR_28);
            int VAR_34 = FUNC_2(VAR_11 + 1, VAR_28);

            VAR_27[VAR_11] = (VAR_14[VAR_29] + VAR_14[VAR_30] + VAR_14[VAR_31] + VAR_14[VAR_11] + VAR_14[VAR_32] + VAR_14[VAR_33] + VAR_14[VAR_34] + 6) / 7;
        }

        VAR_14 = VAR_8->temp;
    }

    for (VAR_11 = 0; VAR_11 < VAR_16; VAR_11++) {
        VAR_9 = FUNC_1(VAR_9, VAR_14[VAR_11]);
        VAR_10 = FUNC_2(VAR_10, VAR_14[VAR_11]);
    }

    VAR_13 = VAR_9 - VAR_10;
    if (VAR_13 < VAR_8->min_range)
        return;

    for (VAR_11 = 0; VAR_11 < VAR_16; VAR_11++) {
        int VAR_35 = VAR_14[VAR_11];

        if (VAR_20 == VAR_3) {
            if (VAR_35 < VAR_17) {
                VAR_20 = VAR_1;
                if (VAR_17 >= VAR_8->white) {
                    VAR_15[VAR_18][0] = VAR_17;
                    VAR_15[VAR_18][1] = VAR_11;
                    VAR_18++;
                    if (VAR_18 > 7)
                        break;
                }
            }
        } else if (VAR_20 == VAR_1) {
            if (VAR_35 > VAR_17 && VAR_17 <= VAR_8->black) {
                VAR_20 = VAR_3;
            }
        }
        VAR_17 = VAR_35;
    }

    if (VAR_18 != 7) {
        FUNC_4(VAR_4, VAR_0, "peaks: %d != 7\n", VAR_18);
        return;
    }

    for (VAR_11 = 1; VAR_11 < 7; VAR_11++)
        VAR_19 = FUNC_1(VAR_19, FUNC_0(VAR_15[VAR_11][0] - VAR_15[VAR_11-1][0]));

    if (VAR_19 > VAR_8->max_peak_diff) {
        FUNC_4(VAR_4, VAR_0, "mhd: %d > %d\n", VAR_19, VAR_8->max_peak_diff);
        return;
    }

    VAR_9 = 0; VAR_10 = VAR_2;
    for (VAR_11 = 1; VAR_11 < 7; VAR_11++) {
        VAR_9 = FUNC_1(VAR_9, FUNC_0(VAR_15[VAR_11][1] - VAR_15[VAR_11-1][1]));
        VAR_10 = FUNC_2(VAR_10, FUNC_0(VAR_15[VAR_11][1] - VAR_15[VAR_11-1][1]));
    }

    VAR_13 = VAR_9 - VAR_10;
    if (VAR_13 > VAR_8->max_period_diff) {
        FUNC_4(VAR_4, VAR_0, "mpd: %d > %d\n", VAR_13, VAR_8->max_period_diff);
        return;
    }

    VAR_23 = VAR_14[VAR_16 + VAR_21 * 0 + VAR_21 / 2];
    VAR_24 = VAR_14[VAR_16 + VAR_21 * 1 + VAR_21 / 2];
    VAR_25 = VAR_14[VAR_16 + VAR_21 * 2 + VAR_21 / 2];

    if (FUNC_0(VAR_23 - VAR_24) > VAR_8->max_start_diff || VAR_23 > VAR_8->black || VAR_24 > VAR_8->black || VAR_25 < VAR_8->white) {
        FUNC_4(VAR_4, VAR_0, "msd: %d > %d\n", FUNC_0(VAR_23 - VAR_24), VAR_8->max_start_diff);
        return;
    }

    for (VAR_12 = 0; VAR_12 < 2; VAR_12++) {
        for (VAR_26 = 0, VAR_11 = 0; VAR_11 < 8; VAR_11++) {
            int VAR_36 = VAR_14[VAR_16 + VAR_21 * (VAR_11 + 3 + 8 * VAR_12) + VAR_21 / 2];

            if (VAR_36 - VAR_23 > (VAR_25 - VAR_23) * VAR_8->bhd) {
                VAR_36 = 1;
                VAR_26++;
            } else {
                VAR_36 = 0;
            }
            VAR_22[VAR_12] |= VAR_36 << VAR_11;
        }

        if (VAR_8->chp) {
            if (!(VAR_26 & 1)) {
                VAR_22[VAR_12] = 0;
            }
        }
    }

    {
        uint8_t VAR_37[128], VAR_38[128];

        FUNC_5(VAR_37, sizeof(VAR_37), "lavfi.readeia608.%d.cc", VAR_8->nb_found);
        FUNC_5(VAR_38, sizeof(VAR_38), "0x%02X%02X", VAR_22[0], VAR_22[1]);
        FUNC_3(&VAR_6->metadata, VAR_37, VAR_38, 0);

        FUNC_5(VAR_37, sizeof(VAR_37), "lavfi.readeia608.%d.line", VAR_8->nb_found);
        FUNC_5(VAR_38, sizeof(VAR_38), "%d", VAR_7);
        FUNC_3(&VAR_6->metadata, VAR_37, VAR_38, 0);
    }

    VAR_8->nb_found++;
}
