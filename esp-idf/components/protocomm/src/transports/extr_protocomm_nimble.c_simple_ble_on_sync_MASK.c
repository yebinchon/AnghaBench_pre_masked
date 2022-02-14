
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(void)
{
    int VAR_2;

    VAR_2 = FUNC_2(0);
    if (VAR_2 != 0) {
        FUNC_0(VAR_0, "Error loading address");
        return;
    }


    VAR_2 = FUNC_1(0, &VAR_1);
    if (VAR_2 != 0) {
        FUNC_0(VAR_0, "error determining address type; rc=%d\n", VAR_2);
        return;
    }


    FUNC_3();
}
