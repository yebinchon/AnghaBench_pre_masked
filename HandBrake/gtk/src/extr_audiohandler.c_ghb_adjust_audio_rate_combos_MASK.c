
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef void* uint64_t ;
struct TYPE_5__ {int builder; int settings; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int gdouble ;
typedef int GtkWidget ;
typedef int GhbValue ;


 int * FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int) ;
 void* FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (void*,int,int) ;
 int * FUNC_10 (int ,int) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int *,char*) ;
 int FUNC_14 (int *,char*) ;
 int FUNC_15 (TYPE_1__*,char*,int ) ;
 int FUNC_16 (int,int,int,int*,int*) ;

__attribute__((used)) static void
FUNC_17(signal_user_data_t *VAR_0, GhbValue *VAR_1)
{
    if (VAR_1 != ((void*)0))
    {
        FUNC_12(VAR_0->settings, VAR_1);

        int VAR_2, VAR_3, VAR_4;
        GhbValue * VAR_5;
        uint64_t VAR_6;

        VAR_2 = FUNC_6(VAR_1, "Track");

        VAR_4 = FUNC_13(VAR_1, "Encoder");
        VAR_3 = FUNC_14(VAR_1, "Mixdown");

        int VAR_7, VAR_8, VAR_9;
        VAR_9 = FUNC_6(VAR_1, "Samplerate");
        VAR_5 = FUNC_10(VAR_0->settings, VAR_2);
        if (VAR_9 == 0)
        {
            VAR_9 = FUNC_6(VAR_5, "SampleRate");
        }
        VAR_6 = FUNC_6(VAR_5, "ChannelLayout");
        VAR_3 = FUNC_9(VAR_6, VAR_4, VAR_3);
        FUNC_16(VAR_4, VAR_9, VAR_3, &VAR_7, &VAR_8);

        GtkWidget *VAR_10 = FUNC_0(VAR_0->builder, "AudioBitrate");
        FUNC_3(FUNC_1(VAR_10), VAR_7, VAR_8);
        VAR_10 = FUNC_0(VAR_0->builder, "AudioMixdown");
        FUNC_11(FUNC_1(VAR_10), VAR_4);
        VAR_10 = FUNC_0(VAR_0->builder, "AudioSamplerate");
        FUNC_5(FUNC_1(VAR_10), VAR_4);

        FUNC_15(VAR_0, "AudioEncoder",
                      FUNC_7(VAR_1, "Encoder"));
        FUNC_15(VAR_0, "AudioBitrate",
                      FUNC_7(VAR_1, "Bitrate"));
        gdouble VAR_11 = FUNC_2(VAR_1);
        FUNC_15(VAR_0, "AudioTrackQualityX", FUNC_8(VAR_11));
        FUNC_15(VAR_0, "AudioSamplerate",
                      FUNC_7(VAR_1, "Samplerate"));
        FUNC_15(VAR_0, "AudioMixdown",
                      FUNC_7(VAR_1, "Mixdown"));
        FUNC_15(VAR_0, "AudioTrackDRCSlider",
                      FUNC_7(VAR_1, "DRC"));
        FUNC_4(VAR_0);
    }
}
