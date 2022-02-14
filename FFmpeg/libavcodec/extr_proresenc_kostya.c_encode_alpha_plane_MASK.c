
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int alpha_bits; } ;
typedef int PutBitContext ;
typedef TYPE_1__ ProresContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,int,int const) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(ProresContext *VAR_0, PutBitContext *VAR_1,
                              int VAR_2, uint16_t *VAR_3,
                              int VAR_4)
{
    const int VAR_5 = VAR_0->alpha_bits;
    const int VAR_6 = (1 << VAR_5) - 1;
    const int VAR_7 = VAR_2 * 256;
    int VAR_8 = FUNC_3(VAR_1);
    int VAR_9 = VAR_6, VAR_10;
    int VAR_11 = 0;
    int VAR_12 = 0;

    VAR_10 = VAR_3[VAR_11++];
    FUNC_1(VAR_1, VAR_10, VAR_9, VAR_5);
    VAR_9 = VAR_10;
    do {
        VAR_10 = VAR_3[VAR_11++];
        if (VAR_10 != VAR_9) {
            FUNC_2 (VAR_1, VAR_12);
            FUNC_1(VAR_1, VAR_10, VAR_9, VAR_5);
            VAR_9 = VAR_10;
            VAR_12 = 0;
        } else {
            VAR_12++;
        }
    } while (VAR_11 < VAR_7);
    if (VAR_12)
        FUNC_2(VAR_1, VAR_12);
    FUNC_0(VAR_1);
    return (FUNC_3(VAR_1) - VAR_8) >> 3;
}
