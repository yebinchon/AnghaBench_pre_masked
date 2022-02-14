
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_dict_t ;


 int FUNC_0 (int ,char*,char const*) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,char*,int ) ;
 int * FUNC_3 (char const*) ;
 int FUNC_4 (double) ;
 int FUNC_5 (int) ;
 int VAR_0 ;
 int FUNC_6 (char const*,char*) ;

__attribute__((used)) static hb_dict_t * FUNC_7(const char *VAR_1,
                                             const char *VAR_2,
                                             const char *VAR_3)
{
    hb_dict_t * VAR_4;

    if (VAR_1 == ((void*)0))
        return ((void*)0);

    if (!FUNC_6(VAR_1, "custom"))
    {
        return FUNC_3(VAR_3);
    }
    if (!FUNC_6(VAR_1, "ultralight") ||
        !FUNC_6(VAR_1, "light") ||
        !FUNC_6(VAR_1, "medium") ||
        !FUNC_6(VAR_1, "strong") ||
        !FUNC_6(VAR_1, "stronger") ||
        !FUNC_6(VAR_1, "verystrong"))
    {
        double VAR_5[2];
        int VAR_6[2];

        if (VAR_2 == ((void*)0) || !FUNC_6(VAR_2, "none"))
        {
            VAR_5[0] = VAR_5[1] = 0.25;
            VAR_6[0] = VAR_6[1] = 7;
            if (!FUNC_6(VAR_1, "ultralight"))
            {
                VAR_5[0] = VAR_5[1] = 0.05;
            }
            else if (!FUNC_6(VAR_1, "light"))
            {
                VAR_5[0] = VAR_5[1] = 0.15;
            }
            else if (!FUNC_6(VAR_1, "strong"))
            {
                VAR_5[0] = VAR_5[1] = 0.5;
            }
            else if (!FUNC_6(VAR_1, "stronger"))
            {
                VAR_5[0] = VAR_5[1] = 0.8;
            }
            else if (!FUNC_6(VAR_1, "verystrong"))
            {
                VAR_5[0] = VAR_5[1] = 1.2;
            }
        }
        else if (!FUNC_6(VAR_2, "ultrafine"))
        {
            VAR_5[0] = 0.4; VAR_5[1] = 0.25;
            VAR_6[0] = VAR_6[1] = 3;
            if (!FUNC_6(VAR_1, "ultralight"))
            {
                VAR_5[0] = 0.15; VAR_5[1] = 0.1;
            }
            else if (!FUNC_6(VAR_1, "light"))
            {
                VAR_5[0] = 0.25; VAR_5[1] = 0.15;
            }
            else if (!FUNC_6(VAR_1, "strong"))
            {
                VAR_5[0] = 0.8; VAR_5[1] = 0.5;
            }
            else if (!FUNC_6(VAR_1, "stronger"))
            {
                VAR_5[0] = 1.2; VAR_5[1] = 0.75;
            }
            else if (!FUNC_6(VAR_1, "verystrong"))
            {
                VAR_5[0] = 1.5; VAR_5[1] = 0.9;
            }
        }
        else if (!FUNC_6(VAR_2, "fine"))
        {
            VAR_5[0] = 0.275; VAR_5[1] = 0.165;
            VAR_6[0] = 7; VAR_6[1] = 5;
            if (!FUNC_6(VAR_1, "ultralight"))
            {
                VAR_5[0] = 0.055; VAR_5[1] = 0.033;
            }
            else if (!FUNC_6(VAR_1, "light"))
            {
                VAR_5[0] = 0.165; VAR_5[1] = 0.1;
            }
            else if (!FUNC_6(VAR_1, "strong"))
            {
                VAR_5[0] = 0.55; VAR_5[1] = 0.33;
            }
            else if (!FUNC_6(VAR_1, "stronger"))
            {
                VAR_5[0] = 0.9; VAR_5[1] = 0.6;
            }
            else if (!FUNC_6(VAR_1, "verystrong"))
            {
                VAR_5[0] = 1.35; VAR_5[1] = 0.9;
            }
        }
        else if (!FUNC_6(VAR_2, "medium"))
        {
            VAR_5[0] = 0.275; VAR_5[1] = 0.165;
            VAR_6[0] = 9; VAR_6[1] = 7;
            if (!FUNC_6(VAR_1, "ultralight"))
            {
                VAR_5[0] = 0.055; VAR_5[1] = 0.033;
            }
            else if (!FUNC_6(VAR_1, "light"))
            {
                VAR_5[0] = 0.165; VAR_5[1] = 0.1;
            }
            else if (!FUNC_6(VAR_1, "strong"))
            {
                VAR_5[0] = 0.55; VAR_5[1] = 0.33;
            }
            else if (!FUNC_6(VAR_1, "stronger"))
            {
                VAR_5[0] = 0.9; VAR_5[1] = 0.6;
            }
            else if (!FUNC_6(VAR_1, "verystrong"))
            {
                VAR_5[0] = 1.35; VAR_5[1] = 0.9;
            }
        }
        else if (!FUNC_6(VAR_2, "coarse"))
        {
            VAR_5[0] = 0.275; VAR_5[1] = 0.165;
            VAR_6[0] = 11; VAR_6[1] = 7;
            if (!FUNC_6(VAR_1, "ultralight"))
            {
                VAR_5[0] = 0.055; VAR_5[1] = 0.033;
            }
            else if (!FUNC_6(VAR_1, "light"))
            {
                VAR_5[0] = 0.165; VAR_5[1] = 0.1;
            }
            else if (!FUNC_6(VAR_1, "strong"))
            {
                VAR_5[0] = 0.55; VAR_5[1] = 0.33;
            }
            else if (!FUNC_6(VAR_1, "stronger"))
            {
                VAR_5[0] = 0.9; VAR_5[1] = 0.6;
            }
            else if (!FUNC_6(VAR_1, "verystrong"))
            {
                VAR_5[0] = 1.35; VAR_5[1] = 0.9;
            }
        }
        else if (!FUNC_6(VAR_2, "verycoarse"))
        {
            VAR_5[0] = 0.275; VAR_5[1] = 0.165;
            VAR_6[0] = 13; VAR_6[1] = 9;
            if (!FUNC_6(VAR_1, "ultralight"))
            {
                VAR_5[0] = 0.055; VAR_5[1] = 0.033;
            }
            else if (!FUNC_6(VAR_1, "light"))
            {
                VAR_5[0] = 0.165; VAR_5[1] = 0.1;
            }
            else if (!FUNC_6(VAR_1, "strong"))
            {
                VAR_5[0] = 0.55; VAR_5[1] = 0.33;
            }
            else if (!FUNC_6(VAR_1, "stronger"))
            {
                VAR_5[0] = 0.9; VAR_5[1] = 0.6;
            }
            else if (!FUNC_6(VAR_1, "verystrong"))
            {
                VAR_5[0] = 1.35; VAR_5[1] = 0.9;
            }
        }
        else
        {
            FUNC_0(VAR_0, "Unrecognized unsharp tune (%s).\n", VAR_2);
            return ((void*)0);
        }

        VAR_4 = FUNC_1();
        FUNC_2(VAR_4, "y-strength", FUNC_4(VAR_5[0]));
        FUNC_2(VAR_4, "y-size", FUNC_5(VAR_6[0]));

        FUNC_2(VAR_4, "cb-strength", FUNC_4(VAR_5[1]));
        FUNC_2(VAR_4, "cb-size", FUNC_5(VAR_6[1]));
    }
    else
    {
        VAR_4 = FUNC_3(VAR_1);
        if (VAR_2 != ((void*)0))
        {
            FUNC_0(VAR_0, "Custom unsharp parameters specified; ignoring unsharp tune (%s).\n", VAR_2);
        }
    }

    return VAR_4;
}
