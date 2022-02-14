
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int m64p_handle ;
typedef scalar_t__ eModeType ;
struct TYPE_4__ {TYPE_1__* control; } ;
struct TYPE_3__ {scalar_t__ Present; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,char*,int ,...) ;
 scalar_t__ FUNC_2 (char*,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*,int ,...) ;
 int VAR_1 ;
 int FUNC_5 (int ,char*,...) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (char*,char*,char*) ;
 int FUNC_7 (int,char*) ;
 int FUNC_8 (int) ;
 TYPE_2__* VAR_12 ;
 char* FUNC_9 (int) ;
 int FUNC_10 () ;
 int FUNC_11 (int,char*,scalar_t__) ;
 int FUNC_12 (char*,int,int) ;
 int FUNC_13 (int,int,int,char const*,scalar_t__*,scalar_t__*,char**) ;
 int FUNC_14 (char*,char*,int) ;
 scalar_t__ FUNC_15 (char*,char*) ;
 scalar_t__ FUNC_16 (char*,char const*,int) ;

void FUNC_17(int VAR_13)
{
    char VAR_14[32];
    int VAR_15 = 0;
    int VAR_16, VAR_17, VAR_18;
    int VAR_19 = 0;
    int VAR_20[4];
    eModeType VAR_21[4], VAR_22[4];
    int VAR_23[4];
    char VAR_24[4][256];
    int VAR_25 = 0;
    int VAR_26 = FUNC_10();
    float VAR_27 = 0.0f;
    const char *VAR_28;
    int VAR_29 = 0;


    if (!VAR_13)
        FUNC_5(VAR_7, "%i SDL joysticks were found.", VAR_26);


    for (VAR_16=0; VAR_16 < 4; VAR_16++)
    {
        m64p_handle VAR_30;

        FUNC_8(VAR_16);


        FUNC_14(VAR_14, "Input-SDL-Control%i", VAR_16 + 1);
        if (FUNC_2(VAR_14, &VAR_30) != VAR_5)
        {

            FUNC_5(VAR_6, "Couldn't open config section '%s'.  Aborting...", VAR_14);
            return;
        }

        VAR_27 = 0.0f;
        if (FUNC_1(VAR_30, "version", VAR_9, &VAR_27, sizeof(float)) != VAR_5 || ((int) VAR_27) != ((int) VAR_0))
        {
            FUNC_5(VAR_8, "Missing or incompatible config section '%s'. Clearing.", VAR_14);
            FUNC_0(VAR_14);

            VAR_21[VAR_16] = VAR_22[VAR_16] = VAR_2;
            VAR_23[VAR_16] = VAR_1;
            VAR_24[VAR_16][0] = 0;

            FUNC_11(VAR_16, "", VAR_2);

            FUNC_3(VAR_14);
        }
        else
        {
            if (FUNC_1(VAR_30, "mode", VAR_10, &VAR_21[VAR_16], sizeof(int)) != VAR_5 ||
                (int) VAR_21[VAR_16] < 0 || (int) VAR_21[VAR_16] > 2)
            {
                if (!VAR_13)
                    FUNC_5(VAR_8, "Missing or invalid 'mode' parameter in config section '%s'.  Setting to 2 (Fully Auto)", VAR_14);
                VAR_21[VAR_16] = VAR_2;
            }
            VAR_22[VAR_16] = VAR_21[VAR_16];
            if (FUNC_1(VAR_30, "device", VAR_10, &VAR_23[VAR_16], sizeof(int)) != VAR_5)
            {
                if (!VAR_13)
                    FUNC_5(VAR_8, "Missing 'device' parameter in config section '%s'.  Setting to -1 (No joystick)", VAR_14);
                VAR_23[VAR_16] = VAR_1;
            }
            if (FUNC_1(VAR_30, "name", VAR_11, VAR_24[VAR_16], 256) != VAR_5)
            {
                VAR_24[VAR_16][0] = 0;
            }
        }
    }


    for (VAR_16=0; VAR_16 < 4; VAR_16++)
    {
        if (VAR_22[VAR_16] != VAR_3)
            continue;

        FUNC_14(VAR_14, "Input-SDL-Control%i", VAR_16 + 1);
        FUNC_12(VAR_14, VAR_16, VAR_23[VAR_16]);

        if (VAR_23[VAR_16] == VAR_1)
        {
            if (!VAR_13)
                FUNC_5(VAR_7, "N64 Controller #%i: Using manual config with no SDL joystick (keyboard/mouse only)", VAR_16+1);
        }
        else
        {
            VAR_20[VAR_19++] = VAR_23[VAR_16];
            if (!VAR_13)
                FUNC_5(VAR_7, "N64 Controller #%i: Using manual config for SDL joystick %i", VAR_16+1, VAR_23[VAR_16]);
        }
        VAR_25++;
    }


    for (VAR_16=0; VAR_16 < 4; VAR_16++)
    {
        if (VAR_22[VAR_16] != VAR_4)
            continue;

        if (VAR_24[VAR_16][0] == 0)
        {
            VAR_22[VAR_16] = VAR_2;
            continue;
        }
        FUNC_14(VAR_14, "Input-SDL-Control%i", VAR_16 + 1);

        if (FUNC_15(VAR_24[VAR_16], "Keyboard") == 0)
        {
            FUNC_7(VAR_1, "Keyboard");
            if (FUNC_12("AutoConfig0", VAR_16, VAR_1) > 0)
            {
                if (!VAR_13)
                    FUNC_5(VAR_7, "N64 Controller #%i: Using auto-config for keyboard", VAR_16+1);

                FUNC_6("AutoConfig0", VAR_14, "Keyboard");
                VAR_25++;
                FUNC_3(VAR_14);
            }
            else
            {
                FUNC_5(VAR_6, "Autoconfig keyboard setup invalid");
            }
            FUNC_0("AutoConfig0");
            continue;
        }

        for (VAR_17=0; VAR_17 < VAR_26; VAR_17++)
        {

            int VAR_31 = 0;
            for (VAR_18 = 0; VAR_18 < VAR_19; VAR_18++)
            {
                if (VAR_20[VAR_18] == VAR_17)
                    VAR_31 = 1;
            }
            if (VAR_31)
                continue;

            VAR_28 = FUNC_9(VAR_17);
            if (VAR_28 != ((void*)0) && FUNC_16(VAR_24[VAR_16], VAR_28, 255) == 0)
            {

                int VAR_32 = FUNC_13(VAR_13, VAR_16, VAR_17, VAR_28, VAR_22, VAR_21, VAR_24);
                if (VAR_32 == 0)
                {

                    FUNC_5(VAR_6, "No auto-config found for joystick named '%s' in InputAutoConfig.ini", VAR_28);

                    VAR_20[VAR_19++] = VAR_17;


                    break;
                }

                VAR_20[VAR_19++] = VAR_17;
                VAR_25 += VAR_32;
                break;
            }
        }

        if (VAR_17 == VAR_26)
        {
            if (!VAR_13)
                FUNC_5(VAR_8, "N64 Controller #%i: No SDL joystick found matching name '%s'.  Using full auto mode.", VAR_16+1, VAR_24[VAR_16]);
            VAR_22[VAR_16] = VAR_2;
        }
    }


    for (VAR_16=0; VAR_16 < 4; VAR_16++)
    {
        if (VAR_22[VAR_16] != VAR_2)
            continue;
        FUNC_14(VAR_14, "Input-SDL-Control%i", VAR_16 + 1);

        for (VAR_17=0; VAR_17 < VAR_26; VAR_17++)
        {

            int VAR_33 = 0;
            for (VAR_18 = 0; VAR_18 < VAR_19; VAR_18++)
            {
                if (VAR_20[VAR_18] == VAR_17)
                    VAR_33 = 1;
            }
            if (VAR_33)
                continue;

            VAR_28 = FUNC_9(VAR_17);
            VAR_29 = FUNC_13(VAR_13, VAR_16, VAR_17, VAR_28, VAR_22, VAR_21, VAR_24);
            if (!VAR_13 && VAR_29 == 0)
            {

                FUNC_5(VAR_6, "No auto-config found for joystick named '%s' in InputAutoConfig.ini", VAR_28);

                VAR_20[VAR_19++] = VAR_17;

                continue;
            }

            VAR_20[VAR_19++] = VAR_17;
            VAR_25 += VAR_29;
            break;
        }

        if (VAR_17 == VAR_26)
        {
            m64p_handle VAR_34;
            if (FUNC_2(VAR_14, &VAR_34) == VAR_5)
            {
                const int VAR_35 = -1;
                FUNC_4(VAR_34, "device", VAR_10, &VAR_35);
                if (VAR_21[VAR_16] == VAR_2)
                    FUNC_4(VAR_34, "name", VAR_11, "");
                FUNC_3(VAR_14);
            }
        }
    }


    if (VAR_25 == 0)
    {
        if (!VAR_13)
            FUNC_5(VAR_7, "N64 Controller #1: Forcing default keyboard configuration");
        FUNC_7(VAR_1, "Keyboard");
        if (FUNC_12("AutoConfig0", 0, VAR_1) > 0)
        {

            if (VAR_21[0] == VAR_2)
                FUNC_6("AutoConfig0", "Input-SDL-Control1", "Keyboard");
            else
                FUNC_6("AutoConfig0", "Input-SDL-Control1", ((void*)0));
            VAR_25++;
            FUNC_3("Input-SDL-Control1");
        }
        else
        {
            FUNC_5(VAR_6, "Autoconfig keyboard setup invalid");
        }
        FUNC_0("AutoConfig0");
    }


    VAR_15 = 0;
    for (VAR_18 = 0; VAR_18 < 4; VAR_18++)
    {
        if (VAR_12[VAR_18].control->Present)
            VAR_15++;
    }


    if (!VAR_13)
    {
        if (VAR_15 > 0)
        {
            FUNC_5(VAR_7, "%i controller(s) found, %i plugged in and usable in the emulator", VAR_25, VAR_15);
        }
        else
        {
            if (VAR_25 == 0)
                FUNC_5(VAR_8, "No joysticks/controllers found");
            else
                FUNC_5(VAR_8, "%i controllers found, but none were 'plugged in'", VAR_25);
        }
    }

}
