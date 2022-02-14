
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int settings; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int gdouble ;
typedef int GhbValue ;


 int * FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (TYPE_1__*,char*,int ) ;

void FUNC_9(signal_user_data_t *VAR_0)
{
    int VAR_1;
    GhbValue *VAR_2 = FUNC_6(VAR_0->settings);
    int VAR_3 = FUNC_3(VAR_2);

    for (VAR_1 = 0; VAR_1 < VAR_3; VAR_1++)
    {
        GhbValue *VAR_4 = FUNC_2(VAR_2, VAR_1);
        FUNC_7(VAR_0->settings, VAR_4);
    }

    GhbValue *VAR_5 = FUNC_0(VAR_0, ((void*)0));
    if (VAR_5 != ((void*)0))
    {
        FUNC_8(VAR_0, "AudioEncoder",
                      FUNC_4(VAR_5, "Encoder"));
        FUNC_8(VAR_0, "AudioBitrate",
                      FUNC_4(VAR_5, "Bitrate"));
        gdouble VAR_6 = FUNC_1(VAR_5);
        FUNC_8(VAR_0, "AudioTrackQualityX", FUNC_5(VAR_6));
        FUNC_8(VAR_0, "AudioSamplerate",
                      FUNC_4(VAR_5, "Samplerate"));
        FUNC_8(VAR_0, "AudioMixdown",
                      FUNC_4(VAR_5, "Mixdown"));
        FUNC_8(VAR_0, "AudioTrackDRCSlider",
                      FUNC_4(VAR_5, "DRC"));
    }
}
