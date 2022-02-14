
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {int table; } ;
typedef TYPE_1__ VLC ;
typedef int GetBitContext ;


 scalar_t__ FUNC_0 (int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int* VAR_3 ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ,int,int) ;
 int FUNC_4 (int*,int ,int) ;

__attribute__((used)) static int FUNC_5(GetBitContext *VAR_4, VLC *VAR_5, VLC *VAR_6,
                           int *VAR_7, int *VAR_8,
                           int VAR_9, int VAR_10, uint16_t *VAR_11)
{
    int VAR_12, VAR_13, VAR_14 = 1, VAR_15, VAR_16;

    FUNC_4(VAR_7, 0, sizeof(*VAR_7) * 64);

    VAR_16 = FUNC_1(VAR_4, VAR_5);

    if (VAR_10) {
        if (VAR_9) {
            int VAR_17, VAR_18, VAR_19;

            VAR_17 = VAR_8[VAR_0];
            VAR_18 = VAR_8[VAR_2];
            VAR_19 = VAR_8[VAR_1];

            if (FUNC_0(VAR_19 - VAR_18) <= FUNC_0(VAR_17 - VAR_18))
                VAR_16 += VAR_17;
            else
                VAR_16 += VAR_19;
        } else {
            VAR_16 += VAR_8[VAR_1];
        }
    } else if (VAR_9) {
        VAR_16 += VAR_8[VAR_0];
    }
    VAR_8[VAR_0] = VAR_16;
    VAR_7[0] = VAR_16 * VAR_11[0];

    while (VAR_14 < 64) {
        VAR_13 = FUNC_3(VAR_4, VAR_6->table, 9, 2);
        if (!VAR_13)
            return 0;
        if (VAR_13 == -1)
            return -1;
        if (VAR_13 == 0xF0) {
            VAR_14 += 16;
            continue;
        }
        VAR_12 = VAR_13 >> 4;
        VAR_13 = FUNC_2(VAR_4, VAR_13 & 0xF);
        VAR_14 += VAR_12;
        if (VAR_14 >= 64)
            return -1;

        VAR_15 = VAR_3[VAR_14];
        VAR_7[VAR_15] = VAR_13 * VAR_11[VAR_15];
        VAR_14++;
    }

    return VAR_14 == 64 ? 0 : -1;
}
