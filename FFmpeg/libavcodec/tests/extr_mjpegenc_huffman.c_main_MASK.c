
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int code; int length; } ;
struct TYPE_10__ {int value; int prob; } ;
typedef TYPE_1__ PTable ;
typedef TYPE_2__ HuffTable ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int,int,TYPE_2__*,int) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*,int,int) ;
 int FUNC_3 (int ,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 TYPE_2__* VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;

int FUNC_4(int VAR_4, char **VAR_5)
{
    int VAR_6, VAR_7 = 0;

    PTable VAR_8[] = {
        {.value = 0, .prob = 1},
        {.value = 1, .prob = 2},
        {.value = 2, .prob = 5},
        {.value = 3, .prob = 10},
        {.value = 4, .prob = 21},
    };

    static const HuffTable VAR_9[] = {
        {.code = 0, .length = 3},
        {.code = 1, .length = 3},
        {.code = 2, .length = 3},
        {.code = 3, .length = 3},
        {.code = 4, .length = 1},
    };

    HuffTable VAR_10[5];



    FUNC_2(VAR_8, VAR_10,
                                     FUNC_0(VAR_10), 3);

    for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_10); VAR_6++) {
        if (VAR_10[VAR_6].code != VAR_9[VAR_6].code ||
            VAR_10[VAR_6].length != VAR_9[VAR_6].length) {
            FUNC_3(VAR_3,
                    "Built huffman does not equal expectations. "
                    "Expected: code %ld probability %ld, "
                    "Actual: code %ld probability %ld\n",
                    VAR_9[VAR_6].code, VAR_9[VAR_6].length,
                    VAR_10[VAR_6].code, VAR_10[VAR_6].length);
            VAR_7 = 1;
        }
    }


    if (FUNC_1(16, 18, VAR_2, FUNC_0(VAR_2)))
        VAR_7 = 1;

    if (FUNC_1(16, 41282, VAR_1, FUNC_0(VAR_1)))
        VAR_7 = 1;

    if (FUNC_1(16, 669904, VAR_0, FUNC_0(VAR_0)))
        VAR_7 = 1;

    return VAR_7;
}
