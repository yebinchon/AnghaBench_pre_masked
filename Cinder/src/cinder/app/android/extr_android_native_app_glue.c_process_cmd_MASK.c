
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct android_poll_source {int dummy; } ;
struct android_app {int (* onAppCmd ) (struct android_app*,int ) ;} ;
typedef int int8_t ;


 int FUNC_0 (struct android_app*,int ) ;
 int FUNC_1 (struct android_app*,int ) ;
 int FUNC_2 (struct android_app*) ;
 int FUNC_3 (struct android_app*,int ) ;

__attribute__((used)) static void FUNC_4(struct android_app* VAR_0, struct android_poll_source* VAR_1) {
    int8_t VAR_2 = FUNC_2(VAR_0);
    FUNC_1(VAR_0, VAR_2);
    if (VAR_0->onAppCmd != ((void*)0)) VAR_0->onAppCmd(VAR_0, VAR_2);
    FUNC_0(VAR_0, VAR_2);
}
