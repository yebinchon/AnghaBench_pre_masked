
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_3__ {int len; int code; } ;
typedef int PutBitContext ;
typedef TYPE_1__ HuffEntry ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,size_t*,int) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(uint8_t *VAR_0, uint8_t *VAR_1, int VAR_2,
                            int VAR_3, int VAR_4, HuffEntry *VAR_5)
{
    PutBitContext VAR_6;
    int VAR_7, VAR_8;
    int VAR_9;

    FUNC_1(&VAR_6, VAR_1, VAR_2);


    for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
        for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
            FUNC_2(&VAR_6, VAR_5[VAR_0[VAR_7]].len, VAR_5[VAR_0[VAR_7]].code);

        VAR_0 += VAR_3;
    }


    VAR_9 = FUNC_3(&VAR_6) & 0x1F;

    if (VAR_9)
        FUNC_2(&VAR_6, 32 - VAR_9, 0);


    VAR_9 = FUNC_3(&VAR_6);


    FUNC_0(&VAR_6);

    return VAR_9;
}
