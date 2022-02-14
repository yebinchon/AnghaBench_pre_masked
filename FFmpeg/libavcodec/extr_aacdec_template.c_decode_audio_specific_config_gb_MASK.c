
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int sampling_index; int object_type; int sbr; int ps; int sample_rate; int chan_config; } ;
typedef TYPE_1__ MPEG4AudioConfig ;
typedef int GetBitContext ;
typedef int AVCodecContext ;
typedef int AACContext ;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,char*,int) ;
 int FUNC_2 (int *,char*,char*,int) ;
 int FUNC_3 (int *,int *,int *,TYPE_1__*,int ) ;
 int FUNC_4 (int *,int *,int *,int,TYPE_1__*,int ) ;
 int FUNC_5 (int *,char*,int,int ,int,int ,int,int ) ;
 int FUNC_6 (TYPE_1__*,int *,int,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static int FUNC_9(AACContext *VAR_3,
                                           AVCodecContext *VAR_4,
                                           MPEG4AudioConfig *VAR_5,
                                           GetBitContext *VAR_6,
                                           int VAR_7,
                                           int VAR_8)
{
    int VAR_9, VAR_10;
    GetBitContext VAR_11 = *VAR_6;

    if ((VAR_9 = FUNC_6(VAR_5, &VAR_11, VAR_8, VAR_4)) < 0)
        return VAR_0;

    if (VAR_5->sampling_index > 12) {
        FUNC_1(VAR_4, VAR_1,
               "invalid sampling rate index %d\n",
               VAR_5->sampling_index);
        return VAR_0;
    }
    if (VAR_5->object_type == 128 &&
        (VAR_5->sampling_index < 3 || VAR_5->sampling_index > 7)) {
        FUNC_1(VAR_4, VAR_1,
               "invalid low delay sampling rate index %d\n",
               VAR_5->sampling_index);
        return VAR_0;
    }

    FUNC_8(VAR_6, VAR_9);

    switch (VAR_5->object_type) {
    case 132:
    case 134:
    case 131:
    case 133:
    case 129:
    case 128:
        if ((VAR_10 = FUNC_4(VAR_3, VAR_4, VAR_6, VAR_7,
                                            VAR_5, VAR_5->chan_config)) < 0)
            return VAR_10;
        break;
    case 130:
        if ((VAR_10 = FUNC_3(VAR_3, VAR_4, VAR_6,
                                              VAR_5, VAR_5->chan_config)) < 0)
            return VAR_10;
        break;
    default:
        FUNC_2(VAR_4,
                                      "Audio object type %s%d",
                                      VAR_5->sbr == 1 ? "SBR+" : "",
                                      VAR_5->object_type);
        return FUNC_0(VAR_2);
    }

    FUNC_5(VAR_4,
            "AOT %d chan config %d sampling index %d (%d) SBR %d PS %d\n",
            VAR_5->object_type, VAR_5->chan_config, VAR_5->sampling_index,
            VAR_5->sample_rate, VAR_5->sbr,
            VAR_5->ps);

    return FUNC_7(VAR_6);
}
