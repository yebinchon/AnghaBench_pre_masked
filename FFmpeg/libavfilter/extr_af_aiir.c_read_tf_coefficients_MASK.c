
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
 int FUNC_5 (char*,char*,double*) ;

__attribute__((used)) static int FUNC_6(AVFilterContext *VAR_3, char *VAR_4, int VAR_5, double *VAR_6)
{
    char *VAR_7, *VAR_8, *VAR_9, *VAR_10 = ((void*)0);
    int VAR_11;

    VAR_7 = VAR_9 = FUNC_3(VAR_4);
    if (!VAR_7)
        return FUNC_0(VAR_2);
    for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
        if (!(VAR_8 = FUNC_4(VAR_7, " ", &VAR_10)))
            break;

        VAR_7 = ((void*)0);
        if (FUNC_5(VAR_8, "%lf", &VAR_6[VAR_11]) != 1) {
            FUNC_2(VAR_3, VAR_0, "Invalid coefficients supplied: %s\n", VAR_8);
            FUNC_1(&VAR_9);
            return FUNC_0(VAR_1);
        }
    }

    FUNC_1(&VAR_9);

    return 0;
}
