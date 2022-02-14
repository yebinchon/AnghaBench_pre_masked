
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int list_audio; } ;
typedef TYPE_2__ hb_title_t ;
struct TYPE_11__ {int format; } ;
typedef TYPE_3__ hb_container_t ;
struct TYPE_9__ {int codec; } ;
struct TYPE_12__ {TYPE_1__ in; } ;
typedef TYPE_4__ hb_audio_config_t ;
typedef scalar_t__ gint ;
typedef int gdouble ;
typedef scalar_t__ gboolean ;
typedef int GhbValue ;


 int VAR_0 ;
 int * FUNC_0 (int *,scalar_t__,scalar_t__,int ,scalar_t__,scalar_t__,scalar_t__,int ,int ) ;
 int * FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 char* FUNC_4 (int *,char*) ;
 scalar_t__ FUNC_5 (TYPE_2__ const*,char const*,int) ;
 scalar_t__ FUNC_6 (int *) ;
 TYPE_3__* FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (int ,int ,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (int *,scalar_t__) ;
 scalar_t__ FUNC_10 (int *,char*) ;
 scalar_t__ FUNC_11 (int *,char*) ;
 scalar_t__ FUNC_12 (int *,char*) ;
 scalar_t__ FUNC_13 (int *,char*) ;
 TYPE_4__* FUNC_14 (int ,scalar_t__) ;

__attribute__((used)) static GhbValue*
FUNC_15(
    const hb_title_t *VAR_1,
    GhbValue *VAR_2,
    GhbValue *VAR_3,
    const char *VAR_4,
    int VAR_5,
    int VAR_6)
{
    GhbValue *VAR_7, *VAR_8 = ((void*)0);
    gdouble VAR_9, VAR_10, VAR_11;
    gboolean VAR_12;
    gint VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;

    gint VAR_18;
    gint VAR_19;

    const char *VAR_20;
    const hb_container_t *VAR_21;

    VAR_20 = FUNC_4(VAR_2, "FileFormat");
    VAR_21 = FUNC_7(VAR_20);

    gint VAR_22 = FUNC_6(VAR_2);

    VAR_7 = FUNC_1(VAR_3, VAR_5);

    VAR_14 = FUNC_11(VAR_7, "AudioEncoder");
    VAR_19 = FUNC_9(VAR_2, VAR_14);

    VAR_15 = FUNC_10(VAR_7, "AudioBitrate");
    VAR_16 = FUNC_12(VAR_7, "AudioSamplerate");
    VAR_17 = FUNC_13(VAR_7, "AudioMixdown");
    VAR_9 = FUNC_3(VAR_7, "AudioTrackDRCSlider");
    VAR_10 = FUNC_3(VAR_7, "AudioTrackGainSlider");
    VAR_12 = FUNC_2(VAR_7, "AudioTrackQualityEnable");
    VAR_11 = FUNC_3(VAR_7, "AudioTrackQuality");
    if (VAR_12)
    {
        VAR_15 = -1;
    }
    else
    {
        VAR_11 = VAR_0;
    }

    VAR_13 = FUNC_5(VAR_1, VAR_4, VAR_6);
    if (VAR_13 >= 0)
    {




        hb_audio_config_t *VAR_23;
        VAR_23 = FUNC_14(VAR_1->list_audio, VAR_13);
        VAR_18 = FUNC_8(
                            VAR_21->format, VAR_23->in.codec, VAR_14, VAR_19, VAR_22);

        VAR_8 = FUNC_0(VAR_2, VAR_13, VAR_18,
                                    VAR_11, VAR_15,
                                    VAR_16, VAR_17, VAR_9, VAR_10);
    }
    return VAR_8;
}
