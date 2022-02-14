
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * prefs; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef char const gchar ;
typedef int gboolean ;
typedef int GhbValue ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 char* FUNC_1 (char*,char const*) ;
 int FUNC_2 (int *,char*) ;
 char* FUNC_3 (int *,char*) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int *,char*,int) ;
 int FUNC_7 (int *,char*,char const*) ;
 int * FUNC_8 (int *,int) ;
 int FUNC_9 (int *,char*,int *) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (int *,int *) ;

__attribute__((used)) static GhbValue* FUNC_12(
    signal_user_data_t *VAR_2,
    GhbValue *VAR_3,
    int VAR_4,
    int VAR_5,
    gboolean VAR_6,
    gboolean VAR_7,
    int VAR_8,
    gboolean VAR_9,
    gboolean *VAR_10)
{
    const char * VAR_11 = ((void*)0);
    if (VAR_4 >= 0 && !VAR_7)
    {
        GhbValue * VAR_12;

        VAR_12 = FUNC_8(VAR_3, VAR_4);
        VAR_8 = FUNC_2(VAR_12, "Source");
        VAR_11 = FUNC_3(VAR_12, "Name");
    }

    VAR_9 |= !FUNC_10(VAR_8, VAR_5);

    if (*VAR_10 && VAR_9)
    {

        return ((void*)0);
    }

    GhbValue *VAR_13 = FUNC_4();
    if (VAR_7)
    {

        GhbValue *VAR_14;
        const gchar *VAR_15, *VAR_16;
        gchar *VAR_17;

        VAR_14 = FUNC_4();
        FUNC_9(VAR_13, "Import", VAR_14);

        FUNC_7(VAR_14, "Format",
                            VAR_8 == VAR_0 ? "SRT" : "SSA");
        VAR_15 = FUNC_3(VAR_3, "PreferredLanguage");
        FUNC_7(VAR_14, "Language", VAR_15);
        FUNC_7(VAR_14, "Codeset", "UTF-8");

        VAR_16 = FUNC_3(VAR_2->prefs, "SrtDir");
        VAR_17 = FUNC_1("%s/none", VAR_16);
        FUNC_7(VAR_14, "Filename", VAR_17);
        FUNC_0(VAR_17);
    }

    if (VAR_11 != ((void*)0) && VAR_11[0] != 0)
    {
        FUNC_7(VAR_13, "Name", VAR_11);
    }
    FUNC_6(VAR_13, "Track", VAR_4);
    FUNC_6(VAR_13, "Offset", 0);
    FUNC_5(VAR_13, "Forced", VAR_4 == -1);
    FUNC_5(VAR_13, "Default", VAR_6);
    FUNC_5(VAR_13, "Burn", VAR_9);
    if (VAR_9 && VAR_4 != -1)
    {




        *VAR_10 = VAR_1;
    }

    FUNC_11(VAR_3, VAR_13);

    return VAR_13;
}
