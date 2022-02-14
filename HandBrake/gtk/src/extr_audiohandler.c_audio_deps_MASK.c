
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int builder; int * settings; } ;
typedef TYPE_2__ signal_user_data_t ;
typedef int hb_title_t ;
struct TYPE_10__ {int samplerate; int codec_param; int codec; } ;
struct TYPE_12__ {TYPE_1__ in; } ;
typedef TYPE_3__ hb_audio_config_t ;
typedef int gboolean ;
typedef int GtkWidget ;
typedef int GhbValue ;


 int * FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int,int,int,int) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_2__*,int *,int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;
 TYPE_3__* FUNC_6 (int const*,int) ;
 int FUNC_7 (TYPE_2__*) ;
 int * FUNC_8 (int,int *) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (int *,int) ;
 scalar_t__ FUNC_12 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_13(signal_user_data_t *VAR_2, GhbValue *VAR_3, GtkWidget *VAR_4)
{
    FUNC_2(VAR_2, VAR_3);
    FUNC_7(VAR_2);
    if (VAR_4 != ((void*)0))
        FUNC_3(VAR_2, VAR_4, ((void*)0));

    int VAR_5 = -1, VAR_6, VAR_7 = 0, VAR_8 = 0, VAR_9 = 0;
    hb_audio_config_t *VAR_10 = ((void*)0);
    const hb_title_t *VAR_11;
    gboolean VAR_12;

    VAR_6 = FUNC_5(VAR_2->settings, "title");
    VAR_11 = FUNC_8(VAR_6, ((void*)0));

    if (VAR_3 != ((void*)0))
    {
        VAR_5 = FUNC_5(VAR_3, "Track");
        VAR_8 = FUNC_9(VAR_3, "Encoder");
        VAR_10 = FUNC_6(VAR_11, VAR_5);
        VAR_7 = FUNC_10(VAR_3, "Mixdown");
        VAR_9 = FUNC_5(VAR_3, "Samplerate");
        if (VAR_9 == 0 && VAR_10 != ((void*)0))
        {
            VAR_9 = VAR_10->in.samplerate;
        }
    }

    gboolean VAR_13 = (VAR_8 & VAR_0);
    gboolean VAR_14 = VAR_1;
    if (VAR_10 != ((void*)0))
    {
        VAR_14 = FUNC_12(VAR_10->in.codec,
                                            VAR_10->in.codec_param, VAR_8) &&
                     !VAR_13;
    }

    VAR_4 = FUNC_0(VAR_2->builder, "AudioTrackDRCSlider");
    FUNC_11(VAR_4, VAR_14);
    VAR_4 = FUNC_0(VAR_2->builder, "AudioTrackDRCSliderLabel");
    FUNC_11(VAR_4, VAR_14);
    VAR_4 = FUNC_0(VAR_2->builder, "AudioTrackDRCValue");
    FUNC_11(VAR_4, VAR_14);

    VAR_12 = FUNC_4(VAR_2->settings, "AudioTrackQualityEnable");
    FUNC_1(VAR_2, VAR_12, VAR_8, VAR_9, VAR_7);

    VAR_4 = FUNC_0(VAR_2->builder, "AudioMixdown");
    FUNC_11(VAR_4, !VAR_13);
    VAR_4 = FUNC_0(VAR_2->builder, "AudioSamplerate");
    FUNC_11(VAR_4, !VAR_13);
    VAR_4 = FUNC_0(VAR_2->builder, "AudioTrackGainSlider");
    FUNC_11(VAR_4, !VAR_13);
    VAR_4 = FUNC_0(VAR_2->builder, "AudioTrackGainValue");
    FUNC_11(VAR_4, !VAR_13);
}
