
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (size_t,size_t) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;

void *FUNC_3(size_t VAR_0, size_t VAR_1) {
    void *VAR_2 = FUNC_0(VAR_0, VAR_1);
    if (!VAR_2) {
        FUNC_2("xcalloc failed");
        FUNC_1(1);
    }
    return VAR_2;
}
