
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int range; int value; } ;
typedef TYPE_1__ OpusRangeCoder ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*,int,int,int,int) ;

int FUNC_2(OpusRangeCoder *VAR_0, uint32_t VAR_1, int VAR_2)
{

    int VAR_3 = 0;
    uint32_t VAR_4, VAR_5 = 0, VAR_6;

    VAR_4 = VAR_0->range >> 15;
    VAR_6 = VAR_0->value / VAR_4 + 1;
    VAR_6 = (1 << 15) - FUNC_0(VAR_6, 1 << 15);

    if (VAR_6 >= VAR_1) {
        VAR_3++;
        VAR_5 = VAR_1;
        VAR_1 = 1 + ((32768 - 32 - VAR_1) * (16384-VAR_2) >> 15);

        while (VAR_1 > 1 && VAR_6 >= VAR_5 + 2 * VAR_1) {
            VAR_3++;
            VAR_1 *= 2;
            VAR_5 += VAR_1;
            VAR_1 = (((VAR_1 - 2) * VAR_2) >> 15) + 1;
        }

        if (VAR_1 <= 1) {
            int VAR_7 = (VAR_6 - VAR_5) >> 1;
            VAR_3 += VAR_7;
            VAR_5 += 2 * VAR_7;
        }

        if (VAR_6 < VAR_5 + VAR_1)
            VAR_3 *= -1;
        else
            VAR_5 += VAR_1;
    }

    FUNC_1(VAR_0, VAR_4, VAR_5, FUNC_0(VAR_5 + VAR_1, 32768), 32768);

    return VAR_3;
}
