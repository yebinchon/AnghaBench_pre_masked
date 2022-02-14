
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssa_style_indicies_t ;
typedef int hb_subtitle_style_context_t ;


 scalar_t__ FUNC_0 (int *,char**,int *) ;
 int * FUNC_1 (int,int) ;
 int FUNC_2 (char**,int *) ;
 int FUNC_3 (char*) ;
 char** FUNC_4 (char*,int ) ;
 int FUNC_5 (char**) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (int *) ;
 char* FUNC_8 (char*,char) ;
 char* FUNC_9 (char const*,char*) ;

hb_subtitle_style_context_t * FUNC_10(const char * VAR_0)
{
    hb_subtitle_style_context_t * VAR_1;

    VAR_1 = FUNC_1(1, sizeof(*VAR_1));
    if (VAR_1 == ((void*)0))
    {
        return ((void*)0);
    }
    if (VAR_0 != ((void*)0))
    {

        char * VAR_2 = FUNC_9(VAR_0, "[V4");

        if (VAR_2 != ((void*)0))
        {
            VAR_2 = FUNC_9(VAR_2, "\nFormat:");
            if (VAR_2 != ((void*)0))
            {
                char ** VAR_3;
                int VAR_4 = 7;
                char * VAR_5 = FUNC_6(VAR_2 + 8);

                VAR_3 = FUNC_4(VAR_5, 0);
                FUNC_3(VAR_5);

                if (VAR_3 != ((void*)0))
                {
                    ssa_style_indicies_t VAR_6;

                    FUNC_2(VAR_3, &VAR_6);

                    VAR_2 = FUNC_9(VAR_2, "\nStyle:");
                    while (VAR_2 != ((void*)0))
                    {
                        char ** VAR_7;

                        VAR_5 = FUNC_6(VAR_2 + VAR_4);
                        VAR_7 = FUNC_4(VAR_5, 0);
                        FUNC_3(VAR_5);

                        if (FUNC_0(VAR_1, VAR_7, &VAR_6))
                        {
                            FUNC_5(VAR_7);
                            break;
                        }
                        VAR_2 = FUNC_8(VAR_2 + VAR_4, '\n');
                        VAR_4 = 1;

                        FUNC_5(VAR_7);
                    }

                    FUNC_5(VAR_3);
                }
            }
        }
    }
    FUNC_7(VAR_1);
    return VAR_1;
}
