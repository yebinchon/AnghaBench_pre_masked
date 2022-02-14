
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_value_t ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int ,char*,int) ;
 int * FUNC_2 (char const*,char const*,char const*) ;
 int * FUNC_3 (int,char const*,char const*,char const*) ;
 int * FUNC_4 (char const*,char const*,char const*) ;
 int * FUNC_5 (char const*,char const*,char const*) ;
 int * FUNC_6 (char const*,char const*,char const*) ;
 int * FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (int,int *) ;
 int FUNC_9 (int **) ;
 int VAR_0 ;

hb_value_t *
FUNC_10(int VAR_1, const char *VAR_2, const char *VAR_3,
                            const char *VAR_4)
{
    hb_value_t * VAR_5 = ((void*)0);

    switch (VAR_1)
    {
        case 133:
        case 130:
        case 142:
        case 128:
        case 131:
        case 137:
        case 132:
            VAR_5 = FUNC_7(VAR_4);
            break;
        case 134:
            VAR_5 = FUNC_5(VAR_2, VAR_3, VAR_4);
            break;
        case 144:
            VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4);
            break;
        case 135:
            VAR_5 = FUNC_4(VAR_2, VAR_3, VAR_4);
            break;
        case 129:
            VAR_5 = FUNC_6(VAR_2, VAR_3, VAR_4);
            break;
        case 141:
        case 143:
        case 140:
        case 138:
        case 136:
        case 139:
            VAR_5 = FUNC_3(VAR_1, VAR_2,
                                                 VAR_3, VAR_4);
            break;
        default:
            FUNC_1(VAR_0,
                    "hb_generate_filter_settings: Unrecognized filter (%d).\n",
                    VAR_1);
            break;
    }
    FUNC_0(VAR_1, VAR_5);

    if (VAR_5 != ((void*)0) &&
        FUNC_8(VAR_1, VAR_5) == 0)
    {
        return VAR_5;
    }
    FUNC_9(&VAR_5);
    return ((void*)0);
}
