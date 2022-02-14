
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int time_t ;
struct tm {int dummy; } ;
struct TYPE_4__ {int * globals; int * prefs; int * settings; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int const* const* const* const* const* gint ;
typedef int const* const* const* const* gchar ;
typedef int GhbValue ;
typedef int GString ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int const* const* const* const* const*) ;
 int FUNC_5 (int *,char*,...) ;
 int const* const* const***** FUNC_6 (int *,int ) ;
 int * FUNC_7 (char*) ;
 int const* const* const***** FUNC_8 (char*,int const* const* const*****,int const* const* const* const* const*) ;
 int const* const* const***** FUNC_9 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_10 (int *,char*) ;
 double FUNC_11 (int *,char*) ;
 void* FUNC_12 (int *,char*) ;
 int const* const* const***** FUNC_13 (int *,char*) ;
 int FUNC_14 (int *,char*) ;
 int FUNC_15 (int *,char*,int ) ;
 int FUNC_16 (int *,char*,char*) ;
 scalar_t__ FUNC_17 (int *,char*) ;
 int const* const* const***** FUNC_18 (int *,char*) ;
 int FUNC_19 (int ) ;
 char* FUNC_20 (int const* const* const* const* const*) ;
 struct tm* FUNC_21 (int *) ;
 int FUNC_22 (int const* const* const* const* const*,int *,int const* const* const* const* const*) ;
 int FUNC_23 (char*,int,char*,struct tm*) ;
 int FUNC_24 (char*) ;
 int FUNC_25 (int const* const* const* const* const*,char*,int ) ;
 int FUNC_26 (int *) ;

