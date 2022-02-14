
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * m64p_handle ;
typedef int FILE ;


 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,int **) ;
 int FUNC_2 (int *,char*,int ,...) ;
 int FUNC_3 (int ,char*,...) ;
 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (char const*,char*) ;
 long FUNC_8 (char*,int,long,int *) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *,long,int ) ;
 long FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (long) ;
 int FUNC_13 (char*,char*,int) ;
 scalar_t__ FUNC_14 (char*,char*) ;
 int * FUNC_15 (char const*,char*) ;
 char* FUNC_16 (char*,char) ;
 scalar_t__ FUNC_17 (char*,char*) ;
 int FUNC_18 (char const*) ;
 scalar_t__ FUNC_19 (char*,char*,int) ;
 int FUNC_20 (char*,char*,int) ;

int FUNC_21(int VAR_8, const char *VAR_9)
{
    FILE *VAR_10;
    m64p_handle VAR_11 = ((void*)0);
    const char *VAR_12 = FUNC_0(VAR_0);
    enum { E_NAME_SEARCH, E_NAME_FOUND, E_PARAM_READ } VAR_13;
    char *VAR_14, *VAR_15, *VAR_16;
    long VAR_17;
    int VAR_18 = 0;


    if (VAR_9 == ((void*)0))
        return 0;

    if (VAR_12 == ((void*)0) || FUNC_18(VAR_12) < 1)
    {
        FUNC_3(VAR_2, "Couldn't find config file '%s'", VAR_0);
        return 0;
    }


    VAR_10 = FUNC_7(VAR_12, "rb");
    if (VAR_10 == ((void*)0))
    {
        FUNC_3(VAR_2, "Couldn't open config file '%s'", VAR_12);
        return 0;
    }
    FUNC_10(VAR_10, 0L, VAR_6);
    VAR_17 = FUNC_11(VAR_10);
    FUNC_10(VAR_10, 0L, VAR_7);
    VAR_14 = (char *) FUNC_12(VAR_17 + 1);
    if (VAR_14 == ((void*)0))
    {
        FUNC_3(VAR_2, "Couldn't allocate %li bytes for config file '%s'", VAR_17, VAR_12);
        FUNC_6(VAR_10);
        return 0;
    }
    if (FUNC_8(VAR_14, 1, VAR_17, VAR_10) != VAR_17)
    {
        FUNC_3(VAR_2, "File read failed for %li bytes of config file '%s'", VAR_17, VAR_12);
        FUNC_9(VAR_14);
        FUNC_6(VAR_10);
        return 0;
    }
    FUNC_6(VAR_10);
    VAR_14[VAR_17] = 0;


    VAR_15 = VAR_14;
    VAR_13 = E_NAME_SEARCH;
    while (VAR_15 != ((void*)0) && *VAR_15 != 0)
    {
        char *VAR_19 = ((void*)0);

        VAR_16 = VAR_15;
        VAR_15 = FUNC_16(VAR_15, '\n');
        if (VAR_15 != ((void*)0))
            *VAR_15++ = 0;
        VAR_16 = FUNC_4(VAR_16);


        if (FUNC_18(VAR_16) < 1 || *VAR_16 == ';' || *VAR_16 == '#')
            continue;


        if (*VAR_16 == '[' && VAR_16[FUNC_18(VAR_16)-1] == ']')
        {
            char VAR_20[64];
            char *VAR_21;
            int VAR_22 = 1;

            if (VAR_13 == E_PARAM_READ)
            {

                FUNC_9(VAR_14);
                return VAR_18;
            }
            else if (VAR_13 == E_NAME_FOUND)
            {

                continue;
            }

            VAR_16[FUNC_18(VAR_16)-1] = 0;
            VAR_21 = FUNC_4(VAR_16 + 1);


            if (FUNC_19(VAR_21, "Unix:", 5) == 0)
                VAR_21 = FUNC_4(VAR_21 + 5);


            if (FUNC_19(VAR_21, "Linux:", 6) == 0)
                VAR_21 = FUNC_4(VAR_21 + 6);
            while (VAR_21 != ((void*)0) && FUNC_18(VAR_21) > 0)
            {
                char *VAR_23 = FUNC_16(VAR_21, ' ');
                if (VAR_23 == ((void*)0))
                {
                    FUNC_20(VAR_20, VAR_21, 63);
                    VAR_20[63] = 0;
                    VAR_21 = ((void*)0);
                }
                else
                {
                    int VAR_24 = (int) (VAR_23 - VAR_21);
                    if (VAR_24 > 63) VAR_24 = 63;
                    FUNC_20(VAR_20, VAR_21, VAR_24);
                    VAR_20[VAR_24] = 0;
                    VAR_21 = VAR_23 + 1;
                }
                if (FUNC_15(VAR_9, VAR_20) == ((void*)0))
                    VAR_22 = 0;
            }

            if (VAR_22)
            {
                char VAR_25[32];
                FUNC_13(VAR_25, "AutoConfig%i", VAR_18);
                if (FUNC_1(VAR_25, &VAR_11) != VAR_1)
                {
                    FUNC_3(VAR_2, "auto_set_defaults(): Couldn't open config section '%s'", VAR_25);
                    FUNC_9(VAR_14);
                    return 0;
                }
                VAR_13 = E_NAME_FOUND;
                VAR_18++;
                FUNC_2(VAR_11, "device", VAR_4, &VAR_8);
            }
            continue;
        }


        VAR_19 = FUNC_16(VAR_16, '=');
        if (VAR_19 != ((void*)0))
        {

            if (VAR_13 == E_NAME_SEARCH)
                continue;
            VAR_13 = E_PARAM_READ;

            *VAR_19++ = 0;
            VAR_16 = FUNC_4(VAR_16);
            VAR_19 = FUNC_4(VAR_19);
            if (FUNC_14(VAR_16, "plugin") == 0 || FUNC_14(VAR_16, "device") == 0)
            {
                int VAR_26 = FUNC_5(VAR_19);
                FUNC_2(VAR_11, VAR_16, VAR_4, &VAR_26);
            }
            else if (FUNC_14(VAR_16, "plugged") == 0 || FUNC_14(VAR_16, "mouse") == 0)
            {
                int VAR_27 = (FUNC_14(VAR_19, "true") == 0);
                FUNC_2(VAR_11, VAR_16, VAR_3, &VAR_27);
            }
            else
            {
                FUNC_2(VAR_11, VAR_16, VAR_5, VAR_19);
            }
            continue;
        }


        if (VAR_16[FUNC_18(VAR_16)-1] == ':')
        {

            if (VAR_13 == E_NAME_SEARCH)
                continue;

            if (FUNC_17(VAR_16, "__NextController:") == 0)
            {
                char VAR_28[32];

                if (VAR_18 == 4)
                {
                    FUNC_9(VAR_14);
                    return VAR_18;
                }

                FUNC_13(VAR_28, "AutoConfig%i", VAR_18);
                if (FUNC_1(VAR_28, &VAR_11) != VAR_1)
                {
                    FUNC_3(VAR_2, "auto_set_defaults(): Couldn't open config section '%s'", VAR_28);
                    FUNC_9(VAR_14);
                    return VAR_18;
                }
                VAR_18++;
                FUNC_2(VAR_11, "device", VAR_4, &VAR_8);
            }
            else
            {
                FUNC_3(VAR_2, "Unknown keyword '%s' in %s", VAR_16, VAR_0);
            }
            continue;
        }


        FUNC_3(VAR_2, "Invalid line in %s: '%s'", VAR_0, VAR_16);
    }

    if (VAR_13 == E_PARAM_READ)
    {

        FUNC_9(VAR_14);
        return VAR_18;
    }

    FUNC_9(VAR_14);
    return 0;
}
