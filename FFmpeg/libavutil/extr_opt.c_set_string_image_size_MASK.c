
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVOption ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,char*,char const*) ;
 int FUNC_1 (int*,int*,char const*) ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static int FUNC_3(void *VAR_1, const AVOption *VAR_2, const char *VAR_3, int *VAR_4)
{
    int VAR_5;

    if (!VAR_3 || !FUNC_2(VAR_3, "none")) {
        VAR_4[0] =
        VAR_4[1] = 0;
        return 0;
    }
    VAR_5 = FUNC_1(VAR_4, VAR_4 + 1, VAR_3);
    if (VAR_5 < 0)
        FUNC_0(VAR_1, VAR_0, "Unable to parse option value \"%s\" as image size\n", VAR_3);
    return VAR_5;
}
