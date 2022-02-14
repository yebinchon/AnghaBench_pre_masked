
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int error; int * out; int * out_end; int const* in_end; int const* in; int * out_start; } ;
typedef TYPE_1__ LZOContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 int FUNC_3 (TYPE_1__*,int,int) ;

int FUNC_4(void *VAR_3, int *VAR_4, const void *VAR_5, int *VAR_6)
{
    int VAR_7 = 0;
    int VAR_8;
    LZOContext VAR_9;
    if (*VAR_4 <= 0 || *VAR_6 <= 0) {
        int VAR_10 = 0;
        if (*VAR_4 <= 0)
            VAR_10 |= VAR_2;
        if (*VAR_6 <= 0)
            VAR_10 |= VAR_1;
        return VAR_10;
    }
    VAR_9.in = VAR_5;
    VAR_9.in_end = (const uint8_t *)VAR_5 + *VAR_6;
    VAR_9.out = VAR_9.out_start = VAR_3;
    VAR_9.out_end = (uint8_t *)VAR_3 + *VAR_4;
    VAR_9.error = 0;
    VAR_8 = FUNC_0(VAR_9);
    if (VAR_8 > 17) {
        FUNC_1(&VAR_9, VAR_8 - 17);
        VAR_8 = FUNC_0(VAR_9);
        if (VAR_8 < 16)
            VAR_9.error |= VAR_0;
    }
    if (VAR_9.in > VAR_9.in_end)
        VAR_9.error |= VAR_1;
    while (!VAR_9.error) {
        int VAR_11, VAR_12;
        if (VAR_8 > 15) {
            if (VAR_8 > 63) {
                VAR_11 = (VAR_8 >> 5) - 1;
                VAR_12 = (FUNC_0(VAR_9) << 3) + ((VAR_8 >> 2) & 7) + 1;
            } else if (VAR_8 > 31) {
                VAR_11 = FUNC_3(&VAR_9, VAR_8, 31);
                VAR_8 = FUNC_0(VAR_9);
                VAR_12 = (FUNC_0(VAR_9) << 6) + (VAR_8 >> 2) + 1;
            } else {
                VAR_11 = FUNC_3(&VAR_9, VAR_8, 7);
                VAR_12 = (1 << 14) + ((VAR_8 & 8) << 11);
                VAR_8 = FUNC_0(VAR_9);
                VAR_12 += (FUNC_0(VAR_9) << 6) + (VAR_8 >> 2);
                if (VAR_12 == (1 << 14)) {
                    if (VAR_11 != 1)
                        VAR_9.error |= VAR_0;
                    break;
                }
            }
        } else if (!VAR_7) {
            VAR_11 = FUNC_3(&VAR_9, VAR_8, 15);
            FUNC_1(&VAR_9, VAR_11 + 3);
            VAR_8 = FUNC_0(VAR_9);
            if (VAR_8 > 15)
                continue;
            VAR_11 = 1;
            VAR_12 = (1 << 11) + (FUNC_0(VAR_9) << 2) + (VAR_8 >> 2) + 1;
        } else {
            VAR_11 = 0;
            VAR_12 = (FUNC_0(VAR_9) << 2) + (VAR_8 >> 2) + 1;
        }
        FUNC_2(&VAR_9, VAR_12, VAR_11 + 2);
        VAR_7 =
        VAR_11 = VAR_8 & 3;
        FUNC_1(&VAR_9, VAR_11);
        VAR_8 = FUNC_0(VAR_9);
    }
    *VAR_6 = VAR_9.in_end - VAR_9.in;
    if (VAR_9.in > VAR_9.in_end)
        *VAR_6 = 0;
    *VAR_4 = VAR_9.out_end - VAR_9.out;
    return VAR_9.error;
}
