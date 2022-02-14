
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
struct TYPE_3__ {int linesize; int mb_size; scalar_t__* data_cur; scalar_t__* data_ref; } ;
typedef TYPE_1__ AVMotionEstContext ;


 scalar_t__ FUNC_0 (scalar_t__) ;

uint64_t FUNC_1(AVMotionEstContext *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
    const int VAR_5 = VAR_0->linesize;
    uint8_t *VAR_6 = VAR_0->data_ref;
    uint8_t *VAR_7 = VAR_0->data_cur;
    uint64_t VAR_8 = 0;
    int VAR_9, VAR_10;

    VAR_6 += VAR_4 * VAR_5;
    VAR_7 += VAR_2 * VAR_5;

    for (VAR_10 = 0; VAR_10 < VAR_0->mb_size; VAR_10++)
        for (VAR_9 = 0; VAR_9 < VAR_0->mb_size; VAR_9++)
            VAR_8 += FUNC_0(VAR_6[VAR_3 + VAR_9 + VAR_10 * VAR_5] - VAR_7[VAR_1 + VAR_9 + VAR_10 * VAR_5]);

    return VAR_8;
}
