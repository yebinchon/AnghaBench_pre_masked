
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Job ;


 int FUNC_0 (int ,int ) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int,char*) ;
 int VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,int ,int,int ,int ) ;
 int FUNC_6 (char*) ;

void
FUNC_7()
{
    Job *VAR_1, *VAR_2;

    FUNC_0(VAR_0, FUNC_6("default"));
    VAR_1 = FUNC_5(0, 0, 1, 0, VAR_0);
    FUNC_2(FUNC_3() == 1, "should match");

    VAR_2 = FUNC_1(10);
    FUNC_2(FUNC_3() == 1, "should match");

    FUNC_4(VAR_2);
    FUNC_2(FUNC_3() == 1, "should match");

    FUNC_4(VAR_1);
    FUNC_2(FUNC_3() == 0, "should match");
}
