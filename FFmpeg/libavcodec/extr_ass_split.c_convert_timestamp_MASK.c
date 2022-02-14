
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char*,int*,int*,int*,int*) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, const char *VAR_1, int VAR_2)
{
    int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;
    if ((VAR_3 = FUNC_0(VAR_1, "%d:%02d:%02d.%02d", &VAR_4, &VAR_5, &VAR_6, &VAR_7)) == 4)
        *(int *)VAR_0 = 360000*VAR_4 + 6000*VAR_5 + 100*VAR_6 + VAR_7;
    return VAR_3 == 4;
}
