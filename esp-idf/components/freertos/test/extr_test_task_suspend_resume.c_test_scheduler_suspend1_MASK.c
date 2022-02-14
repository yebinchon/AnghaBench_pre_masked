
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,...) ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *,char*,int,int *,int,int *,int) ;

__attribute__((used)) static void FUNC_4(int VAR_8)
{





    VAR_3 = 0;
    VAR_2 = 0;

    FUNC_1("Test for CPU%d\n", VAR_8);
    int VAR_9 = (VAR_8 == 0) ? 1 : 0;
    FUNC_3(&VAR_7, "waiting_task", 8192, ((void*)0), 5, ((void*)0), VAR_9);
    FUNC_3(&VAR_0, "control_task", 8192, ((void*)0), 5, ((void*)0), VAR_8);

    FUNC_2(VAR_6 * 2 / VAR_4);
    FUNC_0(4, VAR_6 + VAR_1 + 4, VAR_2);
    if (VAR_5 == 0 && VAR_8 == 1) {

        FUNC_0(2, VAR_6, VAR_3);
    } else {
        FUNC_0(4, VAR_6 + VAR_1 + 4, VAR_3);
    }

    FUNC_1("\n");
}
