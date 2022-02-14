
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int int16_t ;
struct TYPE_3__ {scalar_t__ dstFormat; } ;
typedef TYPE_1__ SwsContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int) ;

__attribute__((used)) static void FUNC_1(SwsContext *VAR_1, const int16_t *VAR_2, int VAR_3,
                         const int16_t **VAR_4, const int16_t **VAR_5,
                         uint8_t *VAR_6, int VAR_7)
{
    uint16_t *VAR_8 = (uint16_t*)VAR_6;
    int VAR_9 = 17;
    int VAR_10 = VAR_1->dstFormat == VAR_0;
    int VAR_11, VAR_12;

    for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++) {
        int VAR_13 = 1 << (VAR_9 - 1);
        int VAR_14 = 1 << (VAR_9 - 1);

        for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
            VAR_13 += VAR_4[VAR_12][VAR_11] * VAR_2[VAR_12];
            VAR_14 += VAR_5[VAR_12][VAR_11] * VAR_2[VAR_12];
        }

        FUNC_0(&VAR_8[2*VAR_11] , VAR_13);
        FUNC_0(&VAR_8[2*VAR_11+1], VAR_14);
    }
}
