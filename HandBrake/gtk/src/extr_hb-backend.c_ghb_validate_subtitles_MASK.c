
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int hb_title_t ;
struct TYPE_3__ {int format; } ;
typedef TYPE_1__ hb_container_t ;
typedef scalar_t__ gint ;
typedef int gchar ;
typedef int gboolean ;
typedef int GtkWindow ;
typedef int const GhbValue ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int const*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int ) ;
 int const* FUNC_5 (int const*,scalar_t__) ;
 scalar_t__ FUNC_6 (int const*) ;
 int const* FUNC_7 (int const*,char*) ;
 scalar_t__ FUNC_8 (int const*,char*) ;
 scalar_t__ FUNC_9 (int const*,char*) ;
 void* FUNC_10 (int const*,char*) ;
 int const* FUNC_11 (int const*) ;
 TYPE_1__* FUNC_12 (char const*) ;
 int * FUNC_13 (scalar_t__,scalar_t__*) ;
 int FUNC_14 (int *,int ,int *,int ,int ) ;

gboolean
FUNC_15(GhbValue *VAR_5, GtkWindow *VAR_6)
{
    gint VAR_7, VAR_8;
    const hb_title_t * VAR_9;
    gchar *VAR_10;

    VAR_7 = FUNC_9(VAR_5, "title");
    VAR_9 = FUNC_13(VAR_7, &VAR_8);
    if (VAR_9 == ((void*)0))
    {

        FUNC_3(FUNC_0("No title found.\n"));
        return VAR_0;
    }

    const GhbValue *VAR_11, *VAR_12, *VAR_13;
    gint VAR_14, VAR_15, VAR_16;
    gboolean VAR_17, VAR_18 = VAR_0;

    const char *VAR_19;
    const hb_container_t *VAR_20;

    VAR_19 = FUNC_10(VAR_5, "FileFormat");
    VAR_20 = FUNC_12(VAR_19);

    VAR_11 = FUNC_11(VAR_5);
    VAR_14 = FUNC_6(VAR_11);
    for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++)
    {
        VAR_12 = FUNC_5(VAR_11, VAR_15);
        VAR_16 = FUNC_9(VAR_12, "Track");
        VAR_13 = FUNC_7(VAR_12, "Import");
        VAR_17 = VAR_16 != -1 && FUNC_8(VAR_12, "Burn");
        if (VAR_17 && VAR_18)
        {


            VAR_10 = FUNC_4(
            FUNC_0("Only one subtitle may be burned into the video.\n\n"
                "You should change your subtitle selections.\n"
                "If you continue, some subtitles will be lost."));
            if (!FUNC_14(VAR_6, VAR_1,
                                    VAR_10, FUNC_0("Cancel"), FUNC_0("Continue")))
            {
                FUNC_2(VAR_10);
                return VAR_0;
            }
            FUNC_2(VAR_10);
            break;
        }
        else if (VAR_17)
        {
            VAR_18 = VAR_4;
        }
        else if (VAR_20->format & VAR_3)
        {

            VAR_10 = FUNC_4(
            FUNC_0("WebM in HandBrake only supports burned subtitles.\n\n"
                "You should change your subtitle selections.\n"
                "If you continue, some subtitles will be lost."));
            if (!FUNC_14(VAR_6, VAR_1,
                                    VAR_10, FUNC_0("Cancel"), FUNC_0("Continue")))
            {
                FUNC_2(VAR_10);
                return VAR_0;
            }
            FUNC_2(VAR_10);
            break;
        }
        if (VAR_13 != ((void*)0))
        {
            const gchar *VAR_21;

            VAR_21 = FUNC_10(VAR_13, "Filename");
            if (!FUNC_1(VAR_21, VAR_2))
            {
                VAR_10 = FUNC_4(
                FUNC_0("SRT file does not exist or not a regular file.\n\n"
                    "You should choose a valid file.\n"
                    "If you continue, this subtitle will be ignored."));
                if (!FUNC_14(VAR_6, VAR_1, VAR_10,
                    FUNC_0("Cancel"), FUNC_0("Continue")))
                {
                    FUNC_2(VAR_10);
                    return VAR_0;
                }
                FUNC_2(VAR_10);
                break;
            }
        }
    }
    return VAR_4;
}
