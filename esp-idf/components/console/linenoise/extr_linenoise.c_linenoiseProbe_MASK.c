
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,...) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,int,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int) ;

int FUNC_4(void) {

    int VAR_6 = FUNC_0(VAR_3, VAR_0);
    VAR_6 |= VAR_2;
    int VAR_7 = FUNC_0(VAR_3, VAR_1, VAR_6);
    if (VAR_7 != 0) {
        return -1;
    }

    FUNC_1(VAR_5, "\x1b[5n");


    int VAR_8 = 200;
    size_t VAR_9 = 0;
    while (VAR_8 > 0 && VAR_9 < 4) {
        FUNC_3(10000);
        char VAR_10;
        int VAR_11 = FUNC_2(&VAR_10, 1, 1, VAR_4);
        VAR_9 += VAR_11;
        VAR_8--;
    }

    VAR_6 &= ~VAR_2;
    VAR_7 = FUNC_0(VAR_3, VAR_1, VAR_6);
    if (VAR_7 != 0) {
        return -1;
    }
    if (VAR_9 < 4) {
        return -2;
    }
    return 0;
}
