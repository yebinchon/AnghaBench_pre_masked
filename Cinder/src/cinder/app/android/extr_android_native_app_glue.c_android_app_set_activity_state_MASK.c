
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct android_app {scalar_t__ activityState; int mutex; int cond; } ;
typedef scalar_t__ int8_t ;


 int FUNC_0 (struct android_app*,scalar_t__) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct android_app* VAR_0, int8_t VAR_1) {
    FUNC_2(&VAR_0->mutex);
    FUNC_0(VAR_0, VAR_1);
    while (VAR_0->activityState != VAR_1) {
        FUNC_1(&VAR_0->cond, &VAR_0->mutex);
    }
    FUNC_3(&VAR_0->mutex);
}
