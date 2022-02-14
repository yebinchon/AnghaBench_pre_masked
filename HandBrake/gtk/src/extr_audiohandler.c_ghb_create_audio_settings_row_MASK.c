
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
struct TYPE_7__ {int codec; } ;
typedef TYPE_2__ hb_encoder_t ;
typedef char gchar ;
typedef int GtkWidget ;
typedef int GtkScaleButton ;
typedef int GtkRadioButton ;
typedef int GtkLabel ;
typedef int GtkComboBox ;
typedef int GtkButton ;
typedef int GtkBox ;
typedef int GCallback ;


 int * FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 int * FUNC_3 (int ) ;
 int * FUNC_4 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_5 (int ) ;
 int VAR_6 ;
 int * FUNC_6 (int ) ;
 int * FUNC_7 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 char* FUNC_8 (char*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int * FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,char*,int ,TYPE_1__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int *,char*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (double,int,double,char const**) ;
 int FUNC_20 (int *,int ) ;
 int FUNC_21 (int *,int *,int*) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 () ;
 int FUNC_24 (char*) ;
 int FUNC_25 (int *,int ) ;
 int FUNC_26 () ;
 int FUNC_27 (char*) ;
 int FUNC_28 (int *,int) ;
 int FUNC_29 (int *,char*) ;
 int FUNC_30 (int *,char*) ;
 int FUNC_31 (int *) ;
 int FUNC_32 (int *,int ) ;
 int FUNC_33 (int *,int ) ;
 int FUNC_34 (int *,char*) ;
 int FUNC_35 (int *,int,int) ;
 int FUNC_36 (int *,char*) ;
 int FUNC_37 (int *,int ) ;
 int FUNC_38 (int *) ;
 TYPE_2__* FUNC_39 (int *) ;

GtkWidget * FUNC_40(signal_user_data_t *VAR_17)
{
    GtkBox *VAR_18, *VAR_19, *VAR_20;
    GtkComboBox *VAR_21;
    GtkScaleButton *VAR_22;
    GtkLabel *VAR_23;
    GtkRadioButton *VAR_24;
    GtkButton *VAR_25;

    VAR_18 = FUNC_1(FUNC_22(VAR_4, 0));


    VAR_25 = FUNC_2(FUNC_24(FUNC_8("Add")));
    FUNC_36(FUNC_7(VAR_25),
    FUNC_8("Add an audio encoder.\n"
      "Each selected source track will be encoded with all selected encoders."));
    FUNC_37(FUNC_7(VAR_25), VAR_0);
    FUNC_34(FUNC_7(VAR_25), "add_button");
    FUNC_31(FUNC_7(VAR_25));
    FUNC_10(VAR_25, "clicked", (GCallback)VAR_15, VAR_17);
    FUNC_14(VAR_18, FUNC_7(VAR_25));


    VAR_19 = FUNC_1(FUNC_22(VAR_4, 0));
    FUNC_33(FUNC_7(VAR_19), VAR_8);
    FUNC_32(FUNC_7(VAR_19), VAR_2);
    FUNC_34(FUNC_7(VAR_19), "settings_box");


    VAR_21 = FUNC_3(FUNC_26());
    FUNC_16(VAR_21);
    FUNC_12(VAR_21);

    const hb_encoder_t *VAR_26 = FUNC_39(((void*)0));
    FUNC_20(FUNC_7(VAR_21), FUNC_17(VAR_26->codec));
    FUNC_36(FUNC_7(VAR_21),
      FUNC_8("Set the audio codec to encode this track with."));
    FUNC_37(FUNC_7(VAR_21), VAR_0);
    FUNC_34(FUNC_7(VAR_21), "AudioEncoder");
    FUNC_38(FUNC_7(VAR_21));
    FUNC_10(VAR_21, "changed", (GCallback)VAR_11, VAR_17);
    FUNC_14(VAR_19, FUNC_7(VAR_21));

    VAR_20 = FUNC_1(FUNC_22(VAR_4, 0));
    FUNC_34(FUNC_7(VAR_20), "br_q_box");
    FUNC_38(FUNC_7(VAR_20));


    GtkBox *VAR_27;
    VAR_27 = FUNC_1(FUNC_22(VAR_5, 0));
    VAR_24 = FUNC_5(FUNC_29(((void*)0), FUNC_8("Bitrate")));
    FUNC_34(FUNC_7(VAR_24), "AudioTrackBitrateEnable");
    FUNC_38(FUNC_7(VAR_24));
    FUNC_14(VAR_27, FUNC_7(VAR_24));
    VAR_24 = FUNC_5(
                FUNC_30(VAR_24, FUNC_8("Quality")));
    FUNC_34(FUNC_7(VAR_24), "AudioTrackQualityEnable");
    FUNC_10(VAR_24, "toggled", (GCallback)VAR_14, VAR_17);
    FUNC_38(FUNC_7(VAR_24));
    FUNC_14(VAR_27, FUNC_7(VAR_24));
    FUNC_38(FUNC_7(VAR_27));
    FUNC_14(VAR_20, FUNC_7(VAR_27));


    VAR_21 = FUNC_3(FUNC_26());
    FUNC_16(VAR_21);
    FUNC_11(VAR_21);
    FUNC_20(FUNC_7(VAR_21), FUNC_17(192));
    FUNC_36(FUNC_7(VAR_21),
      FUNC_8("Set the bitrate to encode this track with."));
    FUNC_37(FUNC_7(VAR_21), VAR_0);
    FUNC_34(FUNC_7(VAR_21), "AudioBitrate");
    FUNC_38(FUNC_7(VAR_21));
    FUNC_10(VAR_21, "changed", (GCallback)VAR_10, VAR_17);
    FUNC_14(VAR_20, FUNC_7(VAR_21));

    GtkBox *VAR_28;
    VAR_28 = FUNC_1(FUNC_22(VAR_4, 0));
    FUNC_34(FUNC_7(VAR_28), "AudioTrackQualityBox");


    const gchar *VAR_29[] = {
        "weather-storm",
        "weather-clear",
        "weather-storm",
        "weather-showers-scattered",
        "weather-showers",
        "weather-overcast",
        "weather-few-clouds",
        "weather-clear",
        ((void*)0)
    };
    VAR_22 = FUNC_6(FUNC_19(0, 10, 0.1, VAR_29));
    FUNC_36(FUNC_7(VAR_22),
      FUNC_8("<b>Audio Quality:</b>\n"
        "For encoders that support it, adjust the quality of the output."));

    FUNC_37(FUNC_7(VAR_22), VAR_0);
    FUNC_34(FUNC_7(VAR_22), "AudioTrackQualityX");
    FUNC_38(FUNC_7(VAR_22));
    FUNC_10(VAR_22, "value-changed", (GCallback)VAR_13, VAR_17);
    FUNC_14(VAR_28, FUNC_7(VAR_22));


    VAR_23 = FUNC_4(FUNC_27("0.00"));
    FUNC_28(VAR_23, 4);
    FUNC_32(FUNC_7(VAR_23), VAR_3);
    FUNC_37(FUNC_7(VAR_23), VAR_0);
    FUNC_34(FUNC_7(VAR_23), "AudioTrackQualityValue");
    FUNC_38(FUNC_7(VAR_23));
    FUNC_14(VAR_28, FUNC_7(VAR_23));
    FUNC_31(FUNC_7(VAR_28));
    FUNC_14(VAR_20, FUNC_7(VAR_28));
    FUNC_14(VAR_19, FUNC_7(VAR_20));


    VAR_21 = FUNC_3(FUNC_26());
    FUNC_16(VAR_21);
    FUNC_18(VAR_21);
    FUNC_20(FUNC_7(VAR_21), FUNC_17(VAR_7));
    FUNC_36(FUNC_7(VAR_21),
      FUNC_8("Set the mixdown of the output audio track."));
    FUNC_37(FUNC_7(VAR_21), VAR_0);
    FUNC_34(FUNC_7(VAR_21), "AudioMixdown");
    FUNC_38(FUNC_7(VAR_21));
    FUNC_10(VAR_21, "changed", (GCallback)VAR_10, VAR_17);
    FUNC_14(VAR_19, FUNC_7(VAR_21));


    VAR_21 = FUNC_3(FUNC_26());
    FUNC_16(VAR_21);
    FUNC_13(VAR_21);
    FUNC_20(FUNC_7(VAR_21), FUNC_17(0));
    FUNC_36(FUNC_7(VAR_21),
      FUNC_8("Set the sample rate of the output audio track."));
    FUNC_37(FUNC_7(VAR_21), VAR_0);
    FUNC_34(FUNC_7(VAR_21), "AudioSamplerate");
    FUNC_38(FUNC_7(VAR_21));
    FUNC_10(VAR_21, "changed", (GCallback)VAR_10, VAR_17);
    FUNC_14(VAR_19, FUNC_7(VAR_21));

    VAR_20 = FUNC_1(FUNC_22(VAR_4, 0));
    FUNC_34(FUNC_7(VAR_20), "gain_box");
    FUNC_38(FUNC_7(VAR_20));


    const gchar *VAR_30[] = {
        "audio-volume-muted",
        "audio-volume-high",
        "audio-volume-low",
        "audio-volume-medium",
        ((void*)0)
    };
    VAR_22 = FUNC_6(FUNC_19(-20, 21, 1, VAR_30));
    FUNC_36(FUNC_7(VAR_22),
      FUNC_8("<b>Audio Gain:</b> "
        "Adjust the amplification or attenuation of the output audio track."));

    FUNC_37(FUNC_7(VAR_22), VAR_0);
    FUNC_34(FUNC_7(VAR_22), "AudioTrackGainSlider");
    FUNC_38(FUNC_7(VAR_22));
    FUNC_10(VAR_22, "value-changed", (GCallback)VAR_12, VAR_17);
    FUNC_14(VAR_20, FUNC_7(VAR_22));


    VAR_23 = FUNC_4(FUNC_27(FUNC_8("0dB")));
    FUNC_28(VAR_23, 6);
    FUNC_32(FUNC_7(VAR_23), VAR_3);
    FUNC_37(FUNC_7(VAR_23), VAR_0);
    FUNC_34(FUNC_7(VAR_23), "AudioTrackGainValue");
    FUNC_38(FUNC_7(VAR_23));
    FUNC_14(VAR_20, FUNC_7(VAR_23));
    FUNC_14(VAR_19, FUNC_7(VAR_20));

    VAR_20 = FUNC_1(FUNC_22(VAR_4, 0));
    FUNC_34(FUNC_7(VAR_20), "drc_box");
    FUNC_38(FUNC_7(VAR_20));


    const gchar *VAR_31[] = {
        "audio-input-microphone",
        ((void*)0)
    };
    VAR_22 = FUNC_6(FUNC_19(0.9, 4, 0.1, VAR_31));
    FUNC_36(FUNC_7(VAR_22),
      FUNC_8("<b>Dynamic Range Compression:</b> "
        "Adjust the dynamic range of the output audio track.\n\n"
        "For source audio that has a wide dynamic range "
        "(very loud and very soft sequences),\n"
        "DRC allows you to 'compress' the range by making "
        "loud sounds softer and soft sounds louder."));

    FUNC_37(FUNC_7(VAR_22), VAR_0);
    FUNC_34(FUNC_7(VAR_22), "AudioTrackDRCSlider");
    FUNC_38(FUNC_7(VAR_22));
    FUNC_10(VAR_22, "value-changed", (GCallback)VAR_9, VAR_17);
    FUNC_14(VAR_20, FUNC_7(VAR_22));


    VAR_23 = FUNC_4(FUNC_27(FUNC_8("Off")));
    FUNC_28(VAR_23, 4);
    FUNC_32(FUNC_7(VAR_23), VAR_3);
    FUNC_37(FUNC_7(VAR_23), VAR_0);
    FUNC_34(FUNC_7(VAR_23), "AudioTrackDRCValue");
    FUNC_38(FUNC_7(VAR_23));
    FUNC_14(VAR_20, FUNC_7(VAR_23));
    FUNC_14(VAR_19, FUNC_7(VAR_20));


    VAR_25 = FUNC_2(FUNC_23());
    FUNC_33(FUNC_7(VAR_25), VAR_8);
    FUNC_32(FUNC_7(VAR_25), VAR_2);
    FUNC_15(VAR_25, "hb-remove");
    FUNC_36(FUNC_7(VAR_25),
    FUNC_8("Remove this audio encoder"));
    FUNC_25(VAR_25, VAR_6);
    FUNC_37(FUNC_7(VAR_25), VAR_0);
    FUNC_32(FUNC_7(VAR_25), VAR_1);
    FUNC_34(FUNC_7(VAR_25), "remove_button");
    FUNC_38(FUNC_7(VAR_25));
    FUNC_10(VAR_25, "clicked", (GCallback)VAR_16, VAR_17);
    FUNC_14(VAR_19, FUNC_7(VAR_25));

    FUNC_38(FUNC_7(VAR_19));
    FUNC_14(VAR_18, FUNC_7(VAR_19));

    FUNC_38(FUNC_7(VAR_18));

    GtkWidget *VAR_32;

    int VAR_33;
    VAR_32 = FUNC_9(FUNC_7(VAR_18), "AudioEncoder");
    FUNC_21(VAR_32, ((void*)0), &VAR_33);

    VAR_32 = FUNC_0(VAR_17->builder, "audio_defaults_encoder_label");
    FUNC_35(VAR_32, VAR_33, -1);
    VAR_32 = FUNC_9(FUNC_7(VAR_18), "br_q_box");
    FUNC_21(VAR_32, ((void*)0), &VAR_33);
    VAR_32 = FUNC_0(VAR_17->builder, "audio_defaults_bitrate_label");
    FUNC_35(VAR_32, VAR_33, -1);
    VAR_32 = FUNC_9(FUNC_7(VAR_18), "AudioMixdown");
    FUNC_21(VAR_32, ((void*)0), &VAR_33);
    VAR_32 = FUNC_0(VAR_17->builder, "audio_defaults_mixdown_label");
    FUNC_35(VAR_32, VAR_33, -1);
    VAR_32 = FUNC_9(FUNC_7(VAR_18), "AudioSamplerate");
    FUNC_21(VAR_32, ((void*)0), &VAR_33);
    VAR_32 = FUNC_0(VAR_17->builder, "audio_defaults_samplerate_label");
    FUNC_35(VAR_32, VAR_33, -1);
    VAR_32 = FUNC_9(FUNC_7(VAR_18), "gain_box");
    FUNC_21(VAR_32, ((void*)0), &VAR_33);
    VAR_32 = FUNC_0(VAR_17->builder, "audio_defaults_gain_label");
    FUNC_35(VAR_32, VAR_33, -1);
    VAR_32 = FUNC_9(FUNC_7(VAR_18), "drc_box");
    FUNC_21(VAR_32, ((void*)0), &VAR_33);
    VAR_32 = FUNC_0(VAR_17->builder, "audio_defaults_drc_label");
    FUNC_35(VAR_32, VAR_33, -1);

    return FUNC_7(VAR_18);
}