__attribute__((used)) static void
FUNC_27(signal_user_data_t *VAR_3, GhbValue *VAR_4)
{
    const gchar *VAR_5, *VAR_6, *VAR_7;
    gchar *VAR_8;

    VAR_5 = FUNC_9(VAR_3, VAR_4);

    FUNC_1("set_destination_settings");
    VAR_6 = FUNC_13(VAR_3->settings, "dest_file");
    if (VAR_6 == ((void*)0))
    {


        GString *VAR_9 = FUNC_7("");
        const gchar *VAR_10;
        VAR_10 = FUNC_13(VAR_4, "volume");
        FUNC_5(VAR_9, "%s", VAR_10);
        FUNC_5(VAR_9, ".%s", VAR_5);
        VAR_8 = FUNC_6(VAR_9, VAR_0);
        FUNC_16(VAR_4, "dest_file", VAR_8);
        FUNC_3(VAR_8);
    }
    FUNC_15(VAR_4, "dest_dir", FUNC_19(
                 FUNC_14(VAR_3->prefs, "destination_dir")));
    if (FUNC_10(VAR_3->prefs, "auto_name"))
    {
        GString *VAR_11 = FUNC_7("");
        const gchar *VAR_12;

        VAR_12 = FUNC_13(VAR_3->prefs, "auto_name_template");


        if (VAR_12 != ((void*)0) &&
            (!FUNC_25(VAR_12, "{source-path}", FUNC_24("{source-path}")) ||
             !FUNC_25(VAR_12, "{source_path}", FUNC_24("{source_path}"))))
        {
            const gchar * VAR_13;

            VAR_13 = FUNC_13(VAR_3->globals, "scan_source");
            if (VAR_13 != ((void*)0))
            {
                char * VAR_14 = FUNC_4(VAR_13);

                if (VAR_14 != ((void*)0) &&
                    FUNC_2(VAR_14, VAR_1) &&
                    FUNC_0(VAR_14, VAR_2) == 0)
                {
                    FUNC_16(VAR_4, "dest_dir", VAR_14);
                }
                FUNC_3(VAR_14);
            }
            VAR_12 += FUNC_24("{source-path}");
        }
        while (*VAR_12)
        {
            if (!FUNC_25(VAR_12, "{source}", FUNC_24("{source}")))
            {
                const gchar *VAR_15;
                VAR_15 = FUNC_13(VAR_4, "volume");
                FUNC_5(VAR_11, "%s", VAR_15);
                VAR_12 += FUNC_24("{source}");
            }
            else if (!FUNC_25(VAR_12, "{title}", FUNC_24("{title}")))
            {
                gint VAR_16 = FUNC_12(VAR_4, "title");
                if (VAR_16 >= 0)
                    FUNC_5(VAR_11, "%d", VAR_16);
                VAR_12 += FUNC_24("{title}");
            }
            else if (!FUNC_25(VAR_12, "{preset}", FUNC_24("{preset}")))
            {
                const gchar *VAR_17;
                VAR_17 = FUNC_13(VAR_4, "PresetName");
                FUNC_5(VAR_11, "%s", VAR_17);
                VAR_12 += FUNC_24("{preset}");
            }
            else if (!FUNC_25(VAR_12, "{chapters}", FUNC_24("{chapters}")))
            {
                if (FUNC_17(VAR_4, "PtoPType") == 0)
                {
                    gint VAR_18, VAR_19;
                    VAR_18 = FUNC_12(VAR_4, "start_point");
                    VAR_19 = FUNC_12(VAR_4, "end_point");
                    if (VAR_18 == VAR_19)
                        FUNC_5(VAR_11, "%d", VAR_18);
                    else
                        FUNC_5(VAR_11, "%d-%d", VAR_18, VAR_19);
                }
                VAR_12 += FUNC_24("{chapters}");
            }
            else if (!FUNC_25(VAR_12, "{time}", FUNC_24("{time}")))
            {
                char VAR_20[6];
                struct tm *VAR_21;
                time_t VAR_22 = FUNC_26(((void*)0));
                VAR_21 = FUNC_21(&VAR_22);
                VAR_20[0] = 0;
                FUNC_23(VAR_20, 6, "%H:%M", VAR_21);
                FUNC_5(VAR_11, "%s", VAR_20);
                VAR_12 += FUNC_24("{time}");
            }
            else if (!FUNC_25(VAR_12, "{date}", FUNC_24("{date}")))
            {
                char VAR_23[11];
                struct tm *VAR_24;
                time_t VAR_25 = FUNC_26(((void*)0));
                VAR_24 = FUNC_21(&VAR_25);
                VAR_23[0] = 0;
                FUNC_23(VAR_23, 11, "%Y-%m-%d", VAR_24);
                FUNC_5(VAR_11, "%s", VAR_23);
                VAR_12 += FUNC_24("{date}");
            }
            else if (!FUNC_25(VAR_12, "{creation-date}", FUNC_24("{creation-date}")))
            {
                gchar *VAR_26;
                const gchar *VAR_27 = FUNC_13(VAR_3->globals, "scan_source");
                VAR_26 = FUNC_8("%Y-%m-%d", FUNC_13(VAR_4, "MetaReleaseDate"), VAR_27);
                FUNC_5(VAR_11, "%s", VAR_26);
                VAR_12 += FUNC_24("{creation-date}");
                FUNC_3(VAR_26);
            }
            else if (!FUNC_25(VAR_12, "{creation-time}", FUNC_24("{creation-time}")))
            {
                gchar *VAR_28;
                const gchar *VAR_29 = FUNC_13(VAR_3->globals, "scan_source");
                VAR_28 = FUNC_8("%H:%M", FUNC_13(VAR_4, "MetaReleaseDate"), VAR_29);
                FUNC_5(VAR_11, "%s", VAR_28);
                VAR_12 += FUNC_24("{creation-time}");
                FUNC_3(VAR_28);
            }
            else if (!FUNC_25(VAR_12, "{quality}", FUNC_24("{quality}")))
            {
                if (FUNC_10(VAR_4, "vquality_type_constant"))
                {
                    gint VAR_30;
                    const char *VAR_31;
                    double VAR_32;
                    VAR_30 = FUNC_18(VAR_4, "VideoEncoder");
                    VAR_31 = FUNC_20(VAR_30);
                    VAR_32 = FUNC_11(VAR_4, "VideoQualitySlider");
                    FUNC_5(VAR_11, "%s%.3g", VAR_31, VAR_32);
                }
                VAR_12 += FUNC_24("{quality}");
            }
            else if (!FUNC_25(VAR_12, "{bitrate}", FUNC_24("{bitrate}")))
            {
                if (FUNC_10(VAR_4, "vquality_type_bitrate"))
                {
                    int VAR_33;
                    VAR_33 = FUNC_12(VAR_4, "VideoAvgBitrate");
                    FUNC_5(VAR_11, "%dkbps", VAR_33);
                }
                VAR_12 += FUNC_24("{bitrate}");
            }
            else
            {
                FUNC_5(VAR_11, "%c", *VAR_12);
                VAR_12++;
            }
        }
        VAR_7 = FUNC_13(VAR_4, "dest_dir");
        FUNC_22(VAR_7, VAR_11, VAR_5);
        FUNC_5(VAR_11, ".%s", VAR_5);
        VAR_8 = FUNC_6(VAR_11, VAR_0);
        FUNC_16(VAR_4, "dest_file", VAR_8);
        FUNC_3(VAR_8);
    }
}
