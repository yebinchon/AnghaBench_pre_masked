
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct android_app {int dummy; } ;
struct TYPE_4__ {scalar_t__ instance; } ;
typedef TYPE_1__ ANativeActivity ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,TYPE_1__*,int) ;
 int FUNC_1 (struct android_app*,int ) ;

__attribute__((used)) static void FUNC_2(ANativeActivity* VAR_2, int VAR_3) {
    FUNC_0("WindowFocusChanged: %p -- %d\n", VAR_2, VAR_3);
    FUNC_1((struct android_app*)VAR_2->instance,
            VAR_3 ? VAR_0 : VAR_1);
}
