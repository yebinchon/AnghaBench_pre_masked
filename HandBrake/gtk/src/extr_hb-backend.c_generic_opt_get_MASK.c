
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int combo_opts_t ;
typedef int GhbValue ;
typedef int GhbType ;






 int * FUNC_0 (double) ;
 int * FUNC_1 (int) ;
 int * FUNC_2 (char const*) ;
 double FUNC_3 (int *,int const*) ;
 int FUNC_4 (int *,int const*) ;
 char* FUNC_5 (int *,int const*) ;

__attribute__((used)) static GhbValue *
FUNC_6(const char *VAR_0, const void *VAR_1,
                const GhbValue *VAR_2, GhbType VAR_3)
{
    combo_opts_t *VAR_4 = (combo_opts_t*)VAR_1;
    GhbValue *VAR_5 = ((void*)0);
    switch (VAR_3)
    {
        case 129:
        case 131:
        {
            int VAR_6;
            VAR_6 = FUNC_4(VAR_4, VAR_2);
            return FUNC_1(VAR_6);
        } break;
        case 130:
        {
            double VAR_7;
            VAR_7 = FUNC_3(VAR_4, VAR_2);
            return FUNC_0(VAR_7);
        } break;
        case 128:
        {
            const char *VAR_8;
            VAR_8 = FUNC_5(VAR_4, VAR_2);
            return FUNC_2(VAR_8);
        } break;
    }
    return VAR_5;
}
