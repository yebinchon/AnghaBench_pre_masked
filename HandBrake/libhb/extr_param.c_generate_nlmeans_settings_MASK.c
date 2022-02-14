
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
        !FUNC_6(VAR_1, "strong"))
    {
        double VAR_5[2],
               VAR_6[2];
        int VAR_7[2],
               VAR_8[2],
               VAR_9[2],
               VAR_10[2];

        if (VAR_2 == ((void*)0) || !FUNC_6(VAR_2, "none"))
        {
            VAR_5[0] = VAR_5[1] = 6;
            VAR_6[0] = VAR_6[1] = 1;
            VAR_7[0] = VAR_7[1] = 7;
            VAR_8[0] = VAR_8[1] = 3;
            VAR_9[0] = VAR_9[1] = 2;
            VAR_10[0] = VAR_10[1] = 0;
            if (!FUNC_6(VAR_1, "ultralight"))
            {
                VAR_5[0] = VAR_5[1] = 1.5;
            }
            else if (!FUNC_6(VAR_1, "light"))
            {
                VAR_5[0] = VAR_5[1] = 3;
            }
            else if (!FUNC_6(VAR_1, "strong"))
            {
                VAR_5[0] = VAR_5[1] = 10;
            }
        }
        else if (!FUNC_6(VAR_2, "film"))
        {
            VAR_5[0] = 6; VAR_5[1] = 8;
            VAR_6[0] = VAR_6[1] = 0.8;
            VAR_7[0] = VAR_7[1] = 7;
            VAR_8[0] = VAR_8[1] = 3;
            VAR_9[0] = VAR_9[1] = 2;
            VAR_10[0] = VAR_10[1] = 0;
            if (!FUNC_6(VAR_1, "ultralight"))
            {
                VAR_5[0] = 1.5; VAR_5[1] = 2.4;
                VAR_6[0] = 0.9; VAR_6[1] = 0.9;
            }
            else if (!FUNC_6(VAR_1, "light"))
            {
                VAR_5[0] = 3; VAR_5[1] = 4;
                VAR_6[0] = 0.9; VAR_6[1] = 0.9;
            }
            else if (!FUNC_6(VAR_1, "strong"))
            {
                VAR_5[0] = 8; VAR_5[1] = 10;
                VAR_6[0] = 0.6; VAR_6[1] = 0.6;
            }
        }
        else if (!FUNC_6(VAR_2, "grain"))
        {
            VAR_5[0] = 0; VAR_5[1] = 6;
            VAR_6[0] = VAR_6[1] = 0.8;
            VAR_7[0] = VAR_7[1] = 7;
            VAR_8[0] = VAR_8[1] = 3;
            VAR_9[0] = VAR_9[1] = 2;
            VAR_10[0] = VAR_10[1] = 0;
            if (!FUNC_6(VAR_1, "ultralight"))
            {
                VAR_5[0] = 0; VAR_5[1] = 2.4;
                VAR_6[0] = 0.9; VAR_6[1] = 0.9;
            }
            else if (!FUNC_6(VAR_1, "light"))
            {
                VAR_5[0] = 0; VAR_5[1] = 3.5;
                VAR_6[0] = 0.9; VAR_6[1] = 0.9;
            }
            else if (!FUNC_6(VAR_1, "strong"))
            {
                VAR_5[0] = 0; VAR_5[1] = 8;
                VAR_6[0] = 0.6; VAR_6[1] = 0.6;
            }
        }
        else if (!FUNC_6(VAR_2, "highmotion"))
        {
            VAR_5[0] = 6; VAR_5[1] = 6;
            VAR_6[0] = 0.8; VAR_6[1] = 0.7;
            VAR_7[0] = 7; VAR_7[1] = 7;
            VAR_8[0] = 3; VAR_8[1] = 5;
            VAR_9[0] = 2; VAR_9[1] = 1;
            VAR_10[0] = 0; VAR_10[1] = 0;
            if (!FUNC_6(VAR_1, "ultralight"))
            {
                VAR_5[0] = 1.5; VAR_5[1] = 2.4;
                VAR_6[0] = 0.9; VAR_6[1] = 0.9;
            }
            else if (!FUNC_6(VAR_1, "light"))
            {
                VAR_5[0] = 3; VAR_5[1] = 3.25;
                VAR_6[0] = 0.9; VAR_6[1] = 0.8;
            }
            else if (!FUNC_6(VAR_1, "strong"))
            {
                VAR_5[0] = 8; VAR_5[1] = 6.75;
                VAR_6[0] = 0.6; VAR_6[1] = 0.5;
            }
        }
        else if (!FUNC_6(VAR_2, "animation"))
        {
            VAR_5[0] = 5; VAR_5[1] = 4;
            VAR_6[0] = VAR_6[1] = 0.15;
            VAR_7[0] = VAR_7[1] = 5;
            VAR_8[0] = VAR_8[1] = 7;
            VAR_9[0] = VAR_9[1] = 4;
            VAR_10[0] = VAR_10[1] = 0;
            if (!FUNC_6(VAR_1, "ultralight"))
            {
                VAR_5[0] = 2.5; VAR_5[1] = 2;
                VAR_9[0] = 2; VAR_9[1] = 2;
            }
            else if (!FUNC_6(VAR_1, "light"))
            {
                VAR_5[0] = 3; VAR_5[1] = 2.25;
                VAR_9[0] = 3; VAR_9[1] = 3;
            }
            else if (!FUNC_6(VAR_1, "strong"))
            {
                VAR_5[0] = 10; VAR_5[1] = 8;
            }
        }
        else if (!FUNC_6(VAR_2, "tape"))
        {
            VAR_5[0] = 3; VAR_5[1] = 6;
            VAR_6[0] = 0.8; VAR_6[1] = 0.8;
            VAR_7[0] = 3; VAR_7[1] = 5;
            VAR_8[0] = 5; VAR_8[1] = 5;
            VAR_9[0] = 2; VAR_9[1] = 2;
            VAR_10[0] = 0; VAR_10[1] = 0;
            if (!FUNC_6(VAR_1, "ultralight"))
            {
                VAR_5[0] = 1.5; VAR_5[1] = 5;
                VAR_6[0] = 0.9; VAR_6[1] = 0.9;
                VAR_9[0] = 1; VAR_9[1] = 1;
            }
            else if (!FUNC_6(VAR_1, "light"))
            {
                VAR_5[0] = 2; VAR_5[1] = 6;
                VAR_6[0] = 0.9; VAR_6[1] = 0.9;
            }
            else if (!FUNC_6(VAR_1, "strong"))
            {
                VAR_5[0] = 3.5; VAR_5[1] = 8;
                VAR_6[0] = 0.6; VAR_6[1] = 0.6;
                VAR_7[0] = 5; VAR_7[1] = 5;
            }
        }
        else if (!FUNC_6(VAR_2, "sprite"))
        {
            VAR_5[0] = 3; VAR_5[1] = 4;
            VAR_6[0] = 0.15; VAR_6[1] = 0.5;
            VAR_7[0] = 5; VAR_7[1] = 5;
            VAR_8[0] = 5; VAR_8[1] = 9;
            VAR_9[0] = 2; VAR_9[1] = 4;
            VAR_10[0] = 0; VAR_10[1] = 0;
            if (!FUNC_6(VAR_1, "ultralight"))
            {
                VAR_5[0] = 1.5; VAR_5[1] = 3;
                VAR_8[0] = 5; VAR_8[1] = 7;
                VAR_9[0] = 1; VAR_9[1] = 2;
            }
            else if (!FUNC_6(VAR_1, "light"))
            {
                VAR_5[0] = 2; VAR_5[1] = 4;
                VAR_9[0] = 2; VAR_9[1] = 2;
            }
            else if (!FUNC_6(VAR_1, "strong"))
            {
                VAR_5[0] = 3; VAR_5[1] = 4;
                VAR_8[0] = 7; VAR_8[1] = 11;
            }
        }
        else
        {
            FUNC_0(VAR_0, "Unrecognized nlmeans tune (%s).\n", VAR_2);
            return ((void*)0);
        }

        VAR_4 = FUNC_1();
        FUNC_2(VAR_4, "y-strength", FUNC_4(VAR_5[0]));
        FUNC_2(VAR_4, "y-origin-tune", FUNC_4(VAR_6[0]));
        FUNC_2(VAR_4, "y-patch-size", FUNC_5(VAR_7[0]));
        FUNC_2(VAR_4, "y-range", FUNC_5(VAR_8[0]));
        FUNC_2(VAR_4, "y-frame-count", FUNC_5(VAR_9[0]));
        FUNC_2(VAR_4, "y-prefilter", FUNC_5(VAR_10[0]));

        FUNC_2(VAR_4, "cb-strength", FUNC_4(VAR_5[1]));
        FUNC_2(VAR_4, "cb-origin-tune", FUNC_4(VAR_6[1]));
        FUNC_2(VAR_4, "cb-patch-size", FUNC_5(VAR_7[1]));
        FUNC_2(VAR_4, "cb-range", FUNC_5(VAR_8[1]));
        FUNC_2(VAR_4, "cb-frame-count", FUNC_5(VAR_9[1]));
        FUNC_2(VAR_4, "cb-prefilter", FUNC_5(VAR_10[1]));
    }
    else
    {
        VAR_4 = FUNC_3(VAR_1);
        if (VAR_2 != ((void*)0))
        {
            FUNC_0(VAR_0, "Custom nlmeans parameters specified; ignoring nlmeans tune (%s).\n", VAR_2);
        }
    }

    return VAR_4;
}
