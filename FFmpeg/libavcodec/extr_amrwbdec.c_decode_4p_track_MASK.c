
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int*,int,int,int) ;
 int FUNC_3 (int*,int,int,int) ;
 int FUNC_4 (int*,int,int,int) ;

__attribute__((used)) static void FUNC_5(int *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4, VAR_5;
    int VAR_6 = 1 << (VAR_2 - 1);

    switch (FUNC_1(VAR_1, 4*VAR_2 - 2, 2)) {
    case 0:
        VAR_4 = FUNC_0(VAR_1, 4*VAR_2 - 3) << (VAR_2 - 1);
        VAR_5 = FUNC_0(VAR_1, 2*VAR_2 - 3) << (VAR_2 - 2);

        FUNC_3(VAR_0, FUNC_1(VAR_1, 0, 2*VAR_2 - 3),
                        VAR_2 - 2, VAR_3 + VAR_4 + VAR_5);
        FUNC_3(VAR_0 + 2, FUNC_1(VAR_1, 2*VAR_2 - 2, 2*VAR_2 - 1),
                        VAR_2 - 1, VAR_3 + VAR_4);
        break;
    case 1:
        FUNC_2(VAR_0, FUNC_1(VAR_1, 3*VAR_2 - 2, VAR_2),
                        VAR_2 - 1, VAR_3);
        FUNC_4(VAR_0 + 1, FUNC_1(VAR_1, 0, 3*VAR_2 - 2),
                        VAR_2 - 1, VAR_3 + VAR_6);
        break;
    case 2:
        FUNC_3(VAR_0, FUNC_1(VAR_1, 2*VAR_2 - 1, 2*VAR_2 - 1),
                        VAR_2 - 1, VAR_3);
        FUNC_3(VAR_0 + 2, FUNC_1(VAR_1, 0, 2*VAR_2 - 1),
                        VAR_2 - 1, VAR_3 + VAR_6);
        break;
    case 3:
        FUNC_4(VAR_0, FUNC_1(VAR_1, VAR_2, 3*VAR_2 - 2),
                        VAR_2 - 1, VAR_3);
        FUNC_2(VAR_0 + 3, FUNC_1(VAR_1, 0, VAR_2),
                        VAR_2 - 1, VAR_3 + VAR_6);
        break;
    }
}
