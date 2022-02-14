
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,char*,char const*,size_t,size_t,size_t) ;
 size_t FUNC_2 (char*) ;
 char* FUNC_3 (char*,char const*,size_t) ;
 size_t FUNC_4 (char const*,size_t) ;

char *
FUNC_5 (char *restrict VAR_0, const char *restrict VAR_1,
               size_t VAR_2, size_t VAR_3)
{
    size_t VAR_4 = FUNC_2(VAR_0);
    size_t VAR_5 = FUNC_4(VAR_1, VAR_2);
    if (FUNC_0 (VAR_3 < VAR_4 + VAR_5 + 1)) {
        FUNC_1("__strncat_chk object size check failed: dst %p, src %p, (%zu < %zu + %zu + 1)", VAR_0, VAR_1, VAR_3, VAR_4, VAR_5);
    }
    return FUNC_3(VAR_0, VAR_1, VAR_2);
}
