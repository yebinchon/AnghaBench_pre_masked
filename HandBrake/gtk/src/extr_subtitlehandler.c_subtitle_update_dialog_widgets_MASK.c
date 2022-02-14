
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int builder; int settings; } ;
typedef TYPE_1__ signal_user_data_t ;
struct TYPE_7__ {int format; } ;
typedef TYPE_2__ hb_container_t ;
typedef int gboolean ;
typedef int GtkWidget ;
typedef int GhbValue ;


 int VAR_0 ;
 int * FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int * FUNC_2 (int) ;
 int * FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 char* FUNC_5 (int ,char*) ;
 int * FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char*,int) ;
 TYPE_2__* FUNC_8 (char const*) ;
 int * FUNC_9 (char*) ;
 int FUNC_10 (TYPE_1__*,char*,int *) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int,int ) ;

__attribute__((used)) static void
FUNC_16(signal_user_data_t *VAR_4, GhbValue *VAR_5)
{
    GtkWidget *VAR_6;

    if (VAR_5 != ((void*)0))
    {

        GhbValue *VAR_7, *VAR_8;
        gboolean VAR_9, VAR_10, VAR_11;
        int VAR_12;

        const char *VAR_13;
        const hb_container_t *VAR_14;

        VAR_13 = FUNC_5(VAR_4->settings, "FileFormat");
        VAR_14 = FUNC_8(VAR_13);

        VAR_8 = FUNC_3(VAR_5, "Import");
        VAR_12 = FUNC_1(VAR_4->settings, VAR_5);

        VAR_7 = FUNC_6(VAR_5, "Name");
        if (VAR_7 != ((void*)0))
        {
            FUNC_10(VAR_4, "SubtitleTrackName", VAR_7);
        }
        else
        {
            FUNC_10(VAR_4, "SubtitleTrackName", FUNC_9(""));
        }

        VAR_7 = FUNC_3(VAR_5, "Track");
        if (VAR_7 != ((void*)0))
        {
            FUNC_10(VAR_4, "SubtitleTrack", VAR_7);


            VAR_6 = FUNC_0(VAR_4->builder, "subtitle_track_label");
            FUNC_12(VAR_6, VAR_8 == ((void*)0));
            VAR_6 = FUNC_0(VAR_4->builder, "SubtitleTrack");
            FUNC_12(VAR_6, VAR_8 == ((void*)0));


            VAR_6 = FUNC_0(VAR_4->builder, "subtitle_import_grid");
            FUNC_12(VAR_6, VAR_12 == VAR_1 ||
                                           VAR_12 == VAR_2);
            VAR_6 = FUNC_0(VAR_4->builder, "srt_code_label");
            FUNC_12(VAR_6, VAR_12 == VAR_1);
            VAR_6 = FUNC_0(VAR_4->builder, "SrtCodeset");
            FUNC_12(VAR_6, VAR_12 == VAR_1);

            VAR_6 = FUNC_0(VAR_4->builder, "subtitle_import_switch_box");
            FUNC_12(VAR_6, VAR_3);
        }
        else
        {

            VAR_6 = FUNC_0(VAR_4->builder, "subtitle_track_label");
            FUNC_12(VAR_6, VAR_0);
            VAR_6 = FUNC_0(VAR_4->builder, "SubtitleTrack");
            FUNC_12(VAR_6, VAR_0);

            VAR_6 = FUNC_0(VAR_4->builder, "subtitle_import_grid");
            FUNC_12(VAR_6, VAR_0);

            VAR_6 = FUNC_0(VAR_4->builder, "subtitle_import_switch_box");
            FUNC_12(VAR_6, VAR_0);
        }

        if (VAR_8 != ((void*)0))
        {
            if (VAR_12 == VAR_2)
            {
                FUNC_10(VAR_4, "SubtitleSsaEnable", FUNC_2(VAR_3));
            }
            else
            {
                FUNC_10(VAR_4, "SubtitleSrtEnable", FUNC_2(VAR_3));
            }
            VAR_7 = FUNC_3(VAR_8, "Language");
            FUNC_10(VAR_4, "ImportLanguage", VAR_7);
            VAR_7 = FUNC_3(VAR_8, "Codeset");
            FUNC_10(VAR_4, "SrtCodeset", VAR_7);
            VAR_7 = FUNC_3(VAR_8, "Filename");
            FUNC_10(VAR_4, "ImportFile", VAR_7);
            VAR_7 = FUNC_3(VAR_5, "Offset");
            FUNC_10(VAR_4, "ImportOffset", VAR_7);
        }
        else
        {
            FUNC_10(VAR_4, "SubtitleImportDisable", FUNC_2(VAR_3));
        }

        VAR_6 = FUNC_0(VAR_4->builder, "SubtitleBurned");
        FUNC_11(VAR_6, FUNC_13(VAR_12) &&
                                 FUNC_15(VAR_12, VAR_14->format));

        VAR_6 = FUNC_0(VAR_4->builder, "SubtitleForced");
        FUNC_11(VAR_6, FUNC_14(VAR_12));

        VAR_6 = FUNC_0(VAR_4->builder, "SubtitleDefaultTrack");
        FUNC_11(VAR_6,
                                 FUNC_15(VAR_12, VAR_14->format));

        VAR_9 = FUNC_4(VAR_5, "Burn");
        VAR_10 = FUNC_4(VAR_5, "Forced");
        VAR_11 = FUNC_4(VAR_5, "Default");

        if (!FUNC_13(VAR_12))
        {
            VAR_9 = VAR_0;
        }
        if (!FUNC_14(VAR_12))
        {
            VAR_10 = VAR_0;
        }
        if (!FUNC_15(VAR_12, VAR_14->format))
        {
            VAR_11 = VAR_0;
            VAR_9 = VAR_3;
        }
        FUNC_7(VAR_5, "Burn", VAR_9);
        FUNC_7(VAR_5, "Forced", VAR_10);
        FUNC_7(VAR_5, "Default", VAR_11);
        FUNC_10(VAR_4, "SubtitleBurned", FUNC_2(VAR_9));
        FUNC_10(VAR_4, "SubtitleForced", FUNC_2(VAR_10));
        FUNC_10(VAR_4, "SubtitleDefaultTrack", FUNC_2(VAR_11));

    }
    else
    {

        VAR_6 = FUNC_0(VAR_4->builder, "subtitle_import_grid");
        FUNC_12(VAR_6, VAR_0);


        VAR_6 = FUNC_0(VAR_4->builder, "subtitle_track_label");
        FUNC_12(VAR_6, VAR_3);
        VAR_6 = FUNC_0(VAR_4->builder, "SubtitleTrack");
        FUNC_12(VAR_6, VAR_3);
    }
}
