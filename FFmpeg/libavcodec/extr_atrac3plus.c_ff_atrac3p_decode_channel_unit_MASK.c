
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int num_quant_units; int used_quant_units; void* noise_table_index; void* noise_level_index; void* noise_present; void* num_coded_subbands; int negate_coeffs; int swap_channels; void* num_subbands; void* mute_flag; } ;
typedef int GetBitContext ;
typedef TYPE_1__ Atrac3pChanUnitCtx ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 void** VAR_2 ;
 int FUNC_0 (int *,int ,char*,int) ;
 int FUNC_1 (int *,TYPE_1__*,int,int *) ;
 int FUNC_2 (int *,TYPE_1__*,int,int *) ;
 int FUNC_3 (int *,TYPE_1__*,int,int *) ;
 int FUNC_4 (int *,TYPE_1__*,int,int *) ;
 int FUNC_5 (int *,TYPE_1__*,int,int *) ;
 int FUNC_6 (int *,TYPE_1__*,int,int *) ;
 int FUNC_7 (int *,TYPE_1__*,int) ;
 void* FUNC_8 (int *,int) ;
 void* FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,void*) ;

int FUNC_11(GetBitContext *VAR_3, Atrac3pChanUnitCtx *VAR_4,
                                   int VAR_5, AVCodecContext *VAR_6)
{
    int VAR_7;


    VAR_4->num_quant_units = FUNC_8(VAR_3, 5) + 1;
    if (VAR_4->num_quant_units > 28 && VAR_4->num_quant_units < 32) {
        FUNC_0(VAR_6, VAR_1,
               "Invalid number of quantization units: %d!\n",
               VAR_4->num_quant_units);
        return VAR_0;
    }

    VAR_4->mute_flag = FUNC_9(VAR_3);


    if ((VAR_7 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6)) < 0)
        return VAR_7;

    VAR_4->num_subbands = VAR_2[VAR_4->num_quant_units - 1] + 1;
    VAR_4->num_coded_subbands = VAR_4->used_quant_units
                              ? VAR_2[VAR_4->used_quant_units - 1] + 1
                              : 0;

    if ((VAR_7 = FUNC_4(VAR_3, VAR_4, VAR_5, VAR_6)) < 0)
        return VAR_7;

    if ((VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6)) < 0)
        return VAR_7;

    FUNC_5(VAR_3, VAR_4, VAR_5, VAR_6);

    if (VAR_5 == 2) {
        FUNC_10(VAR_3, VAR_4->swap_channels, VAR_4->num_coded_subbands);
        FUNC_10(VAR_3, VAR_4->negate_coeffs, VAR_4->num_coded_subbands);
    }

    FUNC_7(VAR_3, VAR_4, VAR_5);

    if ((VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6)) < 0)
        return VAR_7;

    if ((VAR_7 = FUNC_6(VAR_3, VAR_4, VAR_5, VAR_6)) < 0)
        return VAR_7;


    VAR_4->noise_present = FUNC_9(VAR_3);
    if (VAR_4->noise_present) {
        VAR_4->noise_level_index = FUNC_8(VAR_3, 4);
        VAR_4->noise_table_index = FUNC_8(VAR_3, 4);
    }

    return 0;
}
