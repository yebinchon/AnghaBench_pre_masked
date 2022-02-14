
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct android_app {int mutex; int cond; int msgwrite; int msgread; int destroyed; } ;


 int VAR_0 ;
 int FUNC_0 (struct android_app*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct android_app*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct android_app* VAR_1) {
    FUNC_6(&VAR_1->mutex);
    FUNC_0(VAR_1, VAR_0);
    while (!VAR_1->destroyed) {
        FUNC_4(&VAR_1->cond, &VAR_1->mutex);
    }
    FUNC_7(&VAR_1->mutex);

    FUNC_1(VAR_1->msgread);
    FUNC_1(VAR_1->msgwrite);
    FUNC_3(&VAR_1->cond);
    FUNC_5(&VAR_1->mutex);
    FUNC_2(VAR_1);
}
