
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int ptrdiff_t ;
struct TYPE_3__ {int srcW; float* uint2float_lut; } ;
typedef TYPE_1__ SwsContext ;



__attribute__((used)) static int FUNC_0(SwsContext *VAR_0, const uint8_t *VAR_1[],
                                     int VAR_2[], int VAR_3,
                                     int VAR_4, uint8_t *VAR_5[], int VAR_6[])
{
    int VAR_7, VAR_8;
    ptrdiff_t VAR_9 = VAR_6[0] >> 2;
    const uint8_t *VAR_10 = VAR_1[0];
    float *VAR_11 = (float *)(VAR_5[0] + VAR_6[0] * VAR_3);

    for (VAR_7 = 0; VAR_7 < VAR_4; ++VAR_7){
        for (VAR_8 = 0; VAR_8 < VAR_0->srcW; ++VAR_8){
            VAR_11[VAR_8] = VAR_0->uint2float_lut[VAR_10[VAR_8]];
        }
        VAR_10 += VAR_2[0];
        VAR_11 += VAR_9;
    }

    return VAR_4;
}
