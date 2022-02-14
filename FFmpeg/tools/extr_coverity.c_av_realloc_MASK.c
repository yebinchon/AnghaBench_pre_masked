
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (size_t) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*,char*) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (void*) ;

void *FUNC_5(void *VAR_0, size_t VAR_1) {
    int VAR_2;
    FUNC_3(VAR_1);
    if (VAR_2) {
        FUNC_1(VAR_0);
        VAR_0 = FUNC_0(VAR_1);
        FUNC_4(VAR_0);
        FUNC_2(VAR_0, "av_free");
        return VAR_0;
    } else {
        return 0;
    }
}
