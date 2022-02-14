
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gint ;
typedef char gchar ;
typedef int GhbValue ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 int * FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int * FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*) ;
 char* FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,char*,int ) ;
 int FUNC_11 (int *,char*,int) ;
 int FUNC_12 (int *,char*,int) ;
 int FUNC_13 (int *,char*,char const*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (char*,char*) ;
 int FUNC_16 (int *,int,char const*) ;
 int FUNC_17 (int *,char*) ;
 int FUNC_18 (int ) ;
 char* FUNC_19 (int *) ;
 int FUNC_20 (char const*) ;
 int FUNC_21 (char*,char*) ;
 scalar_t__ FUNC_22 (char const*,char*) ;
 char* FUNC_23 (char*,char*,char**) ;

void
FUNC_24(GhbValue *VAR_2, GhbValue *VAR_3)
{

    FUNC_9(VAR_2, "x264Option");


    FUNC_17(VAR_2, "Initialization");


    FUNC_4(VAR_2, VAR_3);



    FUNC_10(VAR_2, "scale_height", FUNC_18(
        FUNC_8(VAR_2, "PictureHeight")));

    FUNC_10(VAR_2, "scale_width", FUNC_18(
        FUNC_8(VAR_2, "PictureWidth")));

    int VAR_4, VAR_5, VAR_6, VAR_7;

    VAR_4 = FUNC_6(VAR_2, "PictureWidth");
    VAR_5 = FUNC_6(VAR_2, "PictureHeight");
    VAR_6 = FUNC_6(VAR_2, "UsesPictureSettings");

    VAR_7 = VAR_6 != 1 || (VAR_4 == 0 && VAR_5 == 0);
    FUNC_11(VAR_2, "autoscale", VAR_7);
    FUNC_12(VAR_2, "PictureWidthEnable", !VAR_7);
    FUNC_12(VAR_2, "PictureHeightEnable", !VAR_7);

    gint VAR_8;

    VAR_8 = FUNC_6(VAR_2, "VideoQualityType");



    switch (VAR_8)
    {
    case 0:
    {
        FUNC_11(VAR_2, "vquality_type_bitrate", VAR_1);
        FUNC_11(VAR_2, "vquality_type_constant", VAR_0);
    } break;
    case 1:
    {
        FUNC_11(VAR_2, "vquality_type_bitrate", VAR_1);
        FUNC_11(VAR_2, "vquality_type_constant", VAR_0);
    } break;
    case 2:
    {
        FUNC_11(VAR_2, "vquality_type_bitrate", VAR_0);
        FUNC_11(VAR_2, "vquality_type_constant", VAR_1);
    } break;
    default:
    {
        FUNC_11(VAR_2, "vquality_type_bitrate", VAR_0);
        FUNC_11(VAR_2, "vquality_type_constant", VAR_1);
    } break;
    }

    const gchar *VAR_9 = FUNC_7(VAR_2, "VideoFramerateMode");
    if (VAR_9 != ((void*)0) && FUNC_22(VAR_9, "cfr") == 0)
    {
        FUNC_11(VAR_2, "VideoFramerateCFR", VAR_1);
        FUNC_11(VAR_2, "VideoFrameratePFR", VAR_0);
        FUNC_11(VAR_2, "VideoFramerateVFR", VAR_0);
    }
    else if (VAR_9 != ((void*)0) && FUNC_22(VAR_9, "pfr") == 0)
    {
        FUNC_11(VAR_2, "VideoFramerateCFR", VAR_0);
        FUNC_11(VAR_2, "VideoFrameratePFR", VAR_1);
        FUNC_11(VAR_2, "VideoFramerateVFR", VAR_0);
    }
    else
    {
        FUNC_11(VAR_2, "VideoFramerateCFR", VAR_0);
        FUNC_11(VAR_2, "VideoFrameratePFR", VAR_0);
        FUNC_11(VAR_2, "VideoFramerateVFR", VAR_1);
    }

    int VAR_10;
    const char *VAR_11;

    VAR_10 = FUNC_14(VAR_2);
    VAR_11 = FUNC_7(VAR_2, "VideoPreset");
    FUNC_16(VAR_2, VAR_10, VAR_11);

    char *VAR_12;
    char *VAR_13 = ((void*)0);
    char *VAR_14;
    char *VAR_15;

    VAR_12 = FUNC_1(FUNC_7(VAR_2, "VideoTune"));
    if (VAR_12 != ((void*)0))
    {
        VAR_15 = FUNC_23(VAR_12, ",./-+", &VAR_14);
        FUNC_11(VAR_2, "x264FastDecode", VAR_0);
        FUNC_11(VAR_2, "x264ZeroLatency", VAR_0);
        while (VAR_15 != ((void*)0))
        {
            if (!FUNC_21(VAR_15, "fastdecode"))
            {
                FUNC_11(VAR_2, "x264FastDecode", VAR_1);
            }
            else if (!FUNC_21(VAR_15, "zerolatency"))
            {
                FUNC_11(VAR_2, "x264ZeroLatency", VAR_1);
            }
            else if (VAR_13 == ((void*)0))
            {
                VAR_13 = FUNC_1(VAR_15);
            }
            else
            {
                FUNC_15("Superfluous tunes! %s", VAR_15);
            }
            VAR_15 = FUNC_23(((void*)0), ",./-+", &VAR_14);
        }
        FUNC_0(VAR_12);
    }
    if (VAR_13 != ((void*)0))
    {
        FUNC_13(VAR_2, "VideoTune", VAR_13);
        FUNC_0(VAR_13);
    }

    const char *VAR_16;
    VAR_16 = FUNC_7(VAR_2, "VideoProfile");
    if (VAR_16 != ((void*)0))
        FUNC_13(VAR_2, "VideoProfile", VAR_16);

    const char *VAR_17;
    VAR_17 = FUNC_7(VAR_2, "VideoLevel");
    if (VAR_17 != ((void*)0))
        FUNC_13(VAR_2, "VideoLevel", VAR_17);

    if (FUNC_5(VAR_2, "x264OptionExtra") != ((void*)0))
    {
        const char *VAR_18;
        VAR_18 = FUNC_7(VAR_2, "x264OptionExtra");
        FUNC_13(VAR_2, "VideoOptionExtra", VAR_18);
    }


    GhbValue *VAR_19;
    VAR_19 = FUNC_5(VAR_3, "AudioCopyMask");
    if (VAR_19 != ((void*)0))
    {
        int VAR_20 = FUNC_3(VAR_19);
        int VAR_21;
        for (VAR_21 = 0; VAR_21 < VAR_20; VAR_21++)
        {
            GhbValue *VAR_22 = FUNC_2(VAR_19, VAR_21);
            const char *VAR_23 = FUNC_19(VAR_22);
            int VAR_24 = FUNC_20(VAR_23);
            switch (VAR_24)
            {
                default:
                    break;
                case 130:
                case 129:
                    FUNC_11(VAR_2, "AudioAllowMP3Pass", 1);
                    break;
                case 143:
                case 137:
                case 136:
                case 146:
                    FUNC_11(VAR_2, "AudioAllowAACPass", 1);
                    break;
                case 145:
                case 144:
                    FUNC_11(VAR_2, "AudioAllowAC3Pass", 1);
                    break;
                case 142:
                case 139:
                    FUNC_11(VAR_2, "AudioAllowDTSPass", 1);
                    break;
                case 141:
                case 140:
                    FUNC_11(VAR_2, "AudioAllowDTSHDPass", 1);
                    break;
                case 135:
                case 138:
                    FUNC_11(VAR_2, "AudioAllowEAC3Pass", 1);
                    break;
                case 134:
                case 133:
                case 131:
                    FUNC_11(VAR_2, "AudioAllowFLACPass", 1);
                    break;
                case 132:
                case 128:
                    FUNC_11(VAR_2, "AudioAllowTRUEHDPass", 1);
                    break;
            }
        }
    }
}
