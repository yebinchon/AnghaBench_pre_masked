
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char*,char*) ;
 char* FUNC_1 (char const*,char) ;
 char* FUNC_2 (char const*,char) ;

const char *FUNC_3(const char *VAR_0)
{
    char *VAR_1;

    if (!VAR_0 || *VAR_0 == '\0')
        return ".";

    VAR_1 = FUNC_2(VAR_0, '/');







    if (!VAR_1)
        return VAR_0;

    return VAR_1 + 1;
}
