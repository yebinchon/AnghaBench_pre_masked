
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int len; int code; } ;
typedef int PutBitContext ;
typedef TYPE_1__ HuffEntry ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int*,int) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(uint8_t *VAR_0, uint8_t *VAR_1, int VAR_2,
                        int VAR_3, int VAR_4, HuffEntry *VAR_5, int VAR_6)
{
    PutBitContext VAR_7;
    int VAR_8, VAR_9;
    int VAR_10;

    FUNC_1(&VAR_7, VAR_1, VAR_2);

    FUNC_2(&VAR_7, 8, 0);
    FUNC_2(&VAR_7, 8, VAR_6);

    for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
        for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
            const int VAR_11 = VAR_0[VAR_8];
            FUNC_2(&VAR_7, VAR_5[VAR_11].len, VAR_5[VAR_11].code);
        }

        VAR_0 += VAR_3;
    }

    VAR_10 = FUNC_3(&VAR_7) & 0x1F;

    if (VAR_10)
        FUNC_2(&VAR_7, 32 - VAR_10, 0);

    VAR_10 = FUNC_3(&VAR_7);

    FUNC_0(&VAR_7);

    return VAR_10 >> 3;
}
