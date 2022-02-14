
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int signal_user_data_t ;
typedef int gboolean ;
typedef int GhbValue ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int *) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (double) ;
 char* FUNC_3 (double) ;
 double FUNC_4 (int,double) ;
 char* FUNC_5 (int,double) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int) ;
 double FUNC_8 (int *,char*) ;
 int * FUNC_9 (int *,char*) ;
 int * FUNC_10 (double) ;
 int FUNC_11 (int *,char*) ;
 int * FUNC_12 (char*) ;
 int FUNC_13 (int *,char*,int *) ;

__attribute__((used)) static void
FUNC_14(signal_user_data_t *VAR_3, GhbValue *VAR_4)
{
    if (VAR_4 != ((void*)0))
    {
        double VAR_5, VAR_6, VAR_7, VAR_8;
        char *VAR_9, *VAR_10, *VAR_11;
        gboolean VAR_12;

        VAR_2 = VAR_1;
        FUNC_13(VAR_3, "AudioTrack",
                      FUNC_9(VAR_4, "Track"));
        FUNC_13(VAR_3, "AudioEncoder",
                      FUNC_9(VAR_4, "Encoder"));
        FUNC_13(VAR_3, "AudioBitrate",
                      FUNC_9(VAR_4, "Bitrate"));
        GhbValue *VAR_13 = FUNC_9(VAR_4, "Name");
        if (VAR_13 != ((void*)0))
        {
            FUNC_13(VAR_3, "AudioTrackName", VAR_13);
        }
        else
        {
            FUNC_13(VAR_3, "AudioTrackName", FUNC_12(""));
        }
        FUNC_13(VAR_3, "AudioSamplerate",
                      FUNC_9(VAR_4, "Samplerate"));
        FUNC_13(VAR_3, "AudioMixdown",
                      FUNC_9(VAR_4, "Mixdown"));
        FUNC_13(VAR_3, "AudioTrackDRCSlider",
                      FUNC_9(VAR_4, "DRC"));
        VAR_6 = FUNC_8(VAR_4, "DRC");
        VAR_10 = FUNC_2(VAR_6);
        FUNC_13(VAR_3, "AudioTrackDRCValue", FUNC_12(VAR_10));
        FUNC_1(VAR_10);
        FUNC_13(VAR_3, "AudioTrackGainSlider",
                      FUNC_9(VAR_4, "Gain"));
        VAR_5 = FUNC_8(VAR_4, "Gain");
        VAR_9 = FUNC_3(VAR_5);
        FUNC_13(VAR_3, "AudioTrackGainValue", FUNC_12(VAR_9));

        int VAR_14 = FUNC_11(VAR_4, "Encoder");
        VAR_7 = FUNC_8(VAR_4, "Quality");
        VAR_8 = FUNC_4(VAR_14, VAR_7);
        FUNC_13(VAR_3, "AudioTrackQualityX", FUNC_10(VAR_8));
        VAR_11 = FUNC_5(VAR_14, VAR_7);
        FUNC_13(VAR_3, "AudioTrackQualityValue", FUNC_12(VAR_11));
        FUNC_1(VAR_11);


        VAR_12 = FUNC_6(VAR_4);
        if (VAR_12)
        {
            FUNC_13(VAR_3, "AudioTrackQualityEnable",
                          FUNC_7(VAR_12));
        }
        else
        {
            FUNC_13(VAR_3, "AudioTrackBitrateEnable",
                          FUNC_7(!VAR_12));
        }
        VAR_2 = VAR_0;
    }
    FUNC_0(VAR_3, VAR_4, ((void*)0));
}
