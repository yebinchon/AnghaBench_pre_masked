
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ptrdiff_t ;
typedef int int64_t ;
typedef int int16_t ;
struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {int bc; } ;
typedef TYPE_1__ PixletContext ;
typedef int GetBitContext ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 unsigned int FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,unsigned int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 unsigned int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *,unsigned int) ;
 int FUNC_8 (int *,unsigned int) ;

__attribute__((used)) static int FUNC_9(AVCodecContext *VAR_1, int16_t *VAR_2, int VAR_3,
                           int VAR_4, ptrdiff_t VAR_5)
{
    PixletContext *VAR_6 = VAR_1->priv_data;
    GetBitContext *VAR_7 = &VAR_6->bc;
    unsigned VAR_8, VAR_9, VAR_10, VAR_11 = 0, VAR_12 = 0;
    int64_t VAR_13, VAR_14 = 3;
    int VAR_15, VAR_16, VAR_17 = 0;

    while (VAR_12 < VAR_3) {
        VAR_9 = FUNC_0(FUNC_3((VAR_14 >> 8) + 3) ^ 0x1F, 14);

        VAR_8 = FUNC_6(VAR_7, 0, 8);
        if (VAR_8 < 8) {
            VAR_13 = FUNC_7(VAR_7, VAR_9);
            if (VAR_13 <= 1) {
                FUNC_8(VAR_7, VAR_9 - 1);
                VAR_16 = ((1 << VAR_9) - 1) * VAR_8;
            } else {
                FUNC_8(VAR_7, VAR_9);
                VAR_16 = VAR_13 + ((1 << VAR_9) - 1) * VAR_8 - 1;
            }
        } else {
            VAR_16 = FUNC_4(VAR_7, 16);
        }

        VAR_13 = -((VAR_16 + VAR_17) & 1) | 1;
        VAR_2[VAR_11++] = VAR_13 * ((VAR_16 + VAR_17 + 1) >> 1);
        VAR_12++;
        if (VAR_11 == VAR_4) {
            VAR_11 = 0;
            VAR_2 += VAR_5;
        }
        VAR_14 = 120 * (VAR_16 + VAR_17) + VAR_14 - (120 * VAR_14 >> 8);
        VAR_17 = 0;

        if (VAR_14 * 4ULL > 0xFF || VAR_12 >= VAR_3)
            continue;

        VAR_9 = ((VAR_14 + 8) >> 5) + (VAR_14 ? FUNC_3(VAR_14) : 32) - 24;
        VAR_16 = FUNC_2(16383, VAR_9);
        VAR_8 = FUNC_6(VAR_7, 0, 8);
        if (VAR_8 > 7) {
            VAR_15 = FUNC_4(VAR_7, 16);
        } else {
            VAR_13 = FUNC_7(VAR_7, VAR_9);
            if (VAR_13 > 1) {
                FUNC_8(VAR_7, VAR_9);
                VAR_15 = VAR_13 + VAR_16 * VAR_8 - 1;
            } else {
                FUNC_8(VAR_7, VAR_9 - 1);
                VAR_15 = VAR_16 * VAR_8;
            }
        }

        if (VAR_15 > VAR_3 - VAR_12)
            return VAR_0;
        VAR_12 += VAR_15;

        for (VAR_10 = 0; VAR_10 < VAR_15; VAR_10++) {
            VAR_2[VAR_11++] = 0;
            if (VAR_11 == VAR_4) {
                VAR_11 = 0;
                VAR_2 += VAR_5;
            }
        }

        VAR_14 = 0;
        VAR_17 = VAR_15 < 0xFFFF ? 1 : 0;
    }

    FUNC_1(VAR_7);
    return FUNC_5(VAR_7) >> 3;
}
