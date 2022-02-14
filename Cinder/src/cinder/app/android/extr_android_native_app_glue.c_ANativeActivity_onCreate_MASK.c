
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int instance; TYPE_1__* callbacks; } ;
struct TYPE_6__ {int onLowMemory; int onConfigurationChanged; int onInputQueueDestroyed; int onInputQueueCreated; int onNativeWindowDestroyed; int onNativeWindowCreated; int onWindowFocusChanged; int onDestroy; int onStop; int onPause; int onSaveInstanceState; int onResume; int onStart; } ;
typedef TYPE_2__ ANativeActivity ;


 int FUNC_0 (char*,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,void*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

void FUNC_2(ANativeActivity* VAR_13, void* VAR_14, size_t VAR_15) {
    FUNC_0("ANativeActivity_onCreate: %p\n", VAR_13);

    VAR_13->callbacks->onStart = VAR_10;
    VAR_13->callbacks->onResume = VAR_8;
    VAR_13->callbacks->onSaveInstanceState = VAR_9;
    VAR_13->callbacks->onPause = VAR_7;
    VAR_13->callbacks->onStop = VAR_11;
    VAR_13->callbacks->onDestroy = VAR_1;
    VAR_13->callbacks->onWindowFocusChanged = VAR_12;
    VAR_13->callbacks->onNativeWindowCreated = VAR_5;
    VAR_13->callbacks->onNativeWindowDestroyed = VAR_6;
    VAR_13->callbacks->onInputQueueCreated = VAR_2;
    VAR_13->callbacks->onInputQueueDestroyed = VAR_3;
    VAR_13->callbacks->onConfigurationChanged = VAR_0;
    VAR_13->callbacks->onLowMemory = VAR_4;
    VAR_13->instance = FUNC_1(VAR_13, VAR_14, VAR_15);
}
