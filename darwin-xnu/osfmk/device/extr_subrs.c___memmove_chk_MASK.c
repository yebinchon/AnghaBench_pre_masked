
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 void* FUNC_1 (void*,void const*,size_t) ;
 int FUNC_2 (char*,void*,void const*,size_t,size_t) ;

void *
FUNC_3(void *VAR_0, void const *VAR_1, size_t VAR_2, size_t VAR_3)
{
    if (FUNC_0(VAR_3 < VAR_2))
        FUNC_2("__memmove_chk object size check failed: dst %p, src %p, (%zu < %zu)", VAR_0, VAR_1, VAR_3, VAR_2);
    return FUNC_1(VAR_0, VAR_1, VAR_2);
}
