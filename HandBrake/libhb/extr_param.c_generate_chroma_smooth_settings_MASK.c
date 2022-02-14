
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
        double VAR_5;
        int VAR_6;


        if ((VAR_2 == ((void*)0) || !FUNC_6(VAR_2, "none")) ||
           (!FUNC_6(VAR_2, "tiny")) ||
           (!FUNC_6(VAR_2, "small")) ||
           (!FUNC_6(VAR_2, "medium")) ||
           (!FUNC_6(VAR_2, "wide")) ||
           (!FUNC_6(VAR_2, "verywide")))
        {
            VAR_5 = 1.2;
            if (!FUNC_6(VAR_1, "ultralight"))
            {
                VAR_5 = 0.4;
            }
            else if (!FUNC_6(VAR_1, "light"))
            {
                VAR_5 = 0.8;
            }
            else if (!FUNC_6(VAR_1, "strong"))
            {
                VAR_5 = 1.6;
            }
            else if (!FUNC_6(VAR_1, "stronger"))
            {
                VAR_5 = 2.0;
            }
            else if (!FUNC_6(VAR_1, "verystrong"))
            {
                VAR_5 = 2.4;
            }
        }
        else
        {
            FUNC_0(VAR_0, "Unrecognized chroma smooth tune (%s).\n", VAR_2);
            return ((void*)0);
        }


        if (VAR_2 == ((void*)0) || VAR_2[0] == 0 ||
            !FUNC_6(VAR_2, "none") || !FUNC_6(VAR_2, "medium"))
        {
            VAR_6 = 7;
        }
        else if (!FUNC_6(VAR_2, "tiny"))
        {
            VAR_6 = 3;
        }
        else if (!FUNC_6(VAR_2, "small"))
        {
            VAR_6 = 5;
        }
        else if (!FUNC_6(VAR_2, "wide"))
        {
            VAR_6 = 9;
        }
        else if (!FUNC_6(VAR_2, "verywide"))
        {
            VAR_6 = 11;
        }
        else
        {
            FUNC_0(VAR_0, "Unrecognized chroma smooth tune (%s).\n", VAR_2);
            return ((void*)0);
        }

        VAR_4 = FUNC_1();
        FUNC_2(VAR_4, "cb-strength", FUNC_4(VAR_5));
        FUNC_2(VAR_4, "cb-size", FUNC_5(VAR_6));
    }
    else
    {
        VAR_4 = FUNC_3(VAR_1);
        if (VAR_2 != ((void*)0))
        {
            FUNC_0(VAR_0, "Custom chroma smooth parameters specified; ignoring chroma smooth tune (%s).\n", VAR_2);
        }
    }

    return VAR_4;
}
