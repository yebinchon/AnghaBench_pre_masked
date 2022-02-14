
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_3__ {int chrDstVSubSample; } ;
typedef TYPE_1__ SwsContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int const) ;

__attribute__((used)) static int FUNC_3(SwsContext *VAR_0, const uint8_t *VAR_1[],
                              int VAR_2[], int VAR_3, int VAR_4,
                              uint8_t *VAR_5[], int VAR_6[])
{
    int VAR_7, VAR_8, VAR_9;

    for (VAR_9 = 0; VAR_9 < 4; VAR_9++) {
        int VAR_10 = VAR_2[VAR_9] / 2;
        int VAR_11 = VAR_6[VAR_9] / 2;
        uint16_t *VAR_12 = (uint16_t *) VAR_5[VAR_9];
        const uint16_t *VAR_13 = (const uint16_t *) VAR_1[VAR_9];
        int VAR_14 = FUNC_1(FUNC_0(VAR_10), FUNC_0(VAR_11));
        if(!VAR_12 || !VAR_13)
            continue;
        VAR_12 += (VAR_3 >> VAR_0->chrDstVSubSample) * VAR_11;
        for (VAR_7 = 0; VAR_7 < (VAR_4 >> VAR_0->chrDstVSubSample); VAR_7++) {
            for (VAR_8 = 0; VAR_8 < VAR_14; VAR_8++) {
                VAR_12[VAR_8] = FUNC_2(VAR_13[VAR_8]);
            }
            VAR_13 += VAR_10;
            VAR_12 += VAR_11;
        }
    }

    return VAR_4;
}
