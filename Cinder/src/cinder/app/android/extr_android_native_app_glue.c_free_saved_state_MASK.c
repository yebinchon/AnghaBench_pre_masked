
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct android_app {int mutex; scalar_t__ savedStateSize; int * savedState; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct android_app* VAR_0) {
    FUNC_1(&VAR_0->mutex);
    if (VAR_0->savedState != ((void*)0)) {
        FUNC_0(VAR_0->savedState);
        VAR_0->savedState = ((void*)0);
        VAR_0->savedStateSize = 0;
    }
    FUNC_2(&VAR_0->mutex);
}
