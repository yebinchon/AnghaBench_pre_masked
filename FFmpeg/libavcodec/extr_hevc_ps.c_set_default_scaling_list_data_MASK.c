
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int** sl_dc; int ** sl; } ;
typedef TYPE_1__ ScalingList ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static void FUNC_2(ScalingList *VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < 6; VAR_3++) {

        FUNC_1(VAR_2->sl[0][VAR_3], 16, 16);
        VAR_2->sl_dc[0][VAR_3] = 16;
        VAR_2->sl_dc[1][VAR_3] = 16;
    }
    FUNC_0(VAR_2->sl[1][0], VAR_1, 64);
    FUNC_0(VAR_2->sl[1][1], VAR_1, 64);
    FUNC_0(VAR_2->sl[1][2], VAR_1, 64);
    FUNC_0(VAR_2->sl[1][3], VAR_0, 64);
    FUNC_0(VAR_2->sl[1][4], VAR_0, 64);
    FUNC_0(VAR_2->sl[1][5], VAR_0, 64);
    FUNC_0(VAR_2->sl[2][0], VAR_1, 64);
    FUNC_0(VAR_2->sl[2][1], VAR_1, 64);
    FUNC_0(VAR_2->sl[2][2], VAR_1, 64);
    FUNC_0(VAR_2->sl[2][3], VAR_0, 64);
    FUNC_0(VAR_2->sl[2][4], VAR_0, 64);
    FUNC_0(VAR_2->sl[2][5], VAR_0, 64);
    FUNC_0(VAR_2->sl[3][0], VAR_1, 64);
    FUNC_0(VAR_2->sl[3][1], VAR_1, 64);
    FUNC_0(VAR_2->sl[3][2], VAR_1, 64);
    FUNC_0(VAR_2->sl[3][3], VAR_0, 64);
    FUNC_0(VAR_2->sl[3][4], VAR_0, 64);
    FUNC_0(VAR_2->sl[3][5], VAR_0, 64);
}
