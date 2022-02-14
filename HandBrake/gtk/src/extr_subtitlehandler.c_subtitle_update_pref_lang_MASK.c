
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int builder; int settings; } ;
typedef TYPE_1__ signal_user_data_t ;
struct TYPE_6__ {char* iso639_2; char* native_name; char* eng_name; } ;
typedef TYPE_2__ iso639_lang_t ;
typedef int gchar ;
typedef int gboolean ;
typedef int GtkLabel ;
typedef int GtkButton ;


 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char*,...) ;
 int FUNC_7 (int ,char*,char const*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int ,int) ;
 scalar_t__ FUNC_11 (char const*,char*,int) ;

__attribute__((used)) static void
FUNC_12(signal_user_data_t *VAR_0, const iso639_lang_t *VAR_1)
{
    GtkLabel *VAR_2;
    GtkButton *VAR_3;
    gchar *VAR_4;
    const char * VAR_5 = FUNC_4("None");
    const char * VAR_6 = "und";

    VAR_2 = FUNC_2(FUNC_0(VAR_0->builder, "subtitle_preferred_language"));
    if (VAR_1 != ((void*)0))
    {
        VAR_6 = VAR_1->iso639_2;
        if (FUNC_11(VAR_6, "und", 4))
        {
            VAR_5 = VAR_1->native_name && VAR_1->native_name[0] ?
                                VAR_1->native_name : VAR_1->eng_name;
        }
    }

    VAR_4 = FUNC_6(FUNC_4("Preferred Language: %s"), VAR_5);
    FUNC_9(VAR_2, VAR_4);
    FUNC_5(VAR_4);

    FUNC_7(VAR_0->settings, "PreferredLanguage", VAR_6);



    gboolean VAR_7 = !(VAR_1 == ((void*)0) || !FUNC_11(VAR_6, "und", 4));
    VAR_3 = FUNC_1(FUNC_0(VAR_0->builder,
                                  "SubtitleAddForeignAudioSubtitle"));
    if (VAR_7)
    {
        VAR_4 = FUNC_6(
            FUNC_4("Add %s subtitle track if default audio is not %s"), VAR_5, VAR_5);
    }
    else
    {
        VAR_4 = FUNC_6(
            FUNC_4("Add subtitle track if default audio is not your preferred language"));
    }
    FUNC_8(VAR_3, VAR_4);
    FUNC_5(VAR_4);

    FUNC_10(FUNC_3(VAR_3), VAR_7);
    VAR_3 = FUNC_1(FUNC_0(VAR_0->builder,
                                  "SubtitleAddForeignAudioSearch"));
    FUNC_10(FUNC_3(VAR_3), VAR_7);
}
