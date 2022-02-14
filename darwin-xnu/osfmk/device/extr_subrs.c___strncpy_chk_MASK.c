
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,char*,char*,size_t,size_t) ;
 char* FUNC_2 (char*,char*,size_t) ;

char *
FUNC_3 (char *restrict VAR_0, char *restrict VAR_1,
               size_t VAR_2, size_t VAR_3)
{
    if (FUNC_0(VAR_3 < VAR_2)) {
        FUNC_1("__strncpy_chk object size check failed: dst %p, src %p, (%zu < %zu)", VAR_0, VAR_1, VAR_3, VAR_2);
    }
    return FUNC_2(VAR_0, VAR_1, VAR_2);
}
