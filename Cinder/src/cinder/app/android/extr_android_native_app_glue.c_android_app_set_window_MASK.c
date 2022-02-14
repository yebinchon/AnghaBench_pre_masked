
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct android_app {int mutex; int cond; int * pendingWindow; int * window; } ;
typedef int ANativeWindow ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct android_app*,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct android_app* VAR_2, ANativeWindow* VAR_3) {
    FUNC_2(&VAR_2->mutex);
    if (VAR_2->pendingWindow != ((void*)0)) {
        FUNC_0(VAR_2, VAR_1);
    }
    VAR_2->pendingWindow = VAR_3;
    if (VAR_3 != ((void*)0)) {
        FUNC_0(VAR_2, VAR_0);
    }
    while (VAR_2->window != VAR_2->pendingWindow) {
        FUNC_1(&VAR_2->cond, &VAR_2->mutex);
    }
    FUNC_3(&VAR_2->mutex);
}
