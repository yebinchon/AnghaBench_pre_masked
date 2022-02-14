
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,char*,char const*,size_t,size_t) ;
 size_t FUNC_2 (char*,char const*,size_t) ;

size_t
FUNC_3(char *VAR_0, char const *VAR_1, size_t VAR_2, size_t VAR_3)
{
    if (FUNC_0(VAR_3 < VAR_2))
        FUNC_1("__strlcat_chk object size check failed: dst %p, src %p, (%zu < %zu)", VAR_0, VAR_1, VAR_3, VAR_2);
    return FUNC_2(VAR_0, VAR_1, VAR_2);
}
