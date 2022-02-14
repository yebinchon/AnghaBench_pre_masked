
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int ptrdiff_t ;
typedef int MpegEncContext ;


 scalar_t__* VAR_0 ;

__attribute__((used)) static int FUNC_0(MpegEncContext *VAR_1, uint8_t *VAR_2, uint8_t *VAR_3,
                   ptrdiff_t VAR_4, int VAR_5)
{
    int VAR_6 = 0, VAR_7;
    const uint32_t *VAR_8 = VAR_0 + 256;

    for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
        VAR_6 += VAR_8[VAR_2[0] - VAR_3[0]];
        VAR_6 += VAR_8[VAR_2[1] - VAR_3[1]];
        VAR_6 += VAR_8[VAR_2[2] - VAR_3[2]];
        VAR_6 += VAR_8[VAR_2[3] - VAR_3[3]];
        VAR_6 += VAR_8[VAR_2[4] - VAR_3[4]];
        VAR_6 += VAR_8[VAR_2[5] - VAR_3[5]];
        VAR_6 += VAR_8[VAR_2[6] - VAR_3[6]];
        VAR_6 += VAR_8[VAR_2[7] - VAR_3[7]];
        VAR_6 += VAR_8[VAR_2[8] - VAR_3[8]];
        VAR_6 += VAR_8[VAR_2[9] - VAR_3[9]];
        VAR_6 += VAR_8[VAR_2[10] - VAR_3[10]];
        VAR_6 += VAR_8[VAR_2[11] - VAR_3[11]];
        VAR_6 += VAR_8[VAR_2[12] - VAR_3[12]];
        VAR_6 += VAR_8[VAR_2[13] - VAR_3[13]];
        VAR_6 += VAR_8[VAR_2[14] - VAR_3[14]];
        VAR_6 += VAR_8[VAR_2[15] - VAR_3[15]];

        VAR_2 += VAR_4;
        VAR_3 += VAR_4;
    }
    return VAR_6;
}
