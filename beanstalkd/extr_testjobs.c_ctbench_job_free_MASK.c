
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Job ;


 int FUNC_0 (int ,int ) ;
 int ** FUNC_1 (int,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_0 ;
 int FUNC_4 (int **) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ,int ,int,int ,int ) ;
 int FUNC_7 (char*) ;

void
FUNC_8(int VAR_1)
{
    int VAR_2;
    Job **VAR_3 = FUNC_1(VAR_1, sizeof *VAR_3);
    FUNC_0(VAR_0, FUNC_7("default"));
    for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
        VAR_3[VAR_2] = FUNC_6(0, 0, 1, 0, VAR_0);
    }

    FUNC_2();
    for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
        FUNC_5(VAR_3[VAR_2]);
    }
    FUNC_3();

    FUNC_4(VAR_3);
}
