
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct android_app {int msgwrite; } ;
typedef int int8_t ;
typedef int cmd ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int) ;

__attribute__((used)) static void FUNC_3(struct android_app* VAR_1, int8_t VAR_2) {
    if (FUNC_2(VAR_1->msgwrite, &VAR_2, sizeof(VAR_2)) != sizeof(VAR_2)) {
        FUNC_0("Failure writing android_app cmd: %s\n", FUNC_1(VAR_0));
    }
}
