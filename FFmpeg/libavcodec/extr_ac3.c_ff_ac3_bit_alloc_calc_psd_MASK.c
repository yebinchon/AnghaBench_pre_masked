
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int8_t ;
typedef int int16_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;

void FUNC_2(int8_t *VAR_3, int VAR_4, int VAR_5, int16_t *VAR_6,
                               int16_t *VAR_7)
{
    int VAR_8, VAR_9;


    for (VAR_8 = VAR_4; VAR_8 < VAR_5; VAR_8++) {
        VAR_6[VAR_8]=(3072 - (VAR_3[VAR_8] << 7));
    }


    VAR_8 = VAR_4;
    VAR_9 = VAR_1[VAR_4];
    do {
        int VAR_10 = VAR_6[VAR_8++];
        int VAR_11 = FUNC_1(VAR_0[VAR_9+1], VAR_5);
        for (; VAR_8 < VAR_11; VAR_8++) {
            int VAR_12 = FUNC_0(VAR_10, VAR_6[VAR_8]);

            int VAR_13 = FUNC_1(VAR_12 - ((VAR_10 + VAR_6[VAR_8] + 1) >> 1), 255);
            VAR_10 = VAR_12 + VAR_2[VAR_13];
        }
        VAR_7[VAR_9++] = VAR_10;
    } while (VAR_5 > VAR_0[VAR_9]);
}
