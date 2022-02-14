
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVFilterContext ;


 char* FUNC_0 (char*,...) ;
 int FUNC_1 (float) ;

__attribute__((used)) static char *FUNC_2(AVFilterContext *VAR_0, float VAR_1, int VAR_2)
{
    char *VAR_3;

    if (VAR_2 == 0)
        VAR_3 = FUNC_0("0");
    else if (FUNC_1(VAR_1) > 6)
        VAR_3 = FUNC_0("%.2fh", VAR_1 / (60 * 60));
    else if (FUNC_1(VAR_1) > 3)
        VAR_3 = FUNC_0("%.2fm", VAR_1 / 60);
    else
        VAR_3 = FUNC_0("%.2fs", VAR_1);
    return VAR_3;
}
