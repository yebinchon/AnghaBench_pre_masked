
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static char *FUNC_2(const char *VAR_0)
{
    char *VAR_1;


    while (FUNC_0((unsigned char)*VAR_0)) VAR_0++;

    if (*VAR_0 == 0) {
        return (char *)VAR_0;
    }


    VAR_1 = (char *)(VAR_0 + FUNC_1(VAR_0) - 1);
    while (VAR_1 > VAR_0 && FUNC_0((unsigned char)*VAR_1)) VAR_1--;


    *(VAR_1 + 1) = 0;

    return (char *)VAR_0;
}
