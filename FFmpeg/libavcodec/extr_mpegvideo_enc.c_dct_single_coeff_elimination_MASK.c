
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int16_t ;
struct TYPE_4__ {int* permutated; } ;
struct TYPE_5__ {int* block_last_index; TYPE_1__ intra_scantable; scalar_t__** block; } ;
typedef TYPE_2__ MpegEncContext ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(MpegEncContext *VAR_0,
                                                int VAR_1, int VAR_2)
{
    static const char VAR_3[64] = {
        3, 2, 2, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0
    };
    int VAR_4 = 0;
    int VAR_5 = 0;
    int VAR_6;
    int16_t *VAR_7 = VAR_0->block[VAR_1];
    const int VAR_8 = VAR_0->block_last_index[VAR_1];
    int VAR_9;

    if (VAR_2 < 0) {
        VAR_9 = 0;
        VAR_2 = -VAR_2;
    } else
        VAR_9 = 1;


    if (VAR_8 <= VAR_9 - 1)
        return;

    for (VAR_6 = 0; VAR_6 <= VAR_8; VAR_6++) {
        const int VAR_10 = VAR_0->intra_scantable.permutated[VAR_6];
        const int VAR_11 = FUNC_0(VAR_7[VAR_10]);
        if (VAR_11 == 1) {
            if (VAR_9 && VAR_6 == 0)
                continue;
            VAR_4 += VAR_3[VAR_5];
            VAR_5 = 0;
        } else if (VAR_11 > 1) {
            return;
        } else {
            VAR_5++;
        }
    }
    if (VAR_4 >= VAR_2)
        return;
    for (VAR_6 = VAR_9; VAR_6 <= VAR_8; VAR_6++) {
        const int VAR_12 = VAR_0->intra_scantable.permutated[VAR_6];
        VAR_7[VAR_12] = 0;
    }
    if (VAR_7[0])
        VAR_0->block_last_index[VAR_1] = 0;
    else
        VAR_0->block_last_index[VAR_1] = -1;
}
