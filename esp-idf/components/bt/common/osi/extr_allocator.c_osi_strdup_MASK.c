
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,size_t) ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (char const*) ;

char *FUNC_3(const char *VAR_0)
{
    size_t VAR_1 = FUNC_2(VAR_0) + 1;
    char *VAR_2 = (char *)FUNC_1(VAR_1);

    if (!VAR_2) {
        return ((void*)0);
    }

    FUNC_0(VAR_2, VAR_0, VAR_1);
    return VAR_2;
}
