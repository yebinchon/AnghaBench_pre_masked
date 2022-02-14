
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_3__ {int dstFormat; int* chrDither8; } ;
typedef TYPE_1__ SwsContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(SwsContext *VAR_2, const int16_t *VAR_3, int VAR_4,
                        const int16_t **VAR_5, const int16_t **VAR_6,
                        uint8_t *VAR_7, int VAR_8)
{
    enum AVPixelFormat VAR_9 = VAR_2->dstFormat;
    const uint8_t *VAR_10 = VAR_2->chrDither8;
    int VAR_11;

    if (VAR_9 == VAR_0 ||
        VAR_9 == VAR_1)
        for (VAR_11=0; VAR_11<VAR_8; VAR_11++) {
            int VAR_12 = VAR_10[VAR_11 & 7] << 12;
            int VAR_13 = VAR_10[(VAR_11 + 3) & 7] << 12;
            int VAR_14;
            for (VAR_14=0; VAR_14<VAR_4; VAR_14++) {
                VAR_12 += VAR_5[VAR_14][VAR_11] * VAR_3[VAR_14];
                VAR_13 += VAR_6[VAR_14][VAR_11] * VAR_3[VAR_14];
            }

            VAR_7[2*VAR_11]= FUNC_0(VAR_12>>19);
            VAR_7[2*VAR_11+1]= FUNC_0(VAR_13>>19);
        }
    else
        for (VAR_11=0; VAR_11<VAR_8; VAR_11++) {
            int VAR_15 = VAR_10[VAR_11 & 7] << 12;
            int VAR_16 = VAR_10[(VAR_11 + 3) & 7] << 12;
            int VAR_17;
            for (VAR_17=0; VAR_17<VAR_4; VAR_17++) {
                VAR_15 += VAR_5[VAR_17][VAR_11] * VAR_3[VAR_17];
                VAR_16 += VAR_6[VAR_17][VAR_11] * VAR_3[VAR_17];
            }

            VAR_7[2*VAR_11]= FUNC_0(VAR_16>>19);
            VAR_7[2*VAR_11+1]= FUNC_0(VAR_15>>19);
        }
}
