
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
typedef int int16_t ;
struct TYPE_9__ {int ** uveob_base; int * eob_base; void** uvblock_base; void* block_base; void* b_base; } ;
typedef TYPE_3__ VP9TileData ;
struct TYPE_8__ {TYPE_1__* frames; } ;
struct TYPE_10__ {int bytesperpixel; scalar_t__ block_alloc_using_2pass; int ss_h; int ss_v; int sb_cols; int sb_rows; int cols; int rows; int active_tile_cols; TYPE_2__ s; TYPE_3__* td; } ;
typedef TYPE_4__ VP9Context ;
typedef int VP9Block ;
struct TYPE_11__ {TYPE_4__* priv_data; } ;
struct TYPE_7__ {scalar_t__ uses_2pass; } ;
typedef TYPE_5__ AVCodecContext ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (int,int) ;
 void* FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(AVCodecContext *VAR_2)
{
    int VAR_3;
    VP9Context *VAR_4 = VAR_2->priv_data;
    int VAR_5, VAR_6, VAR_7 = VAR_4->bytesperpixel;
    VP9TileData *VAR_8 = &VAR_4->td[0];

    if (VAR_8->b_base && VAR_8->block_base && VAR_4->block_alloc_using_2pass == VAR_4->s.frames[VAR_0].uses_2pass)
        return 0;

    FUNC_1(VAR_8->b_base);
    FUNC_1(VAR_8->block_base);
    VAR_5 = 64 * 64 >> (VAR_4->ss_h + VAR_4->ss_v);
    VAR_6 = 16 * 16 >> (VAR_4->ss_h + VAR_4->ss_v);
    if (VAR_4->s.frames[VAR_0].uses_2pass) {
        int VAR_9 = VAR_4->sb_cols * VAR_4->sb_rows;

        VAR_8->b_base = FUNC_3(VAR_4->cols * VAR_4->rows, sizeof(VP9Block));
        VAR_8->block_base = FUNC_4(((64 * 64 + 2 * VAR_5) * VAR_7 * sizeof(int16_t) +
                                    16 * 16 + 2 * VAR_6) * VAR_9);
        if (!VAR_8->b_base || !VAR_8->block_base)
            return FUNC_0(VAR_1);
        VAR_8->uvblock_base[0] = VAR_8->block_base + VAR_9 * 64 * 64 * VAR_7;
        VAR_8->uvblock_base[1] = VAR_8->uvblock_base[0] + VAR_9 * VAR_5 * VAR_7;
        VAR_8->eob_base = (uint8_t *) (VAR_8->uvblock_base[1] + VAR_9 * VAR_5 * VAR_7);
        VAR_8->uveob_base[0] = VAR_8->eob_base + 16 * 16 * VAR_9;
        VAR_8->uveob_base[1] = VAR_8->uveob_base[0] + VAR_6 * VAR_9;
    } else {
        for (VAR_3 = 1; VAR_3 < VAR_4->active_tile_cols; VAR_3++) {
            if (VAR_4->td[VAR_3].b_base && VAR_4->td[VAR_3].block_base) {
                FUNC_1(VAR_4->td[VAR_3].b_base);
                FUNC_1(VAR_4->td[VAR_3].block_base);
            }
        }
        for (VAR_3 = 0; VAR_3 < VAR_4->active_tile_cols; VAR_3++) {
            VAR_4->td[VAR_3].b_base = FUNC_2(sizeof(VP9Block));
            VAR_4->td[VAR_3].block_base = FUNC_4((64 * 64 + 2 * VAR_5) * VAR_7 * sizeof(int16_t) +
                                       16 * 16 + 2 * VAR_6);
            if (!VAR_4->td[VAR_3].b_base || !VAR_4->td[VAR_3].block_base)
                return FUNC_0(VAR_1);
            VAR_4->td[VAR_3].uvblock_base[0] = VAR_4->td[VAR_3].block_base + 64 * 64 * VAR_7;
            VAR_4->td[VAR_3].uvblock_base[1] = VAR_4->td[VAR_3].uvblock_base[0] + VAR_5 * VAR_7;
            VAR_4->td[VAR_3].eob_base = (uint8_t *) (VAR_4->td[VAR_3].uvblock_base[1] + VAR_5 * VAR_7);
            VAR_4->td[VAR_3].uveob_base[0] = VAR_4->td[VAR_3].eob_base + 16 * 16;
            VAR_4->td[VAR_3].uveob_base[1] = VAR_4->td[VAR_3].uveob_base[0] + VAR_6;
        }
    }
    VAR_4->block_alloc_using_2pass = VAR_4->s.frames[VAR_0].uses_2pass;

    return 0;
}
