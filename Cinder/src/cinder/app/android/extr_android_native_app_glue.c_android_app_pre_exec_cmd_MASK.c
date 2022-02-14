
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct android_app {int activityState; int destroyRequested; TYPE_1__* activity; int config; int mutex; int cond; int pendingWindow; int window; int inputPollSource; int looper; int * inputQueue; int * pendingInputQueue; } ;
typedef int int8_t ;
struct TYPE_2__ {int assetManager; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ,int ,int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int FUNC_4 (struct android_app*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct android_app* VAR_1, int8_t VAR_2) {
    switch (VAR_2) {
        case 133:

            FUNC_6(&VAR_1->mutex);
            if (VAR_1->inputQueue != ((void*)0)) {
                FUNC_2(VAR_1->inputQueue);
            }
            VAR_1->inputQueue = VAR_1->pendingInputQueue;
            if (VAR_1->inputQueue != ((void*)0)) {
                FUNC_3("Attaching input queue to looper");
                FUNC_1(VAR_1->inputQueue,
                        VAR_1->looper, VAR_0, ((void*)0),
                        &VAR_1->inputPollSource);
            }
            FUNC_5(&VAR_1->cond);
            FUNC_7(&VAR_1->mutex);
            break;

        case 134:

            FUNC_6(&VAR_1->mutex);
            VAR_1->window = VAR_1->pendingWindow;
            FUNC_5(&VAR_1->cond);
            FUNC_7(&VAR_1->mutex);
            break;

        case 128:

            FUNC_5(&VAR_1->cond);
            break;

        case 131:
        case 130:
        case 132:
        case 129:

            FUNC_6(&VAR_1->mutex);
            VAR_1->activityState = VAR_2;
            FUNC_5(&VAR_1->cond);
            FUNC_7(&VAR_1->mutex);
            break;

        case 136:

            FUNC_0(VAR_1->config,
                    VAR_1->activity->assetManager);
            FUNC_4(VAR_1);
            break;

        case 135:

            VAR_1->destroyRequested = 1;
            break;
    }
}
