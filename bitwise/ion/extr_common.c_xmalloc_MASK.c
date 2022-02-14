
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 void* FUNC_1 (size_t) ;
 int FUNC_2 (char*) ;

void *FUNC_3(size_t VAR_0) {
    void *VAR_1 = FUNC_1(VAR_0);
    if (!VAR_1) {
        FUNC_2("xmalloc failed");
        FUNC_0(1);
    }
    return VAR_1;
}
