
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_dict_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char**) ;
 char** FUNC_5 (char const*,char) ;
 int FUNC_6 (int **) ;
 int * FUNC_7 (char*) ;
 char* FUNC_8 (char*) ;
 int FUNC_9 (char*) ;

hb_dict_t * FUNC_10(const char * VAR_0)
{
    hb_dict_t * VAR_1 = FUNC_2();
    char ** VAR_2 = FUNC_5(VAR_0, ':');
    int VAR_3;

    for (VAR_3 = 0; VAR_2[VAR_3] != ((void*)0); VAR_3++)
    {
        char * VAR_4, * VAR_5;
        char ** VAR_6 = FUNC_5(VAR_2[VAR_3], '=');
        if (VAR_6[0] == ((void*)0) || VAR_6[1] == ((void*)0))
        {

            FUNC_4(VAR_2);
            FUNC_4(VAR_6);
            FUNC_6(&VAR_1);
            FUNC_3("hb_parse_filter_settings: Error parsing (%s)",
                   VAR_0);
            return ((void*)0);
        }
        VAR_4 = VAR_6[0];
        VAR_5 = VAR_6[1];

        int VAR_7 = FUNC_9(VAR_5) - 1;



        if (VAR_7 > 0 && VAR_5[0] == '\'' && VAR_5[VAR_7] == '\'')
        {
            char * VAR_8 = FUNC_8(VAR_5 + 1);
            VAR_8[VAR_7 - 1] = 0;
            hb_dict_t * VAR_9 = FUNC_10(VAR_8);
            FUNC_0(VAR_8);
            if (VAR_9 == ((void*)0))
            {

                FUNC_4(VAR_2);
                FUNC_4(VAR_6);
                FUNC_6(&VAR_1);
                FUNC_3("hb_parse_filter_settings: Error parsing (%s)",
                       VAR_0);
                return ((void*)0);
            }
            FUNC_1(VAR_1, VAR_4, VAR_9);
        }

        else if (VAR_7 > 0 && VAR_5[0] == '"' && VAR_5[VAR_7] == '"')
        {
            char * VAR_10 = FUNC_8(VAR_5 + 1);
            VAR_10[VAR_7 - 1] = 0;
            FUNC_1(VAR_1, VAR_4, FUNC_7(VAR_10));
            FUNC_0(VAR_10);
        }
        else
        {
            FUNC_1(VAR_1, VAR_4, FUNC_7(VAR_5));
        }

        FUNC_4(VAR_6);
    }
    FUNC_4(VAR_2);

    return VAR_1;
}
