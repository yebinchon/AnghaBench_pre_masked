
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {scalar_t__ srcW; } ;
typedef TYPE_1__ SwsContext ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int const*,int) ;

__attribute__((used)) static int FUNC_3(SwsContext *VAR_0, const uint8_t *VAR_1[],
                             int VAR_2[], int VAR_3, int VAR_4,
                             uint8_t *VAR_5[], int VAR_6[])
{
    if (VAR_6[0] == VAR_2[0] && VAR_2[0] > 0)
        FUNC_2(VAR_5[0] + VAR_6[0] * VAR_3, VAR_1[0], VAR_4 * VAR_6[0]);
    else {
        int VAR_7;
        const uint8_t *VAR_8 = VAR_1[0];
        uint8_t *VAR_9 = VAR_5[0] + VAR_6[0] * VAR_3;
        int VAR_10 = 0;


        while (VAR_10 + VAR_0->srcW <= FUNC_0(VAR_6[0]) &&
               VAR_10 + VAR_0->srcW <= FUNC_0(VAR_2[0]))
            VAR_10 += VAR_0->srcW;
        FUNC_1(VAR_10 != 0);

        for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
            FUNC_2(VAR_9, VAR_8, VAR_10);
            VAR_8 += VAR_2[0];
            VAR_9 += VAR_6[0];
        }
    }
    return VAR_4;
}
