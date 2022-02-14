
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct android_app {int mutex; int cond; int * pendingInputQueue; int * inputQueue; } ;
typedef int AInputQueue ;


 int VAR_0 ;
 int FUNC_0 (struct android_app*,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct android_app* VAR_1, AInputQueue* VAR_2) {
    FUNC_2(&VAR_1->mutex);
    VAR_1->pendingInputQueue = VAR_2;
    FUNC_0(VAR_1, VAR_0);
    while (VAR_1->inputQueue != VAR_1->pendingInputQueue) {
        FUNC_1(&VAR_1->cond, &VAR_1->mutex);
    }
    FUNC_3(&VAR_1->mutex);
}
