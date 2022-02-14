
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ eModeType ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*,char*,char const*) ;
 int FUNC_4 (int,char const*) ;
 scalar_t__ FUNC_5 (char*,int,int) ;
 int FUNC_6 (char*,char*,int) ;
 scalar_t__ FUNC_7 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_8(int VAR_5, int VAR_6, int VAR_7, const char *VAR_8, eModeType VAR_9[], eModeType VAR_10[], char VAR_11[][256])
{
    char VAR_12[32];
    int VAR_13 = 0;
    int VAR_14;


    int VAR_15 = FUNC_4(VAR_7, VAR_8);
    if (VAR_15 == 0)
        return 0;


    FUNC_6(VAR_12, "Input-SDL-Control%i", VAR_6 + 1);
    if (VAR_10[VAR_6] == VAR_0)
        FUNC_3("AutoConfig0", VAR_12, VAR_8);
    else
        FUNC_3("AutoConfig0", VAR_12, ((void*)0));
    if (FUNC_5("AutoConfig0", VAR_6, VAR_7) > 0)
    {
        if (!VAR_5)
            FUNC_2(VAR_4, "N64 Controller #%i: Using auto-config with SDL joystick %i ('%s')", VAR_6+1, VAR_7, VAR_8);
        VAR_13++;
        FUNC_1(VAR_12);
    }
    else
    {
        if (!VAR_5)
            FUNC_2(VAR_3, "Autoconfig data invalid for SDL joystick '%s'", VAR_8);
    }
    FUNC_0("AutoConfig0");


    if (VAR_15 > 1)
    {
        for (VAR_14 = 1; VAR_14 < VAR_15; VAR_14++)
        {
            char VAR_16[32];
            FUNC_6(VAR_16, "AutoConfig%i", VAR_14);

            if (VAR_6 + VAR_14 >= 4)
            {
                FUNC_0(VAR_16);
                continue;
            }

            if (VAR_9[VAR_6+VAR_14] == VAR_0 ||
                (VAR_9[VAR_6+VAR_14] == VAR_2 && FUNC_7(VAR_11[VAR_6+VAR_14], VAR_8, 255) == 0))
            {
                FUNC_6(VAR_12, "Input-SDL-Control%i", VAR_6 + VAR_14 + 1);

                if (FUNC_5(VAR_16, VAR_6+VAR_14, VAR_7) > 0)
                {

                    if (VAR_10[VAR_6+VAR_14] == VAR_0)
                        FUNC_3(VAR_16, VAR_12, VAR_8);
                    else
                        FUNC_3(VAR_16, VAR_12, ((void*)0));
                    if (!VAR_5)
                        FUNC_2(VAR_4, "N64 Controller #%i: Using auto-config with SDL joystick %i ('%s')", VAR_6+VAR_14+1, VAR_7, VAR_8);
                    VAR_13++;
                    FUNC_1(VAR_12);

                    VAR_9[VAR_6+VAR_14] = VAR_1;
                }
                else
                {
                    if (!VAR_5)
                        FUNC_2(VAR_3, "Autoconfig data invalid for SDL device '%s'", VAR_8);
                }

                FUNC_0(VAR_16);
            }
        }
    }

    return VAR_13;
}
