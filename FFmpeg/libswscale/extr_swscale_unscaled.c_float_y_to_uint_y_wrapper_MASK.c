
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ptrdiff_t ;
struct TYPE_3__ {int srcW; } ;
typedef TYPE_1__ SwsContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (float) ;

__attribute__((used)) static int FUNC_2(SwsContext *VAR_0, const uint8_t* VAR_1[],
                                     int VAR_2[], int VAR_3,
                                     int VAR_4, uint8_t* VAR_5[], int VAR_6[])
{
    int VAR_7, VAR_8;
    ptrdiff_t VAR_9 = VAR_2[0] >> 2;
    const float *VAR_10 = (const float *)VAR_1[0];
    uint8_t *VAR_11 = VAR_5[0] + VAR_6[0] * VAR_3;

    for (VAR_7 = 0; VAR_7 < VAR_4; ++VAR_7){
        for (VAR_8 = 0; VAR_8 < VAR_0->srcW; ++VAR_8){
            VAR_11[VAR_8] = FUNC_0(FUNC_1(255.0f * VAR_10[VAR_8]));
        }
        VAR_10 += VAR_9;
        VAR_11 += VAR_6[0];
    }

    return VAR_4;
}
