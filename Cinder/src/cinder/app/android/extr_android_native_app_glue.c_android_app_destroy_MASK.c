
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct android_app {int destroyed; int mutex; int cond; int config; int * inputQueue; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct android_app*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct android_app* VAR_0) {
    FUNC_2("android_app_destroy!");
    FUNC_3(VAR_0);
    FUNC_5(&VAR_0->mutex);
    if (VAR_0->inputQueue != ((void*)0)) {
        FUNC_1(VAR_0->inputQueue);
    }
    FUNC_0(VAR_0->config);
    VAR_0->destroyed = 1;
    FUNC_4(&VAR_0->cond);
    FUNC_6(&VAR_0->mutex);

}
