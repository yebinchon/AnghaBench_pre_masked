
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int key ;
typedef int hb_value_t ;
typedef int hb_value_array_t ;
struct TYPE_9__ {int list_audio; } ;
typedef TYPE_2__ hb_title_t ;
typedef int const hb_dict_t ;
struct TYPE_8__ {scalar_t__* name; int codec; } ;
struct TYPE_10__ {TYPE_1__ in; } ;
typedef TYPE_3__ hb_audio_config_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_2__*,char const*,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char const*) ;
 int * FUNC_4 (int const*,char*) ;
 char* FUNC_5 (int const*,char*) ;
 int const* FUNC_6 () ;
 int FUNC_7 (int const*,char*,int ) ;
 int FUNC_8 (int const*,char*,char const*) ;
 TYPE_3__* FUNC_9 (int ,int) ;
 int FUNC_10 (TYPE_2__*,int const*) ;
 int FUNC_11 (int *,int const*) ;
 int const* FUNC_12 (int *,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int const**) ;
 scalar_t__ FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int) ;
 int FUNC_21 (int ) ;
 scalar_t__ FUNC_22 (int *) ;
 int FUNC_23 (int *,int ) ;
 int FUNC_24 (int ,int,int,int,int) ;
 int FUNC_25 (char*,int,char*,int) ;
 int const* FUNC_26 (int const*,int) ;

__attribute__((used)) static void FUNC_27(hb_value_array_t *VAR_6, const hb_dict_t *VAR_7,
                               hb_title_t *VAR_8, int VAR_9, int VAR_10,
                               int VAR_11, const char *VAR_12,
                               int VAR_13, int VAR_14, hb_dict_t *VAR_15)
{
    hb_value_array_t * VAR_16 = FUNC_4(VAR_7, "AudioList");
    int VAR_17 = FUNC_13(VAR_16);
    int VAR_18 = FUNC_0(VAR_8, VAR_12, 0, VAR_13);
    while (VAR_18 >= 0)
    {
        int VAR_19 = FUNC_13(VAR_6);
        char VAR_20[8];
        FUNC_25(VAR_20, sizeof(VAR_20), "%d", VAR_18);

        VAR_17 = VAR_14 && VAR_19 ? 1 : VAR_17;
        int VAR_21;
        for (VAR_21 = 0; VAR_21 < VAR_17; VAR_21++)
        {


            hb_dict_t *VAR_22 = FUNC_26(VAR_15, VAR_21);
            if (FUNC_17(FUNC_4(VAR_22, VAR_20)))
                continue;


            hb_dict_t *VAR_23 = FUNC_6();
            hb_value_t *VAR_24;
            hb_dict_t *VAR_25 = FUNC_12(VAR_16, VAR_21);
            int VAR_26;

            VAR_24 = FUNC_4(VAR_25, "AudioEncoder");
            if (FUNC_22(VAR_24) == VAR_5)
            {
                VAR_26 = FUNC_1(
                                FUNC_19(VAR_24));
            }
            else
            {
                VAR_26 = FUNC_18(VAR_24);
            }


            FUNC_7(VAR_23, "PresetEncoder",
                FUNC_21(FUNC_2(VAR_26)));

            hb_audio_config_t *VAR_27;
            VAR_27 = FUNC_9(VAR_8->list_audio, VAR_18);
            VAR_26 = FUNC_24(VAR_27->in.codec, VAR_26,
                                             VAR_10, VAR_11, VAR_9);
            if (VAR_26 == VAR_1 || VAR_0)
            {
                FUNC_16(&VAR_23);
                continue;
            }
            FUNC_7(VAR_23, "Track", FUNC_20(VAR_18));
            FUNC_7(VAR_23, "Encoder", FUNC_21(
                        FUNC_2(VAR_26)));
            const char * VAR_28 = FUNC_5(VAR_25, "AudioTrackName");
            if (VAR_28 != ((void*)0) && VAR_28[0] != 0)
            {
                FUNC_8(VAR_23, "Name", VAR_28);
            }
            else if (VAR_27->in.name != ((void*)0) && VAR_27->in.name[0] != 0)
            {
                FUNC_8(VAR_23, "Name", VAR_27->in.name);
            }
            if (!(VAR_26 & VAR_2))
            {
                if (FUNC_4(VAR_25, "AudioTrackGainSlider") != ((void*)0))
                {
                    FUNC_7(VAR_23, "Gain", FUNC_15(
                        FUNC_4(VAR_25, "AudioTrackGainSlider")));
                }
                if (FUNC_4(VAR_25, "AudioTrackDRCSlider") != ((void*)0))
                {
                    FUNC_7(VAR_23, "DRC", FUNC_15(
                        FUNC_4(VAR_25, "AudioTrackDRCSlider")));
                }
                if (FUNC_4(VAR_25, "AudioMixdown") != ((void*)0))
                {
                    FUNC_7(VAR_23, "Mixdown", FUNC_15(
                        FUNC_4(VAR_25, "AudioMixdown")));
                }
                if (FUNC_4(VAR_25, "AudioNormalizeMixLevel") != ((void*)0))
                {
                    FUNC_7(VAR_23, "NormalizeMixLevel", FUNC_15(
                        FUNC_4(VAR_25, "AudioNormalizeMixLevel")));
                }
                if (FUNC_4(VAR_25, "AudioDitherMethod") != ((void*)0))
                {
                    FUNC_7(VAR_23, "DitherMethod", FUNC_15(
                        FUNC_4(VAR_25, "AudioDitherMethod")));
                }
                if (FUNC_4(VAR_25, "AudioSamplerate") != ((void*)0))
                {
                    const char * VAR_29;
                    int VAR_30;

                    VAR_29 = FUNC_5(VAR_25,
                                                 "AudioSamplerate");
                    VAR_30 = FUNC_3(VAR_29);
                    if (VAR_30 < 0)
                    {
                        VAR_30 = 0;
                    }
                    FUNC_7(VAR_23, "Samplerate", FUNC_20(VAR_30));
                }
                if (FUNC_4(VAR_25, "AudioCompressionLevel") != ((void*)0))
                {
                    FUNC_7(VAR_23, "CompressionLevel", FUNC_15(
                        FUNC_4(VAR_25, "AudioCompressionLevel")));
                }
                if (FUNC_17(FUNC_4(VAR_25,
                                                  "AudioTrackQualityEnable")))
                {
                    FUNC_7(VAR_23, "Quality", FUNC_23(
                            FUNC_4(VAR_25, "AudioTrackQuality"),
                            VAR_3));
                }
                else
                {
                    FUNC_7(VAR_23, "Bitrate", FUNC_23(
                        FUNC_4(VAR_25, "AudioBitrate"),
                        VAR_4));
                }
            }


            FUNC_10(VAR_8, VAR_23);

            FUNC_11(VAR_6, VAR_23);
            FUNC_7(VAR_22, VAR_20, FUNC_14(1));
        }
        if (VAR_13 == 2)
            VAR_18 = FUNC_0(VAR_8, VAR_12, VAR_18 + 1, VAR_13);
        else
            break;
    }
}
