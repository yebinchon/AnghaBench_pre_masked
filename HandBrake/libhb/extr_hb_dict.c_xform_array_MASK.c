
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_value_type_t ;
typedef int hb_value_t ;







 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,char*,char const*) ;
 int * FUNC_2 (int const*,int) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int **) ;
 char* FUNC_5 (int *) ;
 int * FUNC_6 (int *,int) ;
 int * FUNC_7 () ;
 int * FUNC_8 (char*) ;
 char* FUNC_9 (char*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static hb_value_t* FUNC_11(const hb_value_t *VAR_0, hb_value_type_t VAR_1)
{
    hb_value_t *VAR_2 = ((void*)0);
    int VAR_3 = FUNC_3(VAR_0);

    if (VAR_3 > 0)
        VAR_2 = FUNC_2(VAR_0, 0);
    switch (VAR_1)
    {
        default:
        case 129:
        case 132:
        case 130:
        case 131:
            return FUNC_6(VAR_2, VAR_1);
        case 128:
        {
            char *VAR_4 = FUNC_9("");
            int VAR_5;
            for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
            {
                hb_value_t *VAR_6 = FUNC_2(VAR_0, VAR_5);
                hb_value_t *VAR_7 = FUNC_6(VAR_6, VAR_1);
                const char *VAR_8 = FUNC_5(VAR_7);
                if (VAR_8 != ((void*)0))
                {
                    char *VAR_9 = VAR_4;
                    VAR_4 = FUNC_1("%s%s,", VAR_9, VAR_8);
                    FUNC_0(VAR_9);
                }
                FUNC_4(&VAR_7);
            }
            int VAR_10 = FUNC_10(VAR_4);
            hb_value_t *VAR_11;
            if (VAR_10 > 0)
            {

                VAR_4[VAR_10 - 1] = 0;
                VAR_11 = FUNC_8(VAR_4);
            }
            else
            {
                FUNC_0(VAR_4);
                VAR_4 = ((void*)0);
                VAR_11 = FUNC_7();
            }
            FUNC_0(VAR_4);
            return VAR_11;
        }
    }
}
