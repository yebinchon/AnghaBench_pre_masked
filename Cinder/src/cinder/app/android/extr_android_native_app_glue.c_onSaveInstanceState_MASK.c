
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct android_app {size_t savedStateSize; int mutex; int * savedState; int cond; scalar_t__ stateSaved; } ;
struct TYPE_4__ {scalar_t__ instance; } ;
typedef TYPE_1__ ANativeActivity ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_1__*) ;
 int FUNC_1 (struct android_app*,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void* FUNC_5(ANativeActivity* VAR_1, size_t* VAR_2) {
    struct android_app* VAR_3 = (struct android_app*)VAR_1->instance;
    void* VAR_4 = ((void*)0);

    FUNC_0("SaveInstanceState: %p\n", VAR_1);
    FUNC_3(&VAR_3->mutex);
    VAR_3->stateSaved = 0;
    FUNC_1(VAR_3, VAR_0);
    while (!VAR_3->stateSaved) {
        FUNC_2(&VAR_3->cond, &VAR_3->mutex);
    }

    if (VAR_3->savedState != ((void*)0)) {
        VAR_4 = VAR_3->savedState;
        *VAR_2 = VAR_3->savedStateSize;
        VAR_3->savedState = ((void*)0);
        VAR_3->savedStateSize = 0;
    }

    FUNC_4(&VAR_3->mutex);

    return VAR_4;
}
