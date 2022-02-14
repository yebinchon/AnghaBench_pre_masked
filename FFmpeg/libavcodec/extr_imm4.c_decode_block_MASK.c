
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_9__ {int bits; int table; } ;
struct TYPE_8__ {TYPE_2__* priv_data; } ;
struct TYPE_6__ {size_t* permutated; } ;
struct TYPE_7__ {int** block; int hi; TYPE_1__ intra_scantable; } ;
typedef TYPE_2__ IMM4Context ;
typedef int GetBitContext ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 TYPE_5__ VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_2, GetBitContext *VAR_3,
                        int VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
    IMM4Context *VAR_9 = VAR_2->priv_data;
    const uint8_t *VAR_10 = VAR_9->intra_scantable.permutated;
    int VAR_11, VAR_12, VAR_13, VAR_14;

    for (VAR_11 = !VAR_6; VAR_11 < 64; VAR_11++) {
        int VAR_15;

        VAR_15 = FUNC_3(VAR_3, VAR_1.table, VAR_1.bits, 1);
        if (VAR_15 < 0)
            return VAR_0;
        if (VAR_15 == 0) {
            VAR_12 = FUNC_1(VAR_3);
            VAR_13 = FUNC_0(VAR_3, 6);
            VAR_14 = FUNC_2(VAR_3, 8);
        } else {
            VAR_14 = VAR_15 & 0x7F;
            VAR_12 = (VAR_15 >> 14) & 1;
            VAR_13 = (VAR_15 >> 7) & 0x3F;
            if (FUNC_1(VAR_3))
                VAR_14 = -VAR_14;
        }
        VAR_11 += VAR_13;
        if (VAR_11 >= 64)
            break;
        VAR_9->block[VAR_4][VAR_10[VAR_11]] = VAR_7 * (VAR_14 < 0 ? -1 : 1) + VAR_5 * VAR_14;
        if (VAR_12)
            break;
    }

    if (VAR_9->hi == 2 && VAR_8 && VAR_4 < 4) {
        if (VAR_6)
            VAR_9->block[VAR_4][VAR_10[0]] *= 2;
        VAR_9->block[VAR_4][VAR_10[1]] *= 2;
        VAR_9->block[VAR_4][VAR_10[8]] *= 2;
        VAR_9->block[VAR_4][VAR_10[16]] *= 2;
    }

    return 0;
}
