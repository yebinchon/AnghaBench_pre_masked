
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*) ;
 void* FUNC_1 (void*,size_t) ;
 scalar_t__ FUNC_2 (size_t,size_t,size_t*) ;

void *FUNC_3(void *VAR_0, size_t VAR_1, size_t VAR_2)
{
    size_t VAR_3;
    void *VAR_4;

    if (FUNC_2(VAR_2, VAR_1, &VAR_3)) {
        FUNC_0(VAR_0);
        return ((void*)0);
    }
    VAR_4 = FUNC_1(VAR_0, VAR_3);
    if (!VAR_4)
        FUNC_0(VAR_0);
    return VAR_4;
}
