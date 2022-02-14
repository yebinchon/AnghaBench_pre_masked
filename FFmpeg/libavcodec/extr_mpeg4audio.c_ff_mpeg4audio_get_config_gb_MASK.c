
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ object_type; int chan_config; int channels; int sbr; int ps; scalar_t__ ext_object_type; int ext_chan_config; void* sample_rate; void* ext_sample_rate; int ext_sampling_index; int sampling_index; } ;
typedef TYPE_1__ MPEG4AudioConfig ;
typedef int GetBitContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (char,char,char,char) ;
 int FUNC_2 (void*,int ,char*,size_t) ;
 int* VAR_8 ;
 int FUNC_3 (int *,int) ;
 void* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 void* FUNC_7 (int *) ;
 void* FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,TYPE_1__*) ;
 int FUNC_10 (int *,int) ;
 scalar_t__ FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int) ;

int FUNC_14(MPEG4AudioConfig *VAR_9, GetBitContext *VAR_10,
                                int VAR_11, void *VAR_12)
{
    int VAR_13, VAR_14;
    int VAR_15 = FUNC_5(VAR_10);
    VAR_9->object_type = FUNC_7(VAR_10);
    VAR_9->sample_rate = FUNC_8(VAR_10, &VAR_9->sampling_index);
    VAR_9->chan_config = FUNC_3(VAR_10, 4);
    if (VAR_9->chan_config < FUNC_0(VAR_8))
        VAR_9->channels = VAR_8[VAR_9->chan_config];
    else {
        FUNC_2(VAR_12, VAR_7, "Invalid chan_config %d\n", VAR_9->chan_config);
        return VAR_6;
    }
    VAR_9->sbr = -1;
    VAR_9->ps = -1;
    if (VAR_9->object_type == VAR_5 || (VAR_9->object_type == VAR_4 &&

        !(FUNC_10(VAR_10, 3) & 0x03 && !(FUNC_10(VAR_10, 9) & 0x3F)))) {
        if (VAR_9->object_type == VAR_4)
            VAR_9->ps = 1;
        VAR_9->ext_object_type = VAR_5;
        VAR_9->sbr = 1;
        VAR_9->ext_sample_rate = FUNC_8(VAR_10, &VAR_9->ext_sampling_index);
        VAR_9->object_type = FUNC_7(VAR_10);
        if (VAR_9->object_type == VAR_2)
            VAR_9->ext_chan_config = FUNC_3(VAR_10, 4);
    } else {
        VAR_9->ext_object_type = VAR_3;
        VAR_9->ext_sample_rate = 0;
    }
    VAR_13 = FUNC_5(VAR_10);

    if (VAR_9->object_type == VAR_1) {
        FUNC_12(VAR_10, 5);
        if (FUNC_11(VAR_10, 24) != FUNC_1('\0','A','L','S'))
            FUNC_13(VAR_10, 24);

        VAR_13 = FUNC_5(VAR_10);

        VAR_14 = FUNC_9(VAR_10, VAR_9);
        if (VAR_14 < 0)
            return VAR_14;
    }

    if (VAR_9->ext_object_type != VAR_5 && VAR_11) {
        while (FUNC_6(VAR_10) > 15) {
            if (FUNC_10(VAR_10, 11) == 0x2b7) {
                FUNC_3(VAR_10, 11);
                VAR_9->ext_object_type = FUNC_7(VAR_10);
                if (VAR_9->ext_object_type == VAR_5 && (VAR_9->sbr = FUNC_4(VAR_10)) == 1) {
                    VAR_9->ext_sample_rate = FUNC_8(VAR_10, &VAR_9->ext_sampling_index);
                    if (VAR_9->ext_sample_rate == VAR_9->sample_rate)
                        VAR_9->sbr = -1;
                }
                if (FUNC_6(VAR_10) > 11 && FUNC_3(VAR_10, 11) == 0x548)
                    VAR_9->ps = FUNC_4(VAR_10);
                break;
            } else
                FUNC_4(VAR_10);
        }
    }


    if (!VAR_9->sbr)
        VAR_9->ps = 0;

    if ((VAR_9->ps == -1 && VAR_9->object_type != VAR_0) || VAR_9->channels & ~0x01)
        VAR_9->ps = 0;

    return VAR_13 - VAR_15;
}
