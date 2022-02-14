
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 int FUNC_0 (int,int,int) ;
 int* VAR_0 ;

__attribute__((used)) static void FUNC_1(uint8_t *VAR_1, uint8_t VAR_2)
{
    int VAR_3 = VAR_2;
    int VAR_4;
    uint16_t VAR_5;

    VAR_3 = FUNC_0(VAR_2, 1, 99);

    if (VAR_2 < 50)
        VAR_5 = 5000 / VAR_3;
    else
        VAR_5 = 200 - VAR_3 * 2;

    for (VAR_4 = 0; VAR_4 < 128; VAR_4++) {
        int VAR_6 = (VAR_0[VAR_4] * VAR_5 + 50) / 100;


        VAR_6 = FUNC_0(VAR_6, 1, 255);
        VAR_1[VAR_4] = VAR_6;
    }
}
