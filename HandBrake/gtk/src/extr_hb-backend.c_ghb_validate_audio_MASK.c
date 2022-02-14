
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int list_audio; } ;
typedef TYPE_2__ hb_title_t ;
struct TYPE_10__ {int format; } ;
typedef TYPE_3__ hb_container_t ;
struct TYPE_8__ {int codec; } ;
struct TYPE_11__ {TYPE_1__ in; } ;
typedef TYPE_4__ hb_audio_config_t ;
typedef scalar_t__ gint ;
typedef char gchar ;
typedef int gboolean ;
typedef int GtkWindow ;
typedef int GhbValue ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int ,...) ;
 int * FUNC_4 (int const*,scalar_t__) ;
 scalar_t__ FUNC_5 (int const*) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 void* FUNC_8 (int *,char*) ;
 char* FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,char*,char const*) ;
 int * FUNC_11 (int *) ;
 TYPE_3__* FUNC_12 (char const*) ;
 TYPE_2__* FUNC_13 (scalar_t__,scalar_t__*) ;
 int FUNC_14 (int *,int ,char*,int ,int ) ;
 int FUNC_15 (int *,char*) ;
 int FUNC_16 (int) ;
 void* FUNC_17 (int) ;
 TYPE_4__* FUNC_18 (int ,int) ;

gboolean
FUNC_19(GhbValue *VAR_13, GtkWindow *VAR_14)
{
    gint VAR_15, VAR_16;
    const hb_title_t * VAR_17;
    gchar *VAR_18;

    VAR_15 = FUNC_8(VAR_13, "title");
    VAR_17 = FUNC_13(VAR_15, &VAR_16);
    if (VAR_17 == ((void*)0))
    {

        FUNC_2(FUNC_0("No title found.\n"));
        return VAR_0;
    }

    const char *VAR_19;
    const hb_container_t *VAR_20;

    VAR_19 = FUNC_9(VAR_13, "FileFormat");
    VAR_20 = FUNC_12(VAR_19);

    const GhbValue *VAR_21;
    gint VAR_22, VAR_23;

    VAR_21 = FUNC_11(VAR_13);
    VAR_22 = FUNC_5(VAR_21);
    for (VAR_23 = 0; VAR_23 < VAR_22; VAR_23++)
    {
        GhbValue *VAR_24;
        hb_audio_config_t *VAR_25;
        int VAR_26, VAR_27;

        VAR_24 = FUNC_4(VAR_21, VAR_23);
        VAR_26 = FUNC_8(VAR_24, "Track");
        VAR_27 = FUNC_15(VAR_24, "Encoder");

        VAR_25 = FUNC_18(VAR_17->list_audio, VAR_26);
        if (FUNC_7(VAR_27) &&
            !(FUNC_6(VAR_25->in.codec) &&
              (VAR_25->in.codec & VAR_27)))
        {

            VAR_18 = FUNC_3(
                        FUNC_0("The source does not support Pass-Thru.\n\n"
                        "You should choose a different audio codec.\n"
                        "If you continue, one will be chosen for you."));
            if (!FUNC_14(VAR_14, VAR_1,
                                    VAR_18, FUNC_0("Cancel"), FUNC_0("Continue")))
            {
                FUNC_1(VAR_18);
                return VAR_0;
            }
            FUNC_1(VAR_18);
            if ((VAR_27 & VAR_2) ||
                (VAR_25->in.codec & VAR_6) == VAR_3)
            {
                VAR_27 = VAR_2;
            }
            else if (VAR_20->format & VAR_9)
            {
                VAR_27 = VAR_5;
            }
            else if (VAR_20->format & VAR_11)
            {
                VAR_27 = FUNC_16(VAR_20->format);
            }
            else
            {
                VAR_27 = VAR_4;
            }
            const char *VAR_28 = FUNC_17(VAR_27);
            FUNC_10(VAR_24, "Encoder", VAR_28);
        }
        const gchar *VAR_29 = ((void*)0);
        const gchar *VAR_30 = ((void*)0);
        if (VAR_20->format & VAR_10)
        {
            VAR_30 = "MP4";

            if (VAR_27 == VAR_8)
            {
                VAR_29 = "Vorbis";
                VAR_27 = VAR_4;
            }
        }
        if (VAR_20->format & VAR_11)
        {
            VAR_30 = "WebM";

            if (VAR_27 != VAR_8 && VAR_27 != VAR_7)
            {
                VAR_29 = FUNC_17(VAR_27);
                VAR_27 = FUNC_16(VAR_20->format);
            }
        }
        if (VAR_29)
        {
            VAR_18 = FUNC_3(
                        FUNC_0("%s is not supported in the %s container.\n\n"
                        "You should choose a different audio codec.\n"
                        "If you continue, one will be chosen for you."), VAR_29, VAR_30);
            if (!FUNC_14(VAR_14, VAR_1,
                                    VAR_18, FUNC_0("Cancel"), FUNC_0("Continue")))
            {
                FUNC_1(VAR_18);
                return VAR_0;
            }
            FUNC_1(VAR_18);
            const char *VAR_31 = FUNC_17(VAR_27);
            FUNC_10(VAR_24, "Encoder", VAR_31);
        }
    }
    return VAR_12;
}
