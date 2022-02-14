
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (double) ;
 double VAR_0 ;
 double FUNC_1 (double) ;
 int FUNC_2 (int*,int ,int) ;
 double FUNC_3 (double) ;

void FUNC_4(int32_t VAR_1[9], double VAR_2)
{
    double VAR_3 = -VAR_2 * VAR_0 / 180.0f;
    double VAR_4 = FUNC_1(VAR_3);
    double VAR_5 = FUNC_3(VAR_3);

    FUNC_2(VAR_1, 0, 9 * sizeof(int32_t));

    VAR_1[0] = FUNC_0(VAR_4);
    VAR_1[1] = FUNC_0(-VAR_5);
    VAR_1[3] = FUNC_0(VAR_5);
    VAR_1[4] = FUNC_0(VAR_4);
    VAR_1[8] = 1 << 30;
}
