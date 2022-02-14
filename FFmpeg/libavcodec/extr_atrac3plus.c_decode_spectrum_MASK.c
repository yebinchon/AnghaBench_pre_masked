
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int* qu_wordlen; int* qu_tab_idx; size_t table_type; int * power_levs; int * spectrum; } ;
struct TYPE_8__ {int used_quant_units; int num_coded_subbands; TYPE_3__* channels; int use_full_table; } ;
struct TYPE_7__ {int redirect; } ;
typedef int GetBitContext ;
typedef TYPE_1__ Atrac3pSpecCodeTab ;
typedef TYPE_2__ Atrac3pChanUnitCtx ;
typedef TYPE_3__ Atrac3pChanParams ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int*** VAR_1 ;
 TYPE_1__* VAR_2 ;
 int* VAR_3 ;
 int FUNC_0 (int *,TYPE_1__ const*,int *,int *,int) ;
 size_t* VAR_4 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int ,int) ;
 int * VAR_5 ;

__attribute__((used)) static void FUNC_4(GetBitContext *VAR_6, Atrac3pChanUnitCtx *VAR_7,
                            int VAR_8, AVCodecContext *VAR_9)
{
    int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
    const Atrac3pSpecCodeTab *VAR_17;
    Atrac3pChanParams *VAR_18;

    for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
        VAR_18 = &VAR_7->channels[VAR_11];

        FUNC_3(VAR_18->spectrum, 0, sizeof(VAR_18->spectrum));


        FUNC_3(VAR_18->power_levs, VAR_0, sizeof(VAR_18->power_levs));

        for (VAR_12 = 0; VAR_12 < VAR_7->used_quant_units; VAR_12++) {
            VAR_16 = VAR_4[VAR_12 + 1] -
                        VAR_4[VAR_12];

            VAR_13 = VAR_18->qu_wordlen[VAR_12];
            VAR_14 = VAR_18->qu_tab_idx[VAR_12];
            if (VAR_13) {
                if (!VAR_7->use_full_table)
                    VAR_14 = VAR_1[VAR_18->table_type][VAR_13 - 1][VAR_14];

                VAR_15 = (VAR_18->table_type * 8 + VAR_14) * 7 + VAR_13 - 1;
                VAR_17 = &VAR_2[VAR_15];


                if (VAR_17->redirect >= 0)
                    VAR_15 = VAR_17->redirect;

                FUNC_0(VAR_6, VAR_17, &VAR_5[VAR_15],
                                  &VAR_18->spectrum[VAR_4[VAR_12]],
                                  VAR_16);
            } else if (VAR_11 && VAR_7->channels[0].qu_wordlen[VAR_12] && !VAR_14) {

                FUNC_2(&VAR_18->spectrum[VAR_4[VAR_12]],
                       &VAR_7->channels[0].spectrum[VAR_4[VAR_12]],
                       VAR_16 *
                       sizeof(VAR_18->spectrum[VAR_4[VAR_12]]));
                VAR_18->qu_wordlen[VAR_12] = VAR_7->channels[0].qu_wordlen[VAR_12];
            }
        }





        if (VAR_7->used_quant_units > 2) {
            VAR_16 = VAR_3[VAR_7->num_coded_subbands - 1];
            for (VAR_10 = 0; VAR_10 < VAR_16; VAR_10++)
                VAR_18->power_levs[VAR_10] = FUNC_1(VAR_6, 4);
        }
    }
}
