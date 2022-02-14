
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int format; } ;
typedef TYPE_1__ hb_container_t ;
typedef scalar_t__ gint ;
typedef int gchar ;
typedef scalar_t__ gboolean ;
typedef int GtkWindow ;
typedef int GhbValue ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 char* FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,int ) ;
 TYPE_1__* FUNC_5 (char const*) ;
 int FUNC_6 (int *,int ,int *,int ,int ) ;
 scalar_t__ FUNC_7 (int *,char*) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (scalar_t__) ;

gboolean
FUNC_10(GhbValue *VAR_8, GtkWindow *VAR_9)
{
    gint VAR_10;
    gchar *VAR_11;
    const char *VAR_12;
    const hb_container_t *VAR_13;

    VAR_12 = FUNC_3(VAR_8, "FileFormat");
    VAR_13 = FUNC_5(VAR_12);

    gboolean VAR_14 = VAR_0;

    VAR_10 = FUNC_7(VAR_8, "VideoEncoder");
    if ((VAR_13->format & VAR_2) && (VAR_10 == VAR_6))
    {

        VAR_11 = FUNC_2(
                    FUNC_0("Theora is not supported in the MP4 container.\n\n"
                    "You should choose a different video codec or container.\n"
                    "If you continue, FFMPEG will be chosen for you."));
        VAR_14 = VAR_7;
    }
    else if ((VAR_13->format & VAR_3) &&
             (VAR_10 != VAR_4 && VAR_10 != VAR_5))
    {

        VAR_11 = FUNC_2(
                    FUNC_0("Only VP8 or VP9 is supported in the WebM container.\n\n"
                    "You should choose a different video codec or container.\n"
                    "If you continue, one will be chosen for you."));
        VAR_14 = VAR_7;
    }

    if (VAR_14)
    {
        if (!FUNC_6(VAR_9, VAR_1,
                                VAR_11, FUNC_0("Cancel"), FUNC_0("Continue")))
        {
            FUNC_1(VAR_11);
            return VAR_0;
        }
        FUNC_1(VAR_11);
        VAR_10 = FUNC_8(VAR_13->format);
        FUNC_4(VAR_8, "VideoEncoder",
                                FUNC_9(VAR_10));
    }

    return VAR_7;
}
