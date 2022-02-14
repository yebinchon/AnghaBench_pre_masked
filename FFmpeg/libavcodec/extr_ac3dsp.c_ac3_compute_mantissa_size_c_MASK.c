
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static int FUNC_0(uint16_t VAR_2[6][16])
{
    int VAR_3, VAR_4;
    int VAR_5 = 0;

    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {

        VAR_5 += (VAR_2[VAR_3][1] / 3) * 5;


        VAR_5 += ((VAR_2[VAR_3][2] / 3) + (VAR_2[VAR_3][4] >> 1)) * 7;

        VAR_5 += VAR_2[VAR_3][3] * 3;

        for (VAR_4 = 5; VAR_4 < 16; VAR_4++)
            VAR_5 += VAR_2[VAR_3][VAR_4] * VAR_1[VAR_4];
    }
    return VAR_5;
}
