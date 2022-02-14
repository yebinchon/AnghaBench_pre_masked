
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef char gchar ;
typedef int GtkWindow ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,...) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int *,int ,char*,int ,int ) ;
 int FUNC_8 (TYPE_1__*,char*,int *,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int*,int*,int*) ;
 scalar_t__ FUNC_11 (char*) ;
 int FUNC_12 () ;

void
FUNC_13(signal_user_data_t *VAR_2)
{
    int VAR_3 = FUNC_11("presets.json");
    if (VAR_3 == -2)
    {




        GtkWindow *VAR_4 = FUNC_1(FUNC_0(VAR_2->builder, "hb_window"));
        gchar *VAR_5 = FUNC_5(
            FUNC_2("Presets found are newer than what is supported by this version of HandBrake!\n\n"
              "Would you like to continue?"));
        if (!FUNC_7(VAR_4, VAR_1, VAR_5,
            FUNC_2("Get me out of here!"), FUNC_2("Load backup presets")))
        {
            FUNC_4(VAR_5);
            FUNC_3(1);
        }
        FUNC_4(VAR_5);

        gchar *VAR_6;
        int VAR_7, VAR_8, VAR_9;

        FUNC_10(&VAR_7, &VAR_8, &VAR_9);
        VAR_6 = FUNC_5("presets.%d.%d.%d.json", VAR_7, VAR_8, VAR_9);
        FUNC_6("Failed to read presets file, trying backup (%s)...", VAR_6);
        if (FUNC_11(VAR_6) < 0)
        {
            FUNC_6("Failed to read backup presets, using defaults...");
            FUNC_9();



        }
        FUNC_4(VAR_6);
    }
    else if (VAR_3 < 0)
    {
        if (FUNC_11("presets") < 0)
        {
            FUNC_6("Failed to read presets file, initailizing new presets...");
            FUNC_9();
            FUNC_12();
        }
    }
    FUNC_8(VAR_2, "PresetCategory", ((void*)0), VAR_0);
}
