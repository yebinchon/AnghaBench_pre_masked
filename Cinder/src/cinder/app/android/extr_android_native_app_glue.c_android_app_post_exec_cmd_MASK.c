
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct android_app {int stateSaved; int mutex; int cond; int * window; } ;
typedef int int8_t ;





 int FUNC_0 (struct android_app*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct android_app* VAR_0, int8_t VAR_1) {
    switch (VAR_1) {
        case 128:

            FUNC_2(&VAR_0->mutex);
            VAR_0->window = ((void*)0);
            FUNC_1(&VAR_0->cond);
            FUNC_3(&VAR_0->mutex);
            break;

        case 129:

            FUNC_2(&VAR_0->mutex);
            VAR_0->stateSaved = 1;
            FUNC_1(&VAR_0->cond);
            FUNC_3(&VAR_0->mutex);
            break;

        case 130:
            FUNC_0(VAR_0);
            break;
    }
}
