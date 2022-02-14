
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* native_name; char* eng_name; } ;
typedef TYPE_1__ iso639_lang_t ;
typedef char gchar ;
typedef int const GhbValue ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int ) ;
 char* FUNC_2 (char*,char const*,...) ;
 int const* FUNC_3 (int const*,char*) ;
 void* FUNC_4 (int const*,char*) ;
 TYPE_1__* FUNC_5 (char const*) ;
 int FUNC_6 (char const*,char*) ;

char *
FUNC_7(const GhbValue *VAR_2,
                               const GhbValue *VAR_3)
{
    GhbValue *VAR_4;
    char *VAR_5 = ((void*)0);

    VAR_4 = FUNC_3(VAR_3, "Import");
    if (VAR_4 != ((void*)0))
    {
        const gchar * VAR_6 = "SRT";
        const gchar * VAR_7;
        const gchar * VAR_8;
        int VAR_9 = VAR_0;
        const iso639_lang_t *VAR_10;

        VAR_6 = FUNC_4(VAR_4, "Format");
        VAR_8 = FUNC_4(VAR_4, "Language");
        VAR_7 = FUNC_4(VAR_4, "Codeset");

        if (VAR_6 != ((void*)0) && !FUNC_6(VAR_6, "SSA"))
        {
            VAR_9 = VAR_1;
        }
        VAR_10 = FUNC_5(VAR_8);
        if (VAR_10 != ((void*)0))
        {
            if (VAR_10->native_name != ((void*)0))
                VAR_8 = VAR_10->native_name;
            else
                VAR_8 = VAR_10->eng_name;
        }

        if (VAR_9 == VAR_0)
        {
            VAR_5 = FUNC_2("%s (%s)(%s)", VAR_8, VAR_7, VAR_6);
        }
        else
        {
            VAR_5 = FUNC_2("%s (%s)", VAR_8, VAR_6);
        }
    }
    else if (VAR_2 == ((void*)0))
    {
        VAR_5 = FUNC_1(FUNC_0("Foreign Audio Scan"));
    }
    else
    {
        const char * VAR_11 = FUNC_4(VAR_2, "Language");
        VAR_5 = FUNC_2("%s", VAR_11);
    }

    return VAR_5;
}
