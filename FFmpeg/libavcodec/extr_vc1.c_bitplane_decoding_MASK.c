
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int mb_width; int mb_height; int mb_stride; int gb; int avctx; } ;
struct TYPE_8__ {int field_mode; TYPE_1__ s; } ;
typedef TYPE_2__ VC1Context ;
struct TYPE_11__ {int table; } ;
struct TYPE_10__ {int table; } ;
struct TYPE_9__ {int table; } ;
typedef int GetBitContext ;


 int VAR_0 ;







 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int*,int,int,int,int *) ;
 int FUNC_2 (int*,int,int,int,int *) ;
 TYPE_5__ VAR_4 ;
 TYPE_4__ VAR_5 ;
 TYPE_3__ VAR_6 ;
 void* FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ,int) ;

__attribute__((used)) static int FUNC_5(uint8_t* VAR_7, int *VAR_8, VC1Context *VAR_9)
{
    GetBitContext *VAR_10 = &VAR_9->s.gb;

    int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
    uint8_t VAR_16, *VAR_17 = VAR_7;
    int VAR_18, VAR_19, VAR_20;

    VAR_18 = VAR_9->s.mb_width;
    VAR_19 = VAR_9->s.mb_height >> VAR_9->field_mode;
    VAR_20 = VAR_9->s.mb_stride;
    VAR_16 = FUNC_3(VAR_10);
    VAR_11 = FUNC_4(VAR_10, VAR_4.table, VAR_1, 1);

    *VAR_8 = 0;
    switch (VAR_11) {
    case 129:

        *VAR_8 = 1;
        return VAR_16;
    case 133:
    case 131:
        if ((VAR_19 * VAR_18) & 1) {
            *VAR_17++ = FUNC_3(VAR_10);
            VAR_13 = VAR_15 = 1;
            if (VAR_15 == VAR_18) {
                VAR_15 = 0;
                VAR_17 += VAR_20 - VAR_18;
            }
        }
        else
            VAR_13 = VAR_15 = 0;

        for (; VAR_13 < VAR_19 * VAR_18; VAR_13 += 2) {
            VAR_14 = FUNC_4(VAR_10, VAR_5.table, VAR_2, 1);
            *VAR_17++ = VAR_14 & 1;
            VAR_15++;
            if (VAR_15 == VAR_18) {
                VAR_15 = 0;
                VAR_17 += VAR_20 - VAR_18;
            }
            *VAR_17++ = VAR_14 >> 1;
            VAR_15++;
            if (VAR_15 == VAR_18) {
                VAR_15 = 0;
                VAR_17 += VAR_20 - VAR_18;
            }
        }
        break;
    case 132:
    case 130:
        if (!(VAR_19 % 3) && (VAR_18 % 3)) {
            for (VAR_13 = 0; VAR_13 < VAR_19; VAR_13 += 3) {
                for (VAR_12 = VAR_18 & 1; VAR_12 < VAR_18; VAR_12 += 2) {
                    VAR_14 = FUNC_4(VAR_10, VAR_6.table, VAR_3, 2);
                    if (VAR_14 < 0) {
                        FUNC_0(VAR_9->s.avctx, VAR_0, "invalid NORM-6 VLC\n");
                        return -1;
                    }
                    VAR_17[VAR_12 + 0] = (VAR_14 >> 0) & 1;
                    VAR_17[VAR_12 + 1] = (VAR_14 >> 1) & 1;
                    VAR_17[VAR_12 + 0 + VAR_20] = (VAR_14 >> 2) & 1;
                    VAR_17[VAR_12 + 1 + VAR_20] = (VAR_14 >> 3) & 1;
                    VAR_17[VAR_12 + 0 + VAR_20 * 2] = (VAR_14 >> 4) & 1;
                    VAR_17[VAR_12 + 1 + VAR_20 * 2] = (VAR_14 >> 5) & 1;
                }
                VAR_17 += VAR_20 * 3;
            }
            if (VAR_18 & 1)
                FUNC_1(VAR_7, 1, VAR_19, VAR_20, &VAR_9->s.gb);
        } else {
            VAR_17 += (VAR_19 & 1) * VAR_20;
            for (VAR_13 = VAR_19 & 1; VAR_13 < VAR_19; VAR_13 += 2) {
                for (VAR_12 = VAR_18 % 3; VAR_12 < VAR_18; VAR_12 += 3) {
                    VAR_14 = FUNC_4(VAR_10, VAR_6.table, VAR_3, 2);
                    if (VAR_14 < 0) {
                        FUNC_0(VAR_9->s.avctx, VAR_0, "invalid NORM-6 VLC\n");
                        return -1;
                    }
                    VAR_17[VAR_12 + 0] = (VAR_14 >> 0) & 1;
                    VAR_17[VAR_12 + 1] = (VAR_14 >> 1) & 1;
                    VAR_17[VAR_12 + 2] = (VAR_14 >> 2) & 1;
                    VAR_17[VAR_12 + 0 + VAR_20] = (VAR_14 >> 3) & 1;
                    VAR_17[VAR_12 + 1 + VAR_20] = (VAR_14 >> 4) & 1;
                    VAR_17[VAR_12 + 2 + VAR_20] = (VAR_14 >> 5) & 1;
                }
                VAR_17 += VAR_20 * 2;
            }
            VAR_12 = VAR_18 % 3;
            if (VAR_12)
                FUNC_1(VAR_7, VAR_12, VAR_19, VAR_20, &VAR_9->s.gb);
            if (VAR_19 & 1)
                FUNC_2(VAR_7 + VAR_12, VAR_18 - VAR_12, 1, VAR_20, &VAR_9->s.gb);
        }
        break;
    case 128:
        FUNC_2(VAR_7, VAR_18, VAR_19, VAR_20, &VAR_9->s.gb);
        break;
    case 134:
        FUNC_1(VAR_7, VAR_18, VAR_19, VAR_20, &VAR_9->s.gb);
        break;
    default:
        break;
    }


    if (VAR_11 == 133 || VAR_11 == 132) {
        VAR_17 = VAR_7;
        VAR_17[0] ^= VAR_16;
        for (VAR_12 = 1; VAR_12 < VAR_18; VAR_12++)
            VAR_17[VAR_12] ^= VAR_17[VAR_12-1];
        for (VAR_13 = 1; VAR_13 < VAR_19; VAR_13++) {
            VAR_17 += VAR_20;
            VAR_17[0] ^= VAR_17[-VAR_20];
            for (VAR_12 = 1; VAR_12 < VAR_18; VAR_12++) {
                if (VAR_17[VAR_12-1] != VAR_17[VAR_12-VAR_20]) VAR_17[VAR_12] ^= VAR_16;
                else VAR_17[VAR_12] ^= VAR_17[VAR_12-1];
            }
        }
    } else if (VAR_16) {
        VAR_17 = VAR_7;
        for (VAR_12 = 0; VAR_12 < VAR_20 * VAR_19; VAR_12++)
            VAR_17[VAR_12] = !VAR_17[VAR_12];
    }
    return (VAR_11 << 1) + VAR_16;
}
