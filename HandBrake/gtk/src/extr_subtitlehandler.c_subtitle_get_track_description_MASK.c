
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* native_name; char* eng_name; } ;
typedef TYPE_1__ iso639_lang_t ;
typedef int hb_title_t ;
struct TYPE_6__ {int lang; } ;
typedef TYPE_2__ hb_subtitle_t ;
typedef char gchar ;
typedef int GhbValue ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*,int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*) ;
 char* FUNC_4 (int ) ;
 char* FUNC_5 (char*,...) ;
 int * FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char*) ;
 char* FUNC_8 (int *,char*) ;
 TYPE_2__* FUNC_9 (int const*,int) ;
 int * FUNC_10 (int,int*) ;
 TYPE_1__* FUNC_11 (char const*) ;
 int FUNC_12 (char const*,char*) ;

__attribute__((used)) static char *
FUNC_13(GhbValue *VAR_3, GhbValue *VAR_4)
{
    GhbValue * VAR_5;
    char *VAR_6 = ((void*)0);

    VAR_5 = FUNC_6(VAR_4, "Import");
    if (VAR_5 != ((void*)0))
    {
        const gchar * VAR_7 = "SRT";
        const gchar * VAR_8, * VAR_9;
        const gchar * VAR_10;
        int VAR_11 = VAR_1;
        const iso639_lang_t * VAR_12;

        VAR_7 = FUNC_8(VAR_5, "Format");
        VAR_8 = FUNC_8(VAR_5, "Filename");
        VAR_10 = FUNC_8(VAR_5, "Language");
        VAR_9 = FUNC_8(VAR_5, "Codeset");

        if (VAR_7 != ((void*)0) && !FUNC_12(VAR_7, "SSA"))
        {
            VAR_11 = VAR_2;
        }
        VAR_12 = FUNC_11(VAR_10);
        if (VAR_12 != ((void*)0))
        {
            if (VAR_12->native_name != ((void*)0))
                VAR_10 = VAR_12->native_name;
            else
                VAR_10 = VAR_12->eng_name;
        }

        if (FUNC_1(VAR_8, VAR_0))
        {
            gchar *VAR_13;

            VAR_13 = FUNC_3(VAR_8);
            if (VAR_11 == VAR_1)
            {
                VAR_6 = FUNC_5("%s (%s)(%s)(%s)",
                                       VAR_10, VAR_9, VAR_7, VAR_13);
            }
            else
            {
                VAR_6 = FUNC_5("%s (%s)(%s)", VAR_10, VAR_7, VAR_13);
            }
            FUNC_2(VAR_13);
        }
        else
        {
            if (VAR_11 == VAR_1)
            {
                VAR_6 = FUNC_5("%s (%s)(%s)", VAR_10, VAR_9, VAR_7);
            }
            else
            {
                VAR_6 = FUNC_5("%s (%s)", VAR_10, VAR_7);
            }
        }
    }
    else
    {
        int VAR_14, VAR_15;
        const hb_title_t *VAR_16;
        int VAR_17;
        hb_subtitle_t *VAR_18;
        GhbValue *VAR_19;

        VAR_14 = FUNC_7(VAR_3, "title");
        VAR_16 = FUNC_10(VAR_14, &VAR_15);
        VAR_19 = FUNC_6(VAR_4, "Track");
        VAR_17 = FUNC_7(VAR_4, "Track");
        if (VAR_19 == ((void*)0) || VAR_17 < 0)
        {
            VAR_6 = FUNC_4(FUNC_0("Foreign Audio Scan"));
        }
        else
        {
            VAR_18 = FUNC_9(VAR_16, VAR_17);
            if (VAR_18 != ((void*)0))
            {
                VAR_6 = FUNC_5("%d - %s", VAR_17 + 1, VAR_18->lang);
            }
        }
    }

    return VAR_6;
}
