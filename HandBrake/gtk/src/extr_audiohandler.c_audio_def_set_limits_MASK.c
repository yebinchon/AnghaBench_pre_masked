
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * settings; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int gint ;
typedef int gdouble ;
typedef int gboolean ;
typedef int GtkWidget ;
typedef int GtkListBoxRow ;
typedef int GhbValue ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *,int,int,int ) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int ,char*) ;
 int * FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int,int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int *,char*) ;
 int * FUNC_11 (int *,char*) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *,char*) ;
 int FUNC_15 (int *,char*) ;
 int FUNC_16 (int *,char*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int,int,int,int*,int*) ;
 scalar_t__ FUNC_19 (int) ;

void FUNC_20(signal_user_data_t *VAR_3, GtkWidget *VAR_4, gboolean VAR_5)
{
    GtkListBoxRow *VAR_6 = FUNC_4(VAR_4);
    gint VAR_7 = FUNC_17(VAR_6);

    GhbValue *VAR_8 = FUNC_11(VAR_3->settings, "AudioList");
    int VAR_9 = FUNC_7(VAR_8);
    if (VAR_7 < 0 || VAR_7 >= VAR_9)
        return;

    GhbValue *VAR_10 = FUNC_6(VAR_8, VAR_7);

    int VAR_11 = FUNC_14(VAR_10, "AudioEncoder");
    int VAR_12 = FUNC_14(VAR_3->settings,
                                                    "AudioEncoderFallback");
    gdouble VAR_13 = FUNC_10(VAR_10, "AudioTrackQuality");




    gboolean VAR_14 =
        FUNC_19(VAR_11) != VAR_2 ||
        (VAR_11 == VAR_0 &&
         FUNC_19(VAR_12) != VAR_2);
    FUNC_2(FUNC_1(VAR_6), VAR_14);

    int VAR_15;
    if (VAR_14)
    {
        VAR_15 = VAR_11;
        if (FUNC_19(VAR_11) == VAR_2)
        {
            VAR_15 = VAR_12;
        }
        FUNC_3(
            FUNC_5(FUNC_1(VAR_6), "AudioTrackQualityX"),
            VAR_15, VAR_5, VAR_13);
    }

    VAR_15 = VAR_11;
    if (VAR_15 & VAR_1)
    {
        VAR_15 = FUNC_13(VAR_3->settings, VAR_15);
    }
    int VAR_16 = FUNC_15(VAR_10, "AudioSamplerate");
    int VAR_17 = FUNC_16(VAR_10, "AudioMixdown");
    int VAR_18, VAR_19;
    FUNC_18(VAR_15, VAR_16, VAR_17, &VAR_18, &VAR_19);
    GtkWidget *VAR_20 = FUNC_5(FUNC_1(VAR_6), "AudioBitrate");
    FUNC_8(FUNC_0(VAR_20), VAR_18, VAR_19);
    VAR_20 = FUNC_5(FUNC_1(VAR_6), "AudioMixdown");
    FUNC_12(FUNC_0(VAR_20), VAR_15);
    VAR_20 = FUNC_5(FUNC_1(VAR_6), "AudioSamplerate");
    FUNC_9(FUNC_0(VAR_20), VAR_15);
}
