
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ptrdiff_t ;
struct TYPE_7__ {int* rgb_pic; int rgb_stride; int * pal; TYPE_1__* avctx; } ;
struct TYPE_6__ {int err_recognition; } ;
typedef int PixContext ;
typedef TYPE_2__ MSS12Context ;
typedef int ArithCoder ;


 int VAR_0 ;
 int FUNC_0 (int*,int ) ;
 int FUNC_1 (TYPE_2__ const*,int,int,int,int) ;
 int FUNC_2 (int *,int *,int *,int ,int ) ;
 int FUNC_3 (int *,int *,int*,int,int,int,int) ;
 scalar_t__ FUNC_4 (TYPE_2__ const*,int,int,int,int) ;

__attribute__((used)) static int FUNC_5(MSS12Context const *VAR_1, ArithCoder *VAR_2,
                                uint8_t *VAR_3, ptrdiff_t VAR_4, uint8_t *VAR_5,
                                ptrdiff_t VAR_6, int VAR_7, int VAR_8,
                                int VAR_9, int VAR_10,
                                PixContext *VAR_11)
{
    int VAR_12, VAR_13, VAR_14;
    uint8_t *VAR_15 = VAR_1->rgb_pic + VAR_7 * 3 + VAR_8 * VAR_1->rgb_stride;

    VAR_3 += VAR_7 + VAR_8 * VAR_4;
    VAR_5 += VAR_7 + VAR_8 * VAR_6;

    for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++) {
        for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++) {
            if (VAR_1->avctx->err_recognition & VAR_0 &&
                ( VAR_1->rgb_pic && VAR_5[VAR_12] != 0x01 && VAR_5[VAR_12] != 0x02 && VAR_5[VAR_12] != 0x04 ||
                 !VAR_1->rgb_pic && VAR_5[VAR_12] != 0x80 && VAR_5[VAR_12] != 0xFF))
                return -1;

            if (VAR_5[VAR_12] == 0x02) {
                FUNC_1(VAR_1, VAR_7 + VAR_12, VAR_8 + VAR_13, 1, 1);
            } else if (VAR_5[VAR_12] == 0x04) {
                if (FUNC_4(VAR_1, VAR_7 + VAR_12, VAR_8 + VAR_13, 1, 1))
                    return -1;
            } else if (VAR_5[VAR_12] != 0x80) {
                if (!VAR_12 && !VAR_13)
                    VAR_14 = FUNC_2(VAR_2, VAR_11, ((void*)0), 0, 0);
                else
                    VAR_14 = FUNC_3(VAR_2, VAR_11, VAR_3 + VAR_12, VAR_4,
                                                VAR_12, VAR_13, VAR_9 - VAR_12 - 1);
                if (VAR_14 < 0)
                    return VAR_14;
                VAR_3[VAR_12] = VAR_14;
                if (VAR_1->rgb_pic)
                    FUNC_0(VAR_15 + VAR_12 * 3, VAR_1->pal[VAR_14]);
            }
        }
        VAR_3 += VAR_4;
        VAR_5 += VAR_6;
        VAR_15 += VAR_1->rgb_stride;
    }

    return 0;
}
