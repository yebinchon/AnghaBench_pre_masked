
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int group_order; int group_size; int nb_channels; int frequency_range; scalar_t__* fft_level_exp; scalar_t__ superblocktype_2_3; } ;
typedef TYPE_1__ QDM2Context ;
typedef int GetBitContext ;


 int VAR_0 ;
 int FUNC_0 (size_t*) ;
 int FUNC_1 (int *,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int,int,int,int,int,int) ;
 int FUNC_6 (int *,int *,int,int) ;
 int * VAR_6 ;

__attribute__((used)) static void FUNC_7(QDM2Context *VAR_7, int VAR_8,
                                  GetBitContext *VAR_9, int VAR_10)
{
    int VAR_11, VAR_12, VAR_13, VAR_14;
    int VAR_15, VAR_16, VAR_17, VAR_18;
    int VAR_19, VAR_20, VAR_21, VAR_22;
    int VAR_23, VAR_24;

    VAR_15 = 0;
    VAR_22 = 0;
    VAR_21 = 2;
    VAR_16 = (4 - VAR_8);
    VAR_18 = 1 << (VAR_7->group_order - VAR_8 - 1);
    VAR_24 = 1;

    while (FUNC_4(VAR_9)>0) {
        if (VAR_7->superblocktype_2_3) {
            while ((VAR_23 = FUNC_6(VAR_9, &VAR_6[VAR_16], 1, 2)) < 2) {
                if (FUNC_4(VAR_9)<0) {
                    if(VAR_15 < VAR_7->group_size)
                        FUNC_1(((void*)0), VAR_0, "overread in qdm2_fft_decode_tones()\n");
                    return;
                }
                VAR_24 = 1;
                if (VAR_23 == 0) {
                    VAR_15 += VAR_18;
                    VAR_22 += (1 << VAR_16);
                } else {
                    VAR_15 += 8 * VAR_18;
                    VAR_22 += (8 << VAR_16);
                }
            }
            VAR_24 += (VAR_23 - 2);
        } else {
            if (VAR_18 <= 2) {
                FUNC_1(((void*)0), VAR_0, "qdm2_fft_decode_tones() stuck\n");
                return;
            }
            VAR_24 += FUNC_6(VAR_9, &VAR_6[VAR_16], 1, 2);
            while (VAR_24 >= (VAR_18 - 1)) {
                VAR_24 += (1 - (VAR_18 - 1));
                VAR_15 += VAR_18;
                VAR_22 += (1 << VAR_16);
            }
        }

        if (VAR_15 >= VAR_7->group_size)
            return;

        VAR_19 = (VAR_24 >> VAR_16);
        if (VAR_19 >= FUNC_0(VAR_3))
            return;

        if (VAR_7->nb_channels > 1) {
            VAR_11 = FUNC_3(VAR_9);
            VAR_12 = FUNC_3(VAR_9);
        } else {
            VAR_11 = 0;
            VAR_12 = 0;
        }

        VAR_14 = FUNC_6(VAR_9, (VAR_10 ? &VAR_2 : &VAR_1), 0, 2);
        VAR_14 += VAR_7->fft_level_exp[VAR_3[VAR_19]];
        VAR_14 = (VAR_14 < 0) ? 0 : VAR_14;

        VAR_13 = FUNC_2(VAR_9, 3);
        VAR_20 = 0;
        VAR_17 = 0;

        if (VAR_12) {
            VAR_20 = (VAR_14 - FUNC_6(VAR_9, &VAR_4, 0, 1));
            VAR_17 = (VAR_13 - FUNC_6(VAR_9, &VAR_5, 0, 1));
            if (VAR_17 < 0)
                VAR_17 += 8;
        }

        if (VAR_7->frequency_range > (VAR_19 + 1)) {
            int VAR_25 = (VAR_21 + VAR_22);

            FUNC_5(VAR_7, VAR_25, VAR_24, VAR_8,
                                      VAR_11, VAR_14, VAR_13);
            if (VAR_12)
                FUNC_5(VAR_7, VAR_25, VAR_24, VAR_8,
                                          1 - VAR_11,
                                          VAR_20, VAR_17);
        }
        VAR_24++;
    }
}
