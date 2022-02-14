
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int mant_cnt ;


 int VAR_0 ;
 int FUNC_0 (int*,int ,int) ;

__attribute__((used)) static void FUNC_1(uint16_t VAR_1[VAR_0][16])
{
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
        FUNC_0(VAR_1[VAR_2], 0, sizeof(VAR_1[VAR_2]));
        VAR_1[VAR_2][1] = VAR_1[VAR_2][2] = 2;
        VAR_1[VAR_2][4] = 1;
    }
}
