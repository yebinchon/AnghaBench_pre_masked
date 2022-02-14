
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (int,int) ;
 int* VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static void FUNC_1(int16_t *VAR_2, int16_t *VAR_3, int VAR_4)
{
    int16_t VAR_5, VAR_6;
    int32_t VAR_7;
    int VAR_8, VAR_9;

    for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
        VAR_6 = (VAR_2[VAR_8] * 20861) >> 15;






        VAR_9 = FUNC_0(VAR_6 >> 8, 63);
        VAR_5 = VAR_6 & 0xFF;


        VAR_7 = VAR_0[VAR_9] * VAR_5;
        VAR_3[VAR_8] = VAR_1[VAR_9] + (VAR_7 >> 12);
    }
}
