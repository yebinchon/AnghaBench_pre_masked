
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t** VAR_4 ;
 size_t** VAR_5 ;
 size_t*** VAR_6 ;
 size_t** VAR_7 ;
 int FUNC_0 (size_t*,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(int16_t* VAR_8, int16_t* VAR_9[VAR_3 + 1],
                       int16_t VAR_10,
                       int16_t VAR_11, int16_t VAR_12, int16_t VAR_13)
{
    int VAR_14,VAR_15;
    static const uint8_t VAR_16[2]={10, 5};
    int16_t* VAR_17 = VAR_9[VAR_3];

    for (VAR_14 = 0; VAR_14 < 5; VAR_14++) {
        VAR_17[VAR_14] = VAR_4[VAR_11][VAR_14 ] + VAR_5[VAR_12 ][VAR_14 ];
        VAR_17[VAR_14 + 5] = VAR_4[VAR_11][VAR_14 + 5] + VAR_5[VAR_13][VAR_14 + 5];
    }

    for (VAR_15 = 0; VAR_15 < 2; VAR_15++) {
        for (VAR_14 = 1; VAR_14 < 10; VAR_14++) {
            int VAR_18 = (VAR_17[VAR_14 - 1] - VAR_17[VAR_14] + VAR_16[VAR_15]) >> 1;
            if (VAR_18 > 0) {
                VAR_17[VAR_14 - 1] -= VAR_18;
                VAR_17[VAR_14 ] += VAR_18;
            }
        }
    }

    for (VAR_14 = 0; VAR_14 < 10; VAR_14++) {
        int VAR_19 = VAR_17[VAR_14] * VAR_7[VAR_10][VAR_14];
        for (VAR_15 = 0; VAR_15 < VAR_3; VAR_15++)
            VAR_19 += VAR_9[VAR_15][VAR_14] * VAR_6[VAR_10][VAR_15][VAR_14];

        VAR_8[VAR_14] = VAR_19 >> 15;
    }

    FUNC_0(VAR_8, VAR_0, VAR_2, VAR_1, 10);
}
