
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int VAR_12 ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int ,int ) ;

int FUNC_9(int VAR_13)
{
    if (VAR_4 != FUNC_5()) {
        return VAR_0;
    }

    FUNC_1();

    if (!VAR_12) {
        FUNC_4(VAR_6, "wps start: wps not enabled");
        FUNC_0();
        return VAR_2;
    }

    if (FUNC_7() == VAR_11 || (FUNC_6() != VAR_9 && FUNC_6() != VAR_10)) {
        FUNC_0();
        return VAR_3;
    }

    if (FUNC_2() == 0) {
        FUNC_0();
        return VAR_1;
    }

    FUNC_4(VAR_5, "wps scan");




    FUNC_3(VAR_7, 0);


    FUNC_0();
    return VAR_4;
}
