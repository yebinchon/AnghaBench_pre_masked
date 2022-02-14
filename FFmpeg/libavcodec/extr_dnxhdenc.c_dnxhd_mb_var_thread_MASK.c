
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
typedef scalar_t__ uint16_t ;
struct TYPE_11__ {int height; int width; TYPE_4__* priv_data; } ;
struct TYPE_7__ {int (* pix_sum ) (int*,int) ;int (* pix_norm1 ) (int*,int) ;} ;
struct TYPE_8__ {int mb_height; int linesize; int mb_width; TYPE_1__ mpvencdsp; } ;
struct TYPE_10__ {int interlaced; int bit_depth; int** src; TYPE_3__* mb_cmp; TYPE_2__ m; struct TYPE_10__** thread; } ;
struct TYPE_9__ {int value; unsigned int mb; } ;
typedef TYPE_4__ DNXHDEncContext ;
typedef TYPE_5__ AVCodecContext ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int*,int) ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_0, void *VAR_1,
                               int VAR_2, int VAR_3)
{
    DNXHDEncContext *VAR_4 = VAR_0->priv_data;
    int VAR_5 = VAR_2, VAR_6, VAR_7, VAR_8;
    int VAR_9 = (VAR_5 == VAR_4->m.mb_height - 1) &&
                           ((VAR_0->height >> VAR_4->interlaced) & 0xF);

    VAR_4 = VAR_4->thread[VAR_3];
    if (VAR_4->bit_depth == 8) {
        uint8_t *VAR_10 = VAR_4->thread[0]->src[0] + ((VAR_5 << 4) * VAR_4->m.linesize);
        for (VAR_6 = 0; VAR_6 < VAR_4->m.mb_width; ++VAR_6, VAR_10 += 16) {
            unsigned VAR_11 = VAR_5 * VAR_4->m.mb_width + VAR_6;
            int VAR_12;
            int VAR_13;

            if (!VAR_9 && VAR_6 * 16 <= VAR_0->width - 16 && (VAR_0->width % 16) == 0) {
                VAR_12 = VAR_4->m.mpvencdsp.pix_sum(VAR_10, VAR_4->m.linesize);
                VAR_13 = VAR_4->m.mpvencdsp.pix_norm1(VAR_10, VAR_4->m.linesize);
            } else {
                int VAR_14 = FUNC_0(VAR_0->width - 16 * VAR_6, 16);
                int VAR_15 = FUNC_0((VAR_0->height >> VAR_4->interlaced) - 16 * VAR_5, 16);
                VAR_12 = VAR_13 = 0;
                for (VAR_8 = 0; VAR_8 < VAR_15; VAR_8++) {
                    for (VAR_7 = 0; VAR_7 < VAR_14; VAR_7++) {
                        uint8_t VAR_16 = VAR_10[VAR_7 + VAR_8 * VAR_4->m.linesize];
                        VAR_12 += VAR_16;
                        VAR_13 += VAR_16 * VAR_16;
                    }
                }
            }
            VAR_13 = (VAR_13 - (((unsigned) VAR_12 * VAR_12) >> 8) + 128) >> 8;

            VAR_4->mb_cmp[VAR_11].value = VAR_13;
            VAR_4->mb_cmp[VAR_11].mb = VAR_11;
        }
    } else {
        const int VAR_17 = VAR_4->m.linesize >> 1;
        for (VAR_6 = 0; VAR_6 < VAR_4->m.mb_width; ++VAR_6) {
            uint16_t *VAR_18 = (uint16_t *)VAR_4->thread[0]->src[0] +
                            ((VAR_5 << 4) * VAR_17) + (VAR_6 << 4);
            unsigned VAR_19 = VAR_5 * VAR_4->m.mb_width + VAR_6;
            int VAR_20 = 0;
            int VAR_21 = 0;
            int VAR_22 = FUNC_0(VAR_0->width - 16 * VAR_6, 16);
            int VAR_23 = FUNC_0((VAR_0->height >> VAR_4->interlaced) - 16 * VAR_5, 16);
            int VAR_24, VAR_25;
            int VAR_26, VAR_27;

            for (VAR_26 = 0; VAR_26 < VAR_23; ++VAR_26) {
                for (VAR_27 = 0; VAR_27 < VAR_22; ++VAR_27) {

                    const int VAR_28 = (unsigned) VAR_18[VAR_27] >> 6;
                    VAR_20 += VAR_28;
                    VAR_21 += VAR_28 * VAR_28;

                }
                VAR_18 += VAR_17;
            }
            VAR_24 = VAR_20 >> 8;
            VAR_25 = VAR_21 >> 8;
            VAR_4->mb_cmp[VAR_19].value = VAR_25 - VAR_24 * VAR_24;
            VAR_4->mb_cmp[VAR_19].mb = VAR_19;
        }
    }
    return 0;
}
