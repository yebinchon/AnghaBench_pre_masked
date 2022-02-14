
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef unsigned int uint16_t ;
struct TYPE_5__ {int width; int height; } ;
struct TYPE_4__ {unsigned int* frame_buffer; TYPE_3__* avctx; } ;
typedef int GetByteContext ;
typedef TYPE_1__ FourXContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const,int) ;
 int FUNC_1 (TYPE_3__*,int ,char*) ;
 unsigned int FUNC_2 (int *) ;
 unsigned int FUNC_3 (int *) ;
 int FUNC_4 (int *,int const*,int) ;
 unsigned int FUNC_5 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_6(FourXContext *VAR_2, const uint8_t *VAR_3, int VAR_4)
{
    int VAR_5, VAR_6, VAR_7, VAR_8;
    const int VAR_9 = VAR_2->avctx->width;
    const int VAR_10 = VAR_2->avctx->height;
    const int VAR_11 = (FUNC_0(VAR_9, 16) >> 4) * (FUNC_0(VAR_10, 16) >> 4);
    uint16_t *VAR_12 = VAR_2->frame_buffer;
    const uint8_t *VAR_13 = VAR_3 + VAR_4;
    GetByteContext VAR_14;

    if (VAR_4 < VAR_11 * 8) {
        FUNC_1(VAR_2->avctx, VAR_1, "packet size too small\n");
        return VAR_0;
    }
    FUNC_4(&VAR_14, VAR_3, VAR_4);

    for (VAR_6 = 0; VAR_6 < VAR_10; VAR_6 += 16) {
        for (VAR_5 = 0; VAR_5 < VAR_9; VAR_5 += 16) {
            unsigned int VAR_15[4] = { 0 }, VAR_16;
            if (VAR_13 - VAR_3 < 8)
                return VAR_0;

            VAR_15[0] = FUNC_2(&VAR_14);
            VAR_15[1] = FUNC_2(&VAR_14);

            if (VAR_15[0] & 0x8000)
                FUNC_1(VAR_2->avctx, VAR_1, "unk bit 1\n");
            if (VAR_15[1] & 0x8000)
                FUNC_1(VAR_2->avctx, VAR_1, "unk bit 2\n");

            VAR_15[2] = FUNC_5(VAR_15[0], VAR_15[1]);
            VAR_15[3] = FUNC_5(VAR_15[1], VAR_15[0]);

            VAR_16 = FUNC_3(&VAR_14);
            for (VAR_8 = 0; VAR_8 < 16; VAR_8++) {
                for (VAR_7 = 0; VAR_7 < 16; VAR_7++) {
                    int VAR_17 = 2 * (VAR_7 >> 2) + 8 * (VAR_8 >> 2);
                    VAR_12[VAR_8 * VAR_9 + VAR_7] = VAR_15[(VAR_16 >> VAR_17) & 3];
                }
            }
            VAR_12 += 16;
        }
        VAR_12 += 16 * VAR_9 - VAR_5;
    }

    return 0;
}
