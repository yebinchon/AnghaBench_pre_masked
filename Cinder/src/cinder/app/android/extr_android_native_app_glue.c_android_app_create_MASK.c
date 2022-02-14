
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct android_app {size_t savedStateSize; int msgread; int msgwrite; int mutex; int cond; int running; int thread; scalar_t__ savedState; int * activity; } ;
typedef int pthread_attr_t ;
typedef int ANativeActivity ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (scalar_t__,void*,size_t) ;
 int FUNC_3 (struct android_app*,int ,int) ;
 scalar_t__ FUNC_4 (int*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *,int ,struct android_app*) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static struct android_app* FUNC_14(ANativeActivity* VAR_3,
        void* VAR_4, size_t VAR_5) {
    struct android_app* VAR_6 = (struct android_app*)FUNC_1(sizeof(struct android_app));
    FUNC_3(VAR_6, 0, sizeof(struct android_app));
    VAR_6->activity = VAR_3;

    FUNC_10(&VAR_6->mutex, ((void*)0));
    FUNC_7(&VAR_6->cond, ((void*)0));

    if (VAR_4 != ((void*)0)) {
        VAR_6->savedState = FUNC_1(VAR_5);
        VAR_6->savedStateSize = VAR_5;
        FUNC_2(VAR_6->savedState, VAR_4, VAR_5);
    }

    int VAR_7[2];
    if (FUNC_4(VAR_7)) {
        FUNC_0("could not create pipe: %s", FUNC_13(VAR_2));
        return ((void*)0);
    }
    VAR_6->msgread = VAR_7[0];
    VAR_6->msgwrite = VAR_7[1];

    pthread_attr_t VAR_8;
    FUNC_5(&VAR_8);
    FUNC_6(&VAR_8, VAR_0);
    FUNC_9(&VAR_6->thread, &VAR_8, VAR_1, VAR_6);


    FUNC_11(&VAR_6->mutex);
    while (!VAR_6->running) {
        FUNC_8(&VAR_6->cond, &VAR_6->mutex);
    }
    FUNC_12(&VAR_6->mutex);

    return VAR_6;
}
