
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int,int ,int ) ;
 int FUNC_7 (char*) ;
 int VAR_1 ;

void
FUNC_8()
{
    int VAR_2;

    FUNC_0(VAR_0, FUNC_7("default"));
    for (VAR_2 = 0; VAR_2 < 100000; VAR_2++) {
        FUNC_6(0, 0, 1, 0, VAR_0);
    }
    FUNC_1(FUNC_3() == 100000, "should match");

    for (VAR_2 = 1; VAR_2 <= 100000; VAR_2++) {
        FUNC_5(FUNC_4(VAR_2));
    }
    FUNC_2(VAR_1, "get_all_jobs_used() => %d\n", FUNC_3());
    FUNC_1(FUNC_3() == 0, "should match");
}
