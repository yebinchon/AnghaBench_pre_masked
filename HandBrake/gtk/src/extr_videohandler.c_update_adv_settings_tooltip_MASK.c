
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int builder; int settings; } ;
typedef TYPE_1__ signal_user_data_t ;
struct TYPE_8__ {scalar_t__* str; } ;
typedef int GtkWidget ;
typedef TYPE_2__ GString ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int ,int *,...) ;
 int FUNC_5 (TYPE_2__*,char*,char const*,...) ;
 char* FUNC_6 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (int ,char*) ;
 int FUNC_9 (int ,char*) ;
 char* FUNC_10 (int ,char*) ;
 int FUNC_11 (int ) ;
 int * FUNC_12 (int *) ;
 int FUNC_13 (int *,char*) ;
 int FUNC_14 (int) ;
 char* FUNC_15 (int ,char const*,char*,char const*,char const*,char const*,int,int) ;
 int FUNC_16 (char const*,char*) ;
 scalar_t__ FUNC_17 (char const*,char*) ;
 int * VAR_2 ;

__attribute__((used)) static void
FUNC_18(signal_user_data_t *VAR_3)
{
    if (VAR_2 == ((void*)0))
    {
        GtkWidget *VAR_4 = FUNC_1(FUNC_0(VAR_3->builder, "VideoOptionExtra"));
        VAR_2 = FUNC_12(VAR_4);
    }

    int VAR_5 = FUNC_11(VAR_3->settings);
    if (VAR_5 & VAR_1)
    {
        GString *VAR_6 = FUNC_7("");
        const char *VAR_7;
        const char *VAR_8;
        const char *VAR_9;
        const char *VAR_10;
        const char *VAR_11;
        char *VAR_12;

        VAR_7 = FUNC_10(VAR_3->settings, "VideoPreset");
        VAR_8 = FUNC_10(VAR_3->settings, "VideoTune");
        VAR_9 = FUNC_10(VAR_3->settings, "VideoProfile");
        VAR_10 = FUNC_10(VAR_3->settings, "VideoLevel");
        VAR_11 = FUNC_10(VAR_3->settings, "VideoOptionExtra");

        if (VAR_8[0] && FUNC_17(VAR_8, "none"))
        {
            FUNC_5(VAR_6, "%s", VAR_8);
        }
        if (FUNC_8(VAR_3->settings, "x264FastDecode"))
        {
            FUNC_5(VAR_6, "%s%s", VAR_6->str[0] ? "," : "", "fastdecode");
        }
        if (FUNC_8(VAR_3->settings, "x264ZeroLatency"))
        {
            FUNC_5(VAR_6, "%s%s", VAR_6->str[0] ? "," : "", "zerolatency");
        }
        VAR_12 = FUNC_6(VAR_6, VAR_0);

        char * VAR_13;

        int VAR_14 = FUNC_9(VAR_3->settings, "scale_width");
        int VAR_15 = FUNC_9(VAR_3->settings, "scale_height");

        if (VAR_14 == 0 || VAR_15 == 0)
        {
            if (!FUNC_8(VAR_3->settings, "autoscale"))
            {
                VAR_14 = FUNC_9(VAR_3->settings, "PictureWidth");
                VAR_15 = FUNC_9(VAR_3->settings, "PictureHeight");

                if (VAR_15 == 0 && VAR_14 != 0)
                {
                    VAR_15 = VAR_14 * 9 / 16;
                }
                if (VAR_14 == 0 && VAR_15 != 0)
                {
                    VAR_14 = VAR_15 * 16 / 9;
                }
            }
            if (VAR_14 == 0 || VAR_15 == 0)
            {
                VAR_14 = 1280;
                VAR_15 = 720;
            }
        }

        if (!FUNC_16(VAR_9, "auto"))
        {
            VAR_9 = "";
        }
        if (!FUNC_16(VAR_10, "auto"))
        {
            VAR_10 = "";
        }
        VAR_13 = FUNC_15(FUNC_14(VAR_5),
                        VAR_7, VAR_12, VAR_11, VAR_9, VAR_10, VAR_14, VAR_15);

        GtkWidget *VAR_16 = FUNC_1(FUNC_0(VAR_3->builder, "VideoOptionExtra"));

        char * VAR_17;
        if (VAR_13)
            VAR_17 = FUNC_4(FUNC_2("%s\n\nExpanded Options:\n\"%s\""),
                                 VAR_2, VAR_13);
        else
            VAR_17 = FUNC_4(FUNC_2("%s\n\nExpanded Options:\n\"\""),
                                 VAR_2);
        FUNC_13(VAR_16, VAR_17);

        FUNC_3(VAR_17);
        FUNC_3(VAR_13);

        FUNC_3(VAR_12);
    }
}
