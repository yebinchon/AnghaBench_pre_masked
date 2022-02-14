
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct android_poll_source {int dummy; } ;
struct android_app {int inputQueue; int (* onInputEvent ) (struct android_app*,int *) ;} ;
typedef int int32_t ;
typedef int AInputEvent ;


 int FUNC_0 (int ,int *,int ) ;
 scalar_t__ FUNC_1 (int ,int **) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (struct android_app*,int *) ;

__attribute__((used)) static void FUNC_4(struct android_app* VAR_0, struct android_poll_source* VAR_1) {
    AInputEvent* VAR_2 = ((void*)0);
    while (FUNC_1(VAR_0->inputQueue, &VAR_2) >= 0) {

        if (FUNC_2(VAR_0->inputQueue, VAR_2)) {
            continue;
        }
        int32_t VAR_3 = 0;
        if (VAR_0->onInputEvent != ((void*)0)) VAR_3 = VAR_0->onInputEvent(VAR_0, VAR_2);
        FUNC_0(VAR_0->inputQueue, VAR_2, VAR_3);
    }
}
