
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct android_app {int msgread; } ;
typedef int int8_t ;
typedef int cmd ;



 int FUNC_0 (char*) ;
 int FUNC_1 (struct android_app*) ;
 int FUNC_2 (int ,int*,int) ;

int8_t FUNC_3(struct android_app* VAR_0) {
    int8_t VAR_1;
    if (FUNC_2(VAR_0->msgread, &VAR_1, sizeof(VAR_1)) == sizeof(VAR_1)) {
        switch (VAR_1) {
            case 128:
                FUNC_1(VAR_0);
                break;
        }
        return VAR_1;
    } else {
        FUNC_0("No data on command pipe!");
    }
    return -1;
}
