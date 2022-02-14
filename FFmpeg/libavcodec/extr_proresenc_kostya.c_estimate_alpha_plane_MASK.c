
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
typedef int ptrdiff_t ;
typedef int int16_t ;
struct TYPE_3__ {int alpha_bits; } ;
typedef TYPE_1__ ProresContext ;


 int FUNC_0 (int,int,int const) ;

__attribute__((used)) static int FUNC_1(ProresContext *VAR_0,
                                const uint16_t *VAR_1, ptrdiff_t VAR_2,
                                int VAR_3, int16_t *VAR_4)
{
    const int VAR_5 = VAR_0->alpha_bits;
    const int VAR_6 = (1 << VAR_5) - 1;
    const int VAR_7 = VAR_3 * 256;
    int VAR_8 = VAR_6, VAR_9;
    int VAR_10 = 0;
    int VAR_11 = 0;
    int VAR_12;

    VAR_9 = VAR_4[VAR_10++];
    VAR_12 = FUNC_0(VAR_9, VAR_8, VAR_5);
    VAR_8 = VAR_9;
    do {
        VAR_9 = VAR_4[VAR_10++];
        if (VAR_9 != VAR_8) {
            if (!VAR_11)
                VAR_12++;
            else if (VAR_11 < 0x10)
                VAR_12 += 4;
            else
                VAR_12 += 15;
            VAR_12 += FUNC_0(VAR_9, VAR_8, VAR_5);
            VAR_8 = VAR_9;
            VAR_11 = 0;
        } else {
            VAR_11++;
        }
    } while (VAR_10 < VAR_7);

    if (VAR_11) {
        if (VAR_11 < 0x10)
            VAR_12 += 4;
        else
            VAR_12 += 15;
    }

    return VAR_12;
}
