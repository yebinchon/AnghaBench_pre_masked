
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVFilterGraph ;
typedef int AVFilterContext ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char const**,char*) ;
 int FUNC_2 (int **,int *,int,char*,char*,void*) ;

__attribute__((used)) static int FUNC_3(AVFilterContext **VAR_0, const char **VAR_1, AVFilterGraph *VAR_2,
                        int VAR_3, void *VAR_4)
{
    char *VAR_5 = ((void*)0);
    char *VAR_6 = FUNC_1(VAR_1, "=,;[");
    int VAR_7;

    if (**VAR_1 == '=') {
        (*VAR_1)++;
        VAR_5 = FUNC_1(VAR_1, "[],;");
    }

    VAR_7 = FUNC_2(VAR_0, VAR_2, VAR_3, VAR_6, VAR_5, VAR_4);
    FUNC_0(VAR_6);
    FUNC_0(VAR_5);
    return VAR_7;
}
