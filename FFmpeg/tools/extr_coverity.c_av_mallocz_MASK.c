
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (size_t) ;
 int FUNC_1 (void*,char*) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (void*) ;

void *FUNC_4(size_t VAR_0) {
    int VAR_1;
    FUNC_2(VAR_0);
    if (VAR_1) {
        void *VAR_2 = FUNC_0(VAR_0);
        FUNC_3(VAR_2);
        FUNC_1(VAR_2, "av_free");
        return VAR_2;
    } else {
        return 0;
    }
}
