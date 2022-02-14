
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int bits; int table; } ;
typedef TYPE_1__ VLC ;
struct TYPE_12__ {int fill_mode; size_t* qu_wordlen; int num_coded_vals; int split_point; } ;
struct TYPE_11__ {int num_quant_units; TYPE_3__* channels; } ;
typedef int GetBitContext ;
typedef TYPE_2__ Atrac3pChanUnitCtx ;
typedef TYPE_3__ Atrac3pChanParams ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*,int,int *) ;
 int *** VAR_2 ;
 int FUNC_2 (int *,int ,char*) ;
 size_t FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ,int ,int) ;
 int FUNC_7 (int *,TYPE_3__*,TYPE_2__*,int *) ;
 int FUNC_8 (int,int *,int*,int) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int FUNC_9(GetBitContext *VAR_4, Atrac3pChanUnitCtx *VAR_5,
                                  int VAR_6, AVCodecContext *VAR_7)
{
    int VAR_8, VAR_9 = 0, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15,
        VAR_16, VAR_17;
    VLC *VAR_18;
    Atrac3pChanParams *VAR_19 = &VAR_5->channels[VAR_6];
    Atrac3pChanParams *VAR_20 = &VAR_5->channels[0];

    VAR_19->fill_mode = 0;

    switch (FUNC_3(VAR_4, 2)) {
    case 0:
        for (VAR_8 = 0; VAR_8 < VAR_5->num_quant_units; VAR_8++)
            VAR_19->qu_wordlen[VAR_8] = FUNC_3(VAR_4, 3);
        break;
    case 1:
        if (VAR_6) {
            if ((VAR_16 = FUNC_7(VAR_4, VAR_19, VAR_5, VAR_7)) < 0)
                return VAR_16;

            if (VAR_19->num_coded_vals) {
                VAR_18 = &VAR_3[FUNC_3(VAR_4, 2)];

                for (VAR_8 = 0; VAR_8 < VAR_19->num_coded_vals; VAR_8++) {
                    VAR_10 = FUNC_6(VAR_4, VAR_18->table, VAR_18->bits, 1);
                    VAR_19->qu_wordlen[VAR_8] = (VAR_20->qu_wordlen[VAR_8] + VAR_10) & 7;
                }
            }
        } else {
            VAR_9 = FUNC_3(VAR_4, 2);
            if ((VAR_16 = FUNC_7(VAR_4, VAR_19, VAR_5, VAR_7)) < 0)
                return VAR_16;

            if (VAR_19->num_coded_vals) {
                VAR_12 = FUNC_3(VAR_4, 5);
                if (VAR_12 > VAR_19->num_coded_vals) {
                    FUNC_2(VAR_7, VAR_1,
                           "WL mode 1: invalid position!\n");
                    return VAR_0;
                }

                VAR_13 = FUNC_3(VAR_4, 2);
                VAR_14 = FUNC_3(VAR_4, 3);

                for (VAR_8 = 0; VAR_8 < VAR_12; VAR_8++)
                    VAR_19->qu_wordlen[VAR_8] = FUNC_3(VAR_4, 3);

                for (VAR_8 = VAR_12; VAR_8 < VAR_19->num_coded_vals; VAR_8++)
                    VAR_19->qu_wordlen[VAR_8] = (VAR_14 + FUNC_5(VAR_4, VAR_13)) & 7;
            }
        }
        break;
    case 2:
        if ((VAR_16 = FUNC_7(VAR_4, VAR_19, VAR_5, VAR_7)) < 0)
            return VAR_16;

        if (VAR_6 && VAR_19->num_coded_vals) {
            VAR_18 = &VAR_3[FUNC_3(VAR_4, 2)];
            VAR_10 = FUNC_6(VAR_4, VAR_18->table, VAR_18->bits, 1);
            VAR_19->qu_wordlen[0] = (VAR_20->qu_wordlen[0] + VAR_10) & 7;

            for (VAR_8 = 1; VAR_8 < VAR_19->num_coded_vals; VAR_8++) {
                VAR_11 = VAR_20->qu_wordlen[VAR_8] - VAR_20->qu_wordlen[VAR_8 - 1];
                VAR_10 = FUNC_6(VAR_4, VAR_18->table, VAR_18->bits, 1);
                VAR_19->qu_wordlen[VAR_8] = (VAR_19->qu_wordlen[VAR_8 - 1] + VAR_11 + VAR_10) & 7;
            }
        } else if (VAR_19->num_coded_vals) {
            VAR_15 = FUNC_3(VAR_4, 1);
            VAR_18 = &VAR_3[FUNC_3(VAR_4, 1)];

            VAR_17 = FUNC_3(VAR_4, 3);
            FUNC_8(VAR_17,
                            &VAR_2[VAR_17][FUNC_3(VAR_4, 4)][0],
                            VAR_19->qu_wordlen, VAR_19->num_coded_vals);

            if (!VAR_15) {
                for (VAR_8 = 0; VAR_8 < VAR_19->num_coded_vals; VAR_8++) {
                    VAR_10 = FUNC_6(VAR_4, VAR_18->table, VAR_18->bits, 1);
                    VAR_19->qu_wordlen[VAR_8] = (VAR_19->qu_wordlen[VAR_8] + VAR_10) & 7;
                }
            } else {
                for (VAR_8 = 0; VAR_8 < (VAR_19->num_coded_vals & - 2); VAR_8 += 2)
                    if (!FUNC_4(VAR_4)) {
                        VAR_19->qu_wordlen[VAR_8] = (VAR_19->qu_wordlen[VAR_8] +
                                                   FUNC_6(VAR_4, VAR_18->table,
                                                            VAR_18->bits, 1)) & 7;
                        VAR_19->qu_wordlen[VAR_8 + 1] = (VAR_19->qu_wordlen[VAR_8 + 1] +
                                                   FUNC_6(VAR_4, VAR_18->table,
                                                            VAR_18->bits, 1)) & 7;
                    }

                if (VAR_19->num_coded_vals & 1)
                    VAR_19->qu_wordlen[VAR_8] = (VAR_19->qu_wordlen[VAR_8] +
                                           FUNC_6(VAR_4, VAR_18->table,
                                                    VAR_18->bits, 1)) & 7;
            }
        }
        break;
    case 3:
        VAR_9 = FUNC_3(VAR_4, 2);
        if ((VAR_16 = FUNC_7(VAR_4, VAR_19, VAR_5, VAR_7)) < 0)
            return VAR_16;

        if (VAR_19->num_coded_vals) {
            VAR_18 = &VAR_3[FUNC_3(VAR_4, 2)];


            VAR_19->qu_wordlen[0] = FUNC_3(VAR_4, 3);

            for (VAR_8 = 1; VAR_8 < VAR_19->num_coded_vals; VAR_8++) {
                VAR_10 = FUNC_6(VAR_4, VAR_18->table, VAR_18->bits, 1);
                VAR_19->qu_wordlen[VAR_8] = (VAR_19->qu_wordlen[VAR_8 - 1] + VAR_10) & 7;
            }
        }
        break;
    }

    if (VAR_19->fill_mode == 2) {
        for (VAR_8 = VAR_19->num_coded_vals; VAR_8 < VAR_5->num_quant_units; VAR_8++)
            VAR_19->qu_wordlen[VAR_8] = VAR_6 ? FUNC_4(VAR_4) : 1;
    } else if (VAR_19->fill_mode == 3) {
        VAR_12 = VAR_6 ? VAR_19->num_coded_vals + VAR_19->split_point
                     : VAR_5->num_quant_units - VAR_19->split_point;
        if (VAR_12 > FUNC_0(VAR_19->qu_wordlen)) {
            FUNC_2(VAR_7, VAR_1, "Split point beyond array\n");
            VAR_12 = FUNC_0(VAR_19->qu_wordlen);
        }
        for (VAR_8 = VAR_19->num_coded_vals; VAR_8 < VAR_12; VAR_8++)
            VAR_19->qu_wordlen[VAR_8] = 1;
    }

    if (VAR_9)
        return FUNC_1(VAR_5, VAR_19, VAR_9, VAR_7);

    return 0;
}
