
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

__attribute__((used)) static char *FUNC_1(char *VAR_0)
{
    char *VAR_1 = VAR_0 + FUNC_0(VAR_0) - 1;

    while (*VAR_0 == ' ' || *VAR_0 == '\t' || *VAR_0 == '\r' || *VAR_0 == '\n')
        VAR_0++;

    while (VAR_0 <= VAR_1 && (*VAR_1 == ' ' || *VAR_1 == '\t' || *VAR_1 == '\r' || *VAR_1 == '\n'))
        *VAR_1-- = 0;

    return VAR_0;
}
