
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_filter_param_t ;
typedef int GhbValue ;
typedef int GhbType ;






 int * FUNC_0 (int) ;
 int * FUNC_1 (char const*) ;
 int * FUNC_2 (int) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int *,int const*) ;
 char* FUNC_5 (int *,int const*) ;

__attribute__((used)) static GhbValue *
FUNC_6(const char *VAR_0, const GhbValue *VAR_1, GhbType VAR_2,
               int VAR_3, int VAR_4)
{
    GhbValue *VAR_5 = ((void*)0);
    hb_filter_param_t * VAR_6;

    if (VAR_4)
    {
        VAR_6 = FUNC_2(VAR_3);
    }
    else
    {
        VAR_6 = FUNC_3(VAR_3);
    }
    switch (VAR_2)
    {
        case 130:
        case 131:
        case 129:
        {
            int VAR_7;
            VAR_7 = FUNC_4(VAR_6, VAR_1);
            return FUNC_0(VAR_7);
        } break;
        case 128:
        {
            const char *VAR_8;
            VAR_8 = FUNC_5(VAR_6, VAR_1);
            return FUNC_1(VAR_8);
        } break;
    }
    return VAR_5;
}
