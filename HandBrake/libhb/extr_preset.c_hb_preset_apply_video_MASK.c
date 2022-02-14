
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int const hb_value_t ;
struct TYPE_3__ {int muxers; int short_name; } ;
typedef TYPE_1__ hb_encoder_t ;
typedef int const hb_dict_t ;


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
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int const* FUNC_3 (int const*,char*) ;
 int const* FUNC_4 () ;
 int FUNC_5 (int const*,char*) ;
 int FUNC_6 (int const*,char*,int const*) ;
 int FUNC_7 (char*,char*,...) ;
 int const* FUNC_8 (int const*) ;
 scalar_t__ FUNC_9 (int const*) ;
 scalar_t__ FUNC_10 (int const*) ;
 int FUNC_11 (int const*) ;
 int FUNC_12 (int const*) ;
 char* FUNC_13 (int const*) ;
 int const* FUNC_14 (int) ;
 int const* FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int const*) ;
 int const* FUNC_17 (int const*,int ) ;
 TYPE_1__* FUNC_18 (int) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int) ;

int FUNC_21(const hb_dict_t *VAR_13, hb_dict_t *VAR_14)
{
    hb_dict_t *VAR_15, *VAR_16, *VAR_17;
    hb_value_t *VAR_18, *VAR_19;
    int VAR_20, VAR_21, VAR_22, VAR_23;
    hb_encoder_t *VAR_24;

    VAR_15 = FUNC_3(VAR_14, "Destination");
    VAR_20 = FUNC_1(FUNC_12(
                                                FUNC_3(VAR_15, "Mux")));
    VAR_19 = FUNC_3(VAR_13, "VideoEncoder");
    if (FUNC_16(VAR_19) == VAR_11)
    {
        VAR_21 = FUNC_19(
                    FUNC_12(VAR_19));
    }
    else
    {
        VAR_21 = FUNC_11(VAR_19);
    }
    VAR_24 = FUNC_18(VAR_21);
    if (VAR_24 == ((void*)0))
    {
        char *VAR_25 = FUNC_13(VAR_19);
        FUNC_7("Invalid video encoder (%s)", VAR_25);
        FUNC_0(VAR_25);
        return -1;
    }
    if (!(VAR_24->muxers & VAR_20))
    {
        FUNC_7("Incompatible video encoder (%s) for muxer (%s)",
                  FUNC_20(VAR_21),
                  FUNC_2(VAR_20));
        return -1;
    }

    VAR_16 = FUNC_3(VAR_14, "Video");
    FUNC_6(VAR_16, "Encoder", FUNC_15(VAR_24->short_name));

    VAR_23 = FUNC_11(FUNC_3(VAR_13, "VideoColorMatrixCodeOveride"));
    if (VAR_23 != 0)
    {
        int VAR_26, VAR_27, VAR_28;

        switch (VAR_23)
        {
            case 4:

                VAR_26 = VAR_3;
                VAR_27 = VAR_7;
                VAR_28 = VAR_0;
                break;
            case 3:

                VAR_26 = VAR_4;
                VAR_27 = VAR_7;
                VAR_28 = VAR_1;
                break;
            case 2:

                VAR_26 = VAR_5;
                VAR_27 = VAR_7;
                VAR_28 = VAR_2;
                break;
            case 1:
            default:

                VAR_26 = VAR_6;
                VAR_27 = VAR_7;
                VAR_28 = VAR_2;
                break;
        }

        FUNC_6(VAR_16, "ColorPrimariesOverride",
                    FUNC_14(VAR_26));
        FUNC_6(VAR_16, "ColorTransferOverride",
                    FUNC_14(VAR_27));
        FUNC_6(VAR_16, "ColorMatrixOverride",
                    FUNC_14(VAR_28));
    }
    FUNC_6(VAR_16, "Encoder", FUNC_8(VAR_19));

    if ((VAR_21 & VAR_12) &&
        FUNC_9(FUNC_3(VAR_13, "x264UseAdvancedOptions")))
    {
        FUNC_6(VAR_16, "Options",
                    FUNC_8(FUNC_3(VAR_13, "x264Option")));
    }
    else
    {
        if ((VAR_18 = FUNC_3(VAR_13, "VideoPreset")) != ((void*)0))
            FUNC_6(VAR_16, "Preset", FUNC_8(VAR_18));
        if ((VAR_18 = FUNC_3(VAR_13, "VideoProfile")) != ((void*)0))
            FUNC_6(VAR_16, "Profile", FUNC_8(VAR_18));
        if ((VAR_18 = FUNC_3(VAR_13, "VideoLevel")) != ((void*)0))
            FUNC_6(VAR_16, "Level", FUNC_8(VAR_18));
        if ((VAR_18 = FUNC_3(VAR_13, "VideoTune")) != ((void*)0))
            FUNC_6(VAR_16, "Tune", FUNC_8(VAR_18));
        if ((VAR_18 = FUNC_3(VAR_13, "VideoOptionExtra")) != ((void*)0))
            FUNC_6(VAR_16, "Options", FUNC_8(VAR_18));
    }

    VAR_22 = FUNC_11(FUNC_3(VAR_13, "VideoQualityType"));
    if (VAR_22 == 2)
    {
        FUNC_6(VAR_16, "Quality",
                    FUNC_17(FUNC_3(VAR_13, "VideoQualitySlider"),
                                   VAR_9));
        FUNC_5(VAR_16, "Bitrate");
    }
    else if (VAR_22 == 1)
    {
        FUNC_6(VAR_16, "Bitrate",
                    FUNC_17(FUNC_3(VAR_13, "VideoAvgBitrate"),
                                   VAR_10));
        FUNC_6(VAR_16, "TwoPass",
                    FUNC_17(FUNC_3(VAR_13, "VideoTwoPass"),
                                   VAR_8));
        FUNC_6(VAR_16, "Turbo",
                    FUNC_17(FUNC_3(VAR_13, "VideoTurboTwoPass"),
                                   VAR_8));
        FUNC_5(VAR_16, "Quality");
    }
    else
    {
        VAR_18 = FUNC_3(VAR_13, "VideoQualitySlider");
        if (VAR_18 != ((void*)0) && FUNC_10(VAR_18) >= 0)
        {
            FUNC_6(VAR_16, "Quality",
                        FUNC_17(VAR_18, VAR_9));
            FUNC_5(VAR_16, "Bitrate");
        }
        else
        {
            FUNC_6(VAR_16, "Bitrate",
                        FUNC_17(FUNC_3(VAR_13, "VideoAvgBitrate"),
                                       VAR_10));
            FUNC_6(VAR_16, "TwoPass",
                        FUNC_17(FUNC_3(VAR_13, "VideoTwoPass"),
                                       VAR_8));
            FUNC_6(VAR_16, "Turbo",
                        FUNC_17(FUNC_3(VAR_13, "VideoTurboTwoPass"),
                                       VAR_8));
            FUNC_5(VAR_16, "Quality");
        }
    }
    VAR_17 = FUNC_3(VAR_16, "QSV");
    if (VAR_17 == ((void*)0))
    {
        VAR_17 = FUNC_4();
        FUNC_6(VAR_16, "QSV", VAR_17);
    }
    if ((VAR_18 = FUNC_3(VAR_13, "VideoQSVDecode")) != ((void*)0))
    {
        FUNC_6(VAR_17, "Decode",
                    FUNC_17(VAR_18, VAR_8));
    }
    if ((VAR_18 = FUNC_3(VAR_13, "VideoQSVLowPower")) != ((void*)0))
    {
        FUNC_6(VAR_17, "LowPower",
                    FUNC_17(VAR_18, VAR_8));
    }
     if ((VAR_18 = FUNC_3(VAR_13, "VideoQSVAsyncDepth")) != ((void*)0))
    {
        FUNC_6(VAR_17, "AsyncDepth",
                    FUNC_17(VAR_18, VAR_10));
    }

    return 0;
}
