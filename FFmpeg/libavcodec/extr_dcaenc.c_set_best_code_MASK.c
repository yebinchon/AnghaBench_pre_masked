
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int* VAR_1 ;

__attribute__((used)) static uint32_t FUNC_1(uint32_t VAR_2[VAR_0][7],
                              uint32_t VAR_3[VAR_0],
                              int32_t VAR_4[VAR_0])
{
    uint8_t VAR_5, VAR_6;
    uint32_t VAR_7[VAR_0];
    int32_t VAR_8[VAR_0];
    uint32_t VAR_9, VAR_10 = 0;

    for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {

        FUNC_0(!((!!VAR_2[VAR_5][0]) ^ (!!VAR_3[VAR_5])));
        if (VAR_2[VAR_5][0] == 0) {

            VAR_4[VAR_5] = VAR_1[VAR_5];

            continue;
        }

        VAR_7[VAR_5] = VAR_2[VAR_5][0];
        VAR_8[VAR_5] = 0;
        for (VAR_6 = 0; VAR_6 < VAR_1[VAR_5]; VAR_6++) {
            if (VAR_7[VAR_5] > VAR_2[VAR_5][VAR_6] && VAR_2[VAR_5][VAR_6]) {
                VAR_7[VAR_5] = VAR_2[VAR_5][VAR_6];
                VAR_8[VAR_5] = VAR_6;
            }
        }


        VAR_9 = VAR_7[VAR_5] + 2;
        if (VAR_9 < VAR_3[VAR_5]) {
            VAR_4[VAR_5] = VAR_8[VAR_5];
            VAR_10 += VAR_9;
        } else {
            VAR_4[VAR_5] = VAR_1[VAR_5];
            VAR_10 += VAR_3[VAR_5];
        }
    }
    return VAR_10;
}
