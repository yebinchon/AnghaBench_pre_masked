
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char*,...) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0)
{
    char VAR_1;
    int VAR_2, VAR_3;
    return (FUNC_0(VAR_0, "%*u:%*u:%*u.%*u %*u:%*u:%*u.%*u %c", &VAR_1) == 1 ||
            (FUNC_0(VAR_0, "@%u @%u %c", &VAR_2, &VAR_3, &VAR_1) == 3 && VAR_2 < VAR_3));
}
