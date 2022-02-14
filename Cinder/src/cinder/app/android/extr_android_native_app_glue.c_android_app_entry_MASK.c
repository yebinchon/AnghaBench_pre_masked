
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int process; struct android_app* app; int id; } ;
struct TYPE_5__ {int process; struct android_app* app; int id; } ;
struct android_app {int running; int mutex; int cond; int * looper; TYPE_3__ cmdPollSource; int msgread; TYPE_2__ inputPollSource; TYPE_1__* activity; int config; } ;
struct TYPE_4__ {int assetManager; } ;
typedef int ALooper ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int ,int ,int ,int *,TYPE_3__*) ;
 int * FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct android_app*) ;
 int FUNC_5 (struct android_app*) ;
 int FUNC_6 (struct android_app*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void* FUNC_11(void* VAR_6) {
    struct android_app* VAR_7 = (struct android_app*)VAR_6;

    VAR_7->config = FUNC_1();
    FUNC_0(VAR_7->config, VAR_7->activity->assetManager);

    FUNC_6(VAR_7);

    VAR_7->cmdPollSource.id = VAR_3;
    VAR_7->cmdPollSource.app = VAR_7;
    VAR_7->cmdPollSource.process = VAR_4;
    VAR_7->inputPollSource.id = VAR_2;
    VAR_7->inputPollSource.app = VAR_7;
    VAR_7->inputPollSource.process = VAR_5;

    ALooper* VAR_8 = FUNC_3(VAR_1);
    FUNC_2(VAR_8, VAR_7->msgread, VAR_3, VAR_0, ((void*)0),
            &VAR_7->cmdPollSource);
    VAR_7->looper = VAR_8;

    FUNC_9(&VAR_7->mutex);
    VAR_7->running = 1;
    FUNC_7(&VAR_7->cond);
    FUNC_10(&VAR_7->mutex);

    FUNC_5(VAR_7);

    FUNC_4(VAR_7);



    FUNC_8((void*)((void*)0));
    return ((void*)0);
}
