
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t audio_mode; int ext_audio_mask; unsigned int xxch_core_mask; int xxch_mask_nbits; unsigned int xxch_spkr_mask; } ;
typedef TYPE_1__ DCACoreDecoder ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int* VAR_10 ;
 int** VAR_11 ;

__attribute__((used)) static int FUNC_0(DCACoreDecoder *VAR_12, int VAR_13)
{
    int VAR_14, VAR_15;


    VAR_14 = VAR_10[VAR_12->audio_mode];
    if (VAR_13 < VAR_14) {
        VAR_15 = VAR_11[VAR_12->audio_mode][VAR_13];
        if (VAR_12->ext_audio_mask & (VAR_1 | VAR_2)) {
            if (VAR_12->xxch_core_mask & (1U << VAR_15))
                return VAR_15;
            if (VAR_15 == VAR_4 && (VAR_12->xxch_core_mask & VAR_6))
                return VAR_5;
            if (VAR_15 == VAR_8 && (VAR_12->xxch_core_mask & VAR_7))
                return VAR_9;
            return -1;
        }
        return VAR_15;
    }


    if ((VAR_12->ext_audio_mask & VAR_0) && VAR_13 == VAR_14)
        return VAR_3;


    if (VAR_12->ext_audio_mask & (VAR_1 | VAR_2)) {
        for (VAR_15 = VAR_3; VAR_15 < VAR_12->xxch_mask_nbits; VAR_15++)
            if (VAR_12->xxch_spkr_mask & (1U << VAR_15))
                if (VAR_14++ == VAR_13)
                    return VAR_15;
    }


    return -1;
}
