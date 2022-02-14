
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int ptrdiff_t ;
typedef int MpegEncContext ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_2(MpegEncContext *VAR_0, uint8_t *VAR_1, uint8_t *VAR_2,
                           ptrdiff_t VAR_3, int VAR_4)
{
    int VAR_5 = 0, VAR_6;
    uint8_t *VAR_7 = VAR_2 + VAR_3;

    for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
        VAR_5 += FUNC_0(VAR_1[0] - FUNC_1(VAR_2[0], VAR_2[1], VAR_7[0], VAR_7[1]));
        VAR_5 += FUNC_0(VAR_1[1] - FUNC_1(VAR_2[1], VAR_2[2], VAR_7[1], VAR_7[2]));
        VAR_5 += FUNC_0(VAR_1[2] - FUNC_1(VAR_2[2], VAR_2[3], VAR_7[2], VAR_7[3]));
        VAR_5 += FUNC_0(VAR_1[3] - FUNC_1(VAR_2[3], VAR_2[4], VAR_7[3], VAR_7[4]));
        VAR_5 += FUNC_0(VAR_1[4] - FUNC_1(VAR_2[4], VAR_2[5], VAR_7[4], VAR_7[5]));
        VAR_5 += FUNC_0(VAR_1[5] - FUNC_1(VAR_2[5], VAR_2[6], VAR_7[5], VAR_7[6]));
        VAR_5 += FUNC_0(VAR_1[6] - FUNC_1(VAR_2[6], VAR_2[7], VAR_7[6], VAR_7[7]));
        VAR_5 += FUNC_0(VAR_1[7] - FUNC_1(VAR_2[7], VAR_2[8], VAR_7[7], VAR_7[8]));
        VAR_5 += FUNC_0(VAR_1[8] - FUNC_1(VAR_2[8], VAR_2[9], VAR_7[8], VAR_7[9]));
        VAR_5 += FUNC_0(VAR_1[9] - FUNC_1(VAR_2[9], VAR_2[10], VAR_7[9], VAR_7[10]));
        VAR_5 += FUNC_0(VAR_1[10] - FUNC_1(VAR_2[10], VAR_2[11], VAR_7[10], VAR_7[11]));
        VAR_5 += FUNC_0(VAR_1[11] - FUNC_1(VAR_2[11], VAR_2[12], VAR_7[11], VAR_7[12]));
        VAR_5 += FUNC_0(VAR_1[12] - FUNC_1(VAR_2[12], VAR_2[13], VAR_7[12], VAR_7[13]));
        VAR_5 += FUNC_0(VAR_1[13] - FUNC_1(VAR_2[13], VAR_2[14], VAR_7[13], VAR_7[14]));
        VAR_5 += FUNC_0(VAR_1[14] - FUNC_1(VAR_2[14], VAR_2[15], VAR_7[14], VAR_7[15]));
        VAR_5 += FUNC_0(VAR_1[15] - FUNC_1(VAR_2[15], VAR_2[16], VAR_7[15], VAR_7[16]));
        VAR_1 += VAR_3;
        VAR_2 += VAR_3;
        VAR_7 += VAR_3;
    }
    return VAR_5;
}
