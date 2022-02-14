
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int flags2; } ;
struct TYPE_7__ {int buf_end; int buf; } ;
struct TYPE_6__ {int flags; int ** bits; int ** len; TYPE_2__ pb; int ** stats; scalar_t__ context; TYPE_5__* avctx; int ** temp; } ;
typedef TYPE_1__ HYuvContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_5__*,int ,char*) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;

__attribute__((used)) static int FUNC_3(HYuvContext *VAR_8, int VAR_9, int VAR_10)
{
    int VAR_11;
    const uint8_t *VAR_12 = VAR_8->temp[0] + VAR_9;
    const uint8_t *VAR_13 = VAR_8->temp[1] + VAR_9 / 2;
    const uint8_t *VAR_14 = VAR_8->temp[2] + VAR_9 / 2;

    if (VAR_8->pb.buf_end - VAR_8->pb.buf - (FUNC_2(&VAR_8->pb) >> 3) < 2 * 4 * VAR_10) {
        FUNC_0(VAR_8->avctx, VAR_2, "encoded frame too large\n");
        return -1;
    }







    VAR_10 /= 2;

    if (VAR_8->flags & VAR_1) {
        for(VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
            int VAR_15 = VAR_12[2 * VAR_11]; int VAR_16 = VAR_12[2 * VAR_11 + 1]; int VAR_17 = VAR_13[VAR_11]; int VAR_18 = VAR_14[VAR_11];;
            VAR_8->stats[0][VAR_15]++;
            VAR_8->stats[1][VAR_17]++;
            VAR_8->stats[0][VAR_16]++;
            VAR_8->stats[2][VAR_18]++;
        }
    }
    if (VAR_8->avctx->flags2 & VAR_0)
        return 0;
    if (VAR_8->context) {
        for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
            int VAR_19 = VAR_12[2 * VAR_11]; int VAR_20 = VAR_12[2 * VAR_11 + 1]; int VAR_21 = VAR_13[VAR_11]; int VAR_22 = VAR_14[VAR_11];;
            VAR_8->stats[0][VAR_19]++;
            FUNC_1(&VAR_8->pb, VAR_8->len[0][VAR_19], VAR_8->bits[0][VAR_19]);
            VAR_8->stats[1][VAR_21]++;
            FUNC_1(&VAR_8->pb, VAR_8->len[1][VAR_21], VAR_8->bits[1][VAR_21]);
            VAR_8->stats[0][VAR_20]++;
            FUNC_1(&VAR_8->pb, VAR_8->len[0][VAR_20], VAR_8->bits[0][VAR_20]);
            VAR_8->stats[2][VAR_22]++;
            FUNC_1(&VAR_8->pb, VAR_8->len[2][VAR_22], VAR_8->bits[2][VAR_22]);
        }
    } else {
        for(VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
            int VAR_23 = VAR_12[2 * VAR_11]; int VAR_24 = VAR_12[2 * VAR_11 + 1]; int VAR_25 = VAR_13[VAR_11]; int VAR_26 = VAR_14[VAR_11];;
            FUNC_1(&VAR_8->pb, VAR_8->len[0][VAR_23], VAR_8->bits[0][VAR_23]);
            FUNC_1(&VAR_8->pb, VAR_8->len[1][VAR_25], VAR_8->bits[1][VAR_25]);
            FUNC_1(&VAR_8->pb, VAR_8->len[0][VAR_24], VAR_8->bits[0][VAR_24]);
            FUNC_1(&VAR_8->pb, VAR_8->len[2][VAR_26], VAR_8->bits[2][VAR_26]);
        }
    }
    return 0;
}
