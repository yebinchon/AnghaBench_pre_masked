
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_value_t ;
typedef int hb_filter_object_t ;
typedef int hb_dict_t ;
typedef int hb_dict_iter_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,char const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,char const**,int *) ;
 int * FUNC_6 (int) ;
 char** FUNC_7 (int) ;
 char* FUNC_8 (int,int *) ;
 int FUNC_9 (char**) ;
 char* FUNC_10 (char*,int,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;
 char* FUNC_14 (char*) ;

__attribute__((used)) static char * FUNC_15(int VAR_4, hb_dict_t * VAR_5)
{
    char * VAR_6 = FUNC_14("");
    const char * VAR_7;
    char ** VAR_8 = ((void*)0);
    hb_value_t * VAR_9;
    hb_dict_iter_t VAR_10;
    int VAR_11 = 1;

    if (FUNC_2(VAR_5) == 0)
    {
        return VAR_6;
    }

    if (FUNC_2(VAR_5) == 2)
    {
        hb_value_t *VAR_12 = FUNC_3(VAR_5, "Num");
        hb_value_t *VAR_13 = FUNC_3(VAR_5, "Den");
        if (VAR_12 != ((void*)0) && VAR_13 != ((void*)0) &&
            FUNC_13(VAR_12) == VAR_2 &&
            FUNC_13(VAR_13) == VAR_2)
        {
            int VAR_14 = FUNC_12(VAR_12);
            int VAR_15 = FUNC_12(VAR_13);
            char * VAR_16 = FUNC_10("%d/%d", VAR_14, VAR_15);
            VAR_6 = FUNC_0(VAR_6, VAR_16);
            FUNC_1(VAR_16);
            return VAR_6;
        }
    }
    hb_filter_object_t * VAR_17 = FUNC_6(VAR_4);
    if (VAR_17 != ((void*)0))
    {
        VAR_8 = FUNC_7(VAR_4);
        if (VAR_8 != ((void*)0) && VAR_8[0] == ((void*)0))
        {
            FUNC_9(VAR_8);
            VAR_8 = ((void*)0);
        }
    }

    int VAR_18, VAR_19 = 0;
    VAR_10 = FUNC_4(VAR_5);
    if (VAR_8 == ((void*)0))
    {
        VAR_18 = !FUNC_5(VAR_5, &VAR_10, &VAR_7, ((void*)0));
    }
    else
    {
        VAR_18 = (VAR_7 = VAR_8[VAR_19]) == ((void*)0);
    }
    while (!VAR_18)
    {
        VAR_9 = FUNC_3(VAR_5, VAR_7);
        if (VAR_9 != ((void*)0))
        {
            if (!VAR_11)
            {
                VAR_6 = FUNC_0(VAR_6, ":");
            }
            VAR_11 = 0;
            VAR_6 = FUNC_0(VAR_6, VAR_7);
            int VAR_20 = 1;

            if (FUNC_13(VAR_9) == VAR_3)
            {
                VAR_20 = 0;
            }
            else if (FUNC_13(VAR_9) == VAR_1)
            {
                VAR_20 = FUNC_2(VAR_9);
            }
            else if (FUNC_13(VAR_9) == VAR_0)
            {
                VAR_20 = FUNC_11(VAR_9);
            }
            if (VAR_20 != 0)
            {
                char * VAR_21 = FUNC_8(VAR_4, VAR_9);
                if (VAR_21 != ((void*)0))
                {
                    VAR_6 = FUNC_0(VAR_6, "=");
                    if (FUNC_13(VAR_9) == VAR_1)
                    {
                        VAR_6 = FUNC_0(VAR_6, "'");
                        VAR_6 = FUNC_0(VAR_6, VAR_21);
                        VAR_6 = FUNC_0(VAR_6, "'");
                    }
                    else if (FUNC_13(VAR_9) == VAR_0)
                    {
                        VAR_6 = FUNC_0(VAR_6, "[");
                        VAR_6 = FUNC_0(VAR_6, VAR_21);
                        VAR_6 = FUNC_0(VAR_6, "]");
                    }
                    else
                    {
                        VAR_6 = FUNC_0(VAR_6, VAR_21);
                    }
                    FUNC_1(VAR_21);
                }
            }
        }
        VAR_19++;
        if (VAR_8 == ((void*)0))
        {
            VAR_18 = !FUNC_5(VAR_5, &VAR_10, &VAR_7, ((void*)0));
        }
        else
        {
            VAR_18 = (VAR_7 = VAR_8[VAR_19]) == ((void*)0);
        }
    }
    FUNC_9(VAR_8);

    return VAR_6;
}
