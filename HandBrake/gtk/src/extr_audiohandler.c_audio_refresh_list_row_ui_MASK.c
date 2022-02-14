
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int const* settings; } ;
typedef TYPE_3__ signal_user_data_t ;
typedef int hb_title_t ;
struct TYPE_14__ {char* name; } ;
typedef TYPE_4__ hb_mixdown_t ;
struct TYPE_15__ {char* name; int codec; } ;
typedef TYPE_5__ hb_encoder_t ;
struct TYPE_12__ {int samplerate; scalar_t__ bitrate; } ;
struct TYPE_11__ {char* description; } ;
struct TYPE_16__ {TYPE_2__ in; TYPE_1__ lang; } ;
typedef TYPE_6__ hb_audio_config_t ;
typedef double gdouble ;
typedef char gchar ;
typedef scalar_t__ gboolean ;
typedef int GtkTreeModel ;
typedef int GtkTreeIter ;
typedef int GhbValue ;


 int FUNC_0 (int *) ;
 double VAR_0 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 char* FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int const*) ;
 double FUNC_7 (int const*,char*) ;
 int FUNC_8 (int const*,char*) ;
 char* FUNC_9 (int const*,char*) ;
 char* FUNC_10 (char*,int ,double) ;
 TYPE_6__* FUNC_11 (int const*,int) ;
 int * FUNC_12 (int,int*) ;
 TYPE_5__* FUNC_13 (int const*,char*) ;
 TYPE_4__* FUNC_14 (int const*,char*) ;
 scalar_t__ FUNC_15 (int *,int *,int *) ;
 int FUNC_16 (int ,int *,int *) ;
 int FUNC_17 (int ,int *) ;
 int FUNC_18 (int ,int *,int ,char*,int,char*,int,...) ;

__attribute__((used)) static void
FUNC_19(
    GtkTreeModel *VAR_1,
    GtkTreeIter *VAR_2,
    signal_user_data_t *VAR_3,
    const GhbValue *VAR_4)
{
    GtkTreeIter VAR_5;
    char *VAR_6, *VAR_7;
    char *VAR_8, *VAR_9;


    VAR_7 = ((void*)0);
    VAR_9 = ((void*)0);

    const gchar *VAR_10, *VAR_11;
    gchar *VAR_12, *VAR_13, *VAR_14, *VAR_15;
    gdouble VAR_16, VAR_17;
    hb_audio_config_t *VAR_18;
    int VAR_19, VAR_20;
    int VAR_21, VAR_22;
    const hb_title_t *VAR_23;
    const hb_encoder_t *VAR_24;

    VAR_21 = FUNC_8(VAR_3->settings, "title");
    VAR_23 = FUNC_12(VAR_21, &VAR_22);
    VAR_19 = FUNC_8(VAR_4, "Track");
    VAR_18 = FUNC_11(VAR_23, VAR_19);
    if (VAR_18 == ((void*)0))
    {
        return;
    }


    VAR_10 = VAR_18->lang.description;
    VAR_24 = FUNC_13(VAR_4, "Encoder");

    gboolean VAR_25 = FUNC_6(VAR_4);
    double VAR_26 = FUNC_7(VAR_4, "Quality");
    int VAR_27 = FUNC_8(VAR_4, "Bitrate");
    if (VAR_25 && VAR_26 != VAR_0)
    {
        char *VAR_28 = FUNC_10(FUNC_1("Quality: "),
                                       VAR_24->codec, VAR_26);
        VAR_14 = FUNC_4("%s\n", VAR_28);
        FUNC_2(VAR_28);
    }
    else if (VAR_27 > 0)
    {
        VAR_14 = FUNC_4(FUNC_1("Bitrate: %dkbps\n"), VAR_27);
    }
    else
    {
        VAR_14 = FUNC_3("");
    }

    VAR_20 = FUNC_8(VAR_4, "Samplerate");
    if (VAR_20 == 0)
    {
        VAR_20 = VAR_18->in.samplerate;
    }
    VAR_15 = FUNC_4(FUNC_1("%.4gkHz"), (double)VAR_20/1000);

    const hb_mixdown_t *VAR_29;
    VAR_29 = FUNC_14(VAR_4, "Mixdown");
    VAR_17 = FUNC_7(VAR_4, "Gain");
    VAR_13 = FUNC_4(FUNC_1("%ddB"), (int)VAR_17);

    VAR_16 = FUNC_7(VAR_4, "DRC");
    if (VAR_16 < 1.0)
        VAR_12 = FUNC_3(FUNC_1("Off"));
    else
        VAR_12 = FUNC_4("%.1f", VAR_16);

    VAR_11 = FUNC_9(VAR_4, "Name");

    VAR_6 = FUNC_4(FUNC_1("<small>%d - %s (%.4gkHz)</small>"),
        VAR_19 + 1, VAR_10, (double)VAR_18->in.samplerate / 1000);
    if (VAR_18->in.bitrate > 0)
    {
        VAR_7 = FUNC_4(
            FUNC_1("Bitrate: %.4gkbps"),
            (double)VAR_18->in.bitrate / 1000);
    }

    if (FUNC_5(VAR_24->codec))
    {
        VAR_8 = FUNC_4(FUNC_1("<small>Passthrough</small>"));
    }
    else
    {
        VAR_8 = FUNC_4("<small>%s (%s) (%s)</small>",
                                   VAR_24->name, VAR_29->name, VAR_15);
        if (VAR_11 && VAR_11[0])
        {
            VAR_9 = FUNC_4(
                FUNC_1("%sGain: %s\nDRC: %s\nTrack Name: %s"),
                VAR_14, VAR_13, VAR_12, VAR_11);
        }
        else
        {
            VAR_9 = FUNC_4(FUNC_1("%sGain: %s\nDRC: %s"),
                                            VAR_14, VAR_13, VAR_12);
        }
    }
    FUNC_18(FUNC_0(VAR_1), VAR_2,

        0, VAR_6,
        1, "-->",
        2, VAR_8,
        3, "hb-edit",
        4, "hb-remove",
        5, 0.5,
        -1);

    if (VAR_7 != ((void*)0) || VAR_9 != ((void*)0))
    {
        if (VAR_7 == ((void*)0))
            VAR_7 = FUNC_3("");
        if (VAR_9 == ((void*)0))
            VAR_9 = FUNC_3("");


        if (!FUNC_15(VAR_1, &VAR_5, VAR_2))
        {
            FUNC_16(FUNC_0(VAR_1), &VAR_5, VAR_2);
        }
        FUNC_18(FUNC_0(VAR_1), &VAR_5,

            0, VAR_7,
            2, VAR_9,
            5, 0.0,
            -1);
    }
    else
    {
        if(FUNC_15(VAR_1, &VAR_5, VAR_2))
        {
            FUNC_17(FUNC_0(VAR_1), &VAR_5);
        }
    }

    FUNC_2(VAR_6);
    FUNC_2(VAR_7);
    FUNC_2(VAR_8);
    FUNC_2(VAR_9);

    FUNC_2(VAR_15);
    FUNC_2(VAR_12);
    FUNC_2(VAR_13);
    FUNC_2(VAR_14);
}
