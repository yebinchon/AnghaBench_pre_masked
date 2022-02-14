
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_value_array_t ;
typedef int hb_dict_t ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,char const*) ;
 int * FUNC_2 (int *,char*) ;
 int * FUNC_3 () ;
 int FUNC_4 (char**) ;
 int * FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 char* FUNC_8 (int *) ;
 int VAR_0 ;
 char** FUNC_9 (char const*,int) ;

__attribute__((used)) static void FUNC_10(hb_value_array_t *VAR_1, int VAR_2, int VAR_3)
{
    if (VAR_1 == ((void*)0))
        VAR_1 = FUNC_3();

    int VAR_4 = FUNC_6(VAR_1);
    int VAR_5;
    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
    {
        const char *VAR_6;
        hb_dict_t *VAR_7 = FUNC_5(VAR_1, VAR_5);
        VAR_6 = FUNC_8(FUNC_2(VAR_7, "PresetName"));
        FUNC_0(VAR_0, "    ", VAR_2);
        if (FUNC_7(FUNC_2(VAR_7, "Folder")))
        {
            VAR_2++;
            FUNC_1(VAR_0, "%s/\n", VAR_6);
            hb_value_array_t *VAR_8;
            VAR_8 = FUNC_2(VAR_7, "ChildrenArray");
            if (VAR_8 == ((void*)0))
                continue;
            FUNC_10(VAR_8, VAR_2, VAR_3);
            VAR_2--;
        }
        else
        {
            FUNC_1(VAR_0, "%s\n", VAR_6);
            if (VAR_3)
            {
                const char *VAR_9;
                VAR_9 = FUNC_8(FUNC_2(VAR_7,
                                                       "PresetDescription"));
                if (VAR_9 != ((void*)0) && VAR_9[0] != 0)
                {
                    int VAR_10;
                    char **VAR_11 = FUNC_9(VAR_9, 60);
                    for (VAR_10 = 0; VAR_11[VAR_10] != ((void*)0); VAR_10++)
                    {
                        FUNC_0(VAR_0, "    ", VAR_2+1);
                        FUNC_1(VAR_0, "%s\n", VAR_11[VAR_10]);
                    }
                    FUNC_4(VAR_11);
                }
            }
        }
    }
}
