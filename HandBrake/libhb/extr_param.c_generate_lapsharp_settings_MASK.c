
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
 int FUNC_5 (char const*) ;
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
        const char *VAR_6[2];

        if (VAR_2 == ((void*)0) || !FUNC_6(VAR_2, "none"))
        {
            VAR_5[0] = VAR_5[1] = 0.2;
            VAR_6[0] = VAR_6[1] = "isolap";
            if (!FUNC_6(VAR_1, "ultralight"))
            {
                VAR_5[0] = VAR_5[1] = 0.05;
            }
            else if (!FUNC_6(VAR_1, "light"))
            {
                VAR_5[0] = VAR_5[1] = 0.1;
            }
            else if (!FUNC_6(VAR_1, "strong"))
            {
                VAR_5[0] = VAR_5[1] = 0.3;
            }
            else if (!FUNC_6(VAR_1, "stronger"))
            {
                VAR_5[0] = VAR_5[1] = 0.5;
            }
            else if (!FUNC_6(VAR_1, "verystrong"))
            {
                VAR_5[0] = VAR_5[1] = 1.1;
            }
        }
        else if (!FUNC_6(VAR_2, "film"))
        {
            VAR_5[0] = 0.2; VAR_5[1] = 0.12;
            VAR_6[0] = VAR_6[1] = "isolap";
            if (!FUNC_6(VAR_1, "ultralight"))
            {
                VAR_5[0] = 0.05; VAR_5[1] = 0.03;
            }
            else if (!FUNC_6(VAR_1, "light"))
            {
                VAR_5[0] = 0.1; VAR_5[1] = 0.06;
            }
            else if (!FUNC_6(VAR_1, "strong"))
            {
                VAR_5[0] = 0.3; VAR_5[1] = 0.2;
            }
            else if (!FUNC_6(VAR_1, "stronger"))
            {
                VAR_5[0] = 0.5; VAR_5[1] = 0.3;
            }
            else if (!FUNC_6(VAR_1, "verystrong"))
            {
                VAR_5[0] = 1.1; VAR_5[1] = 0.65;
            }
        }
        else if (!FUNC_6(VAR_2, "grain"))
        {
            VAR_5[0] = 0.2; VAR_5[1] = 0.1;
            VAR_6[0] = VAR_6[1] = "isolog";
            if (!FUNC_6(VAR_1, "ultralight"))
            {
                VAR_5[0] = 0.05; VAR_5[1] = 0.025;
            }
            else if (!FUNC_6(VAR_1, "light"))
            {
                VAR_5[0] = 0.1; VAR_5[1] = 0.05;
            }
            else if (!FUNC_6(VAR_1, "strong"))
            {
                VAR_5[0] = 0.3; VAR_5[1] = 0.15;
            }
            else if (!FUNC_6(VAR_1, "stronger"))
            {
                VAR_5[0] = 0.5; VAR_5[1] = 0.25;
            }
            else if (!FUNC_6(VAR_1, "verystrong"))
            {
                VAR_5[0] = 1.1; VAR_5[1] = 0.55;
            }
        }
        else if (!FUNC_6(VAR_2, "animation"))
        {
            VAR_5[0] = 0.15; VAR_5[1] = 0.09;
            VAR_6[0] = VAR_6[1] = "isolap";
            if (!FUNC_6(VAR_1, "ultralight"))
            {
                VAR_5[0] = 0.0375; VAR_5[1] = 0.0225;
            }
            else if (!FUNC_6(VAR_1, "light"))
            {
                VAR_5[0] = 0.075; VAR_5[1] = 0.05625;
            }
            else if (!FUNC_6(VAR_1, "strong"))
            {
                VAR_5[0] = 0.225; VAR_5[1] = 0.15;
            }
            else if (!FUNC_6(VAR_1, "stronger"))
            {
                VAR_5[0] = 0.375; VAR_5[1] = 0.225;
            }
            else if (!FUNC_6(VAR_1, "verystrong"))
            {
                VAR_5[0] = 0.75; VAR_5[1] = 0.45;
            }
        }
        else if (!FUNC_6(VAR_2, "sprite"))
        {
            VAR_5[0] = VAR_5[1] = 0.15;
            VAR_6[0] = VAR_6[1] = "lap";
            if (!FUNC_6(VAR_1, "ultralight"))
            {
                VAR_5[0] = VAR_5[1] = 0.0375;
            }
            else if (!FUNC_6(VAR_1, "light"))
            {
                VAR_5[0] = VAR_5[1] = 0.075;
            }
            else if (!FUNC_6(VAR_1, "strong"))
            {
                VAR_5[0] = VAR_5[1] = 0.225;
            }
            else if (!FUNC_6(VAR_1, "stronger"))
            {
                VAR_5[0] = VAR_5[1] = 0.375;
            }
            else if (!FUNC_6(VAR_1, "verystrong"))
            {
                VAR_5[0] = VAR_5[1] = 0.75;
            }
        }
        else
        {
            FUNC_0(VAR_0, "Unrecognized lapsharp tune (%s).\n", VAR_2);
            return ((void*)0);
        }

        VAR_4 = FUNC_1();
        FUNC_2(VAR_4, "y-strength", FUNC_4(VAR_5[0]));
        FUNC_2(VAR_4, "y-kernel", FUNC_5(VAR_6[0]));

        FUNC_2(VAR_4, "cb-strength", FUNC_4(VAR_5[1]));
        FUNC_2(VAR_4, "cb-kernel", FUNC_5(VAR_6[1]));
    }
    else
    {
        VAR_4 = FUNC_3(VAR_1);
        if (VAR_2 != ((void*)0))
        {
            FUNC_0(VAR_0, "Custom lapsharp parameters specified; ignoring lapsharp tune (%s).\n", VAR_2);
        }
    }

    return VAR_4;
}
