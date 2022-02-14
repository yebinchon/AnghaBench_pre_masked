
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char**) ;
 int FUNC_2 (int *,int ,char*,char*) ;
 char* FUNC_3 (char*) ;
 char* FUNC_4 (char*,char*,char**) ;
 int FUNC_5 (char*,char const*,double*,double*) ;

__attribute__((used)) static int FUNC_6(AVFilterContext *VAR_3, char *VAR_4, int VAR_5, double *VAR_6, const char *VAR_7)
{
    char *VAR_8, *VAR_9, *VAR_10, *VAR_11 = ((void*)0);
    int VAR_12;

    VAR_8 = VAR_10 = FUNC_3(VAR_4);
    if (!VAR_8)
        return FUNC_0(VAR_2);
    for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
        if (!(VAR_9 = FUNC_4(VAR_8, " ", &VAR_11)))
            break;

        VAR_8 = ((void*)0);
        if (FUNC_5(VAR_9, VAR_7, &VAR_6[VAR_12*2], &VAR_6[VAR_12*2+1]) != 2) {
            FUNC_2(VAR_3, VAR_0, "Invalid coefficients supplied: %s\n", VAR_9);
            FUNC_1(&VAR_10);
            return FUNC_0(VAR_1);
        }
    }

    FUNC_1(&VAR_10);

    return 0;
}
