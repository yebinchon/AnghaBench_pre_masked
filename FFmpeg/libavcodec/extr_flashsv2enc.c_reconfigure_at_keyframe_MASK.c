
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int rows; int image_height; int cols; int image_width; int block_width; int block_height; int blocks_size; int palette_type; int avctx; int palette; scalar_t__ use_custom_palette; scalar_t__ use15_7; int blockbuffer; int blockbuffer_size; int keybuffer; void* key_blocks; int databuffer; int encbuffer; void* frame_blocks; } ;
typedef TYPE_1__ FlashSV2Context ;
typedef int Block ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int ,int ,char*) ;
 void* FUNC_3 (void*,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int const*,int,int,int) ;
 int FUNC_6 (TYPE_1__*,void*,int ,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_11(FlashSV2Context * VAR_3, const uint8_t * VAR_4,
                                   int VAR_5)
{
    int VAR_6 = 0;
    int VAR_7;
    int VAR_8 = FUNC_8 (VAR_3);
    int VAR_9 = FUNC_7(VAR_3);

    VAR_3->rows = (VAR_3->image_height + VAR_9 - 1) / VAR_9;
    VAR_3->cols = (VAR_3->image_width + VAR_8 - 1) / VAR_8;

    if (VAR_8 != VAR_3->block_width || VAR_9 != VAR_3->block_height) {
        VAR_3->block_width = VAR_8;
        VAR_3->block_height = VAR_9;
        if (VAR_3->rows * VAR_3->cols > VAR_3->blocks_size / sizeof(Block)) {
            VAR_3->frame_blocks = FUNC_3(VAR_3->frame_blocks, VAR_3->rows, VAR_3->cols * sizeof(Block));
            VAR_3->key_blocks = FUNC_3(VAR_3->key_blocks, VAR_3->cols, VAR_3->rows * sizeof(Block));
            if (!VAR_3->frame_blocks || !VAR_3->key_blocks) {
                FUNC_2(VAR_3->avctx, VAR_1, "Memory allocation failed.\n");
                return -1;
            }
            VAR_3->blocks_size = VAR_3->rows * VAR_3->cols * sizeof(Block);
        }
        FUNC_6(VAR_3, VAR_3->frame_blocks, VAR_3->encbuffer, VAR_3->databuffer);
        FUNC_6(VAR_3, VAR_3->key_blocks, VAR_3->keybuffer, 0);

        FUNC_1(&VAR_3->blockbuffer, &VAR_3->blockbuffer_size, VAR_8 * VAR_9 * 6);
        if (!VAR_3->blockbuffer) {
            FUNC_2(VAR_3->avctx, VAR_1, "Could not allocate block buffer.\n");
            return FUNC_0(VAR_2);
        }
    }

    VAR_3->use15_7 = FUNC_9(VAR_3);
    if (VAR_3->use15_7) {
        if ((VAR_3->use_custom_palette && VAR_3->palette_type != 1) || VAR_6) {
            VAR_7 = FUNC_5(&VAR_3->palette, VAR_4, VAR_3->image_width, VAR_3->image_height, VAR_5);
            if (VAR_7)
                return VAR_7;
            VAR_3->palette_type = 1;
            FUNC_2(VAR_3->avctx, VAR_0, "Generated optimum palette\n");
        } else if (!VAR_3->use_custom_palette && VAR_3->palette_type != 0) {
            VAR_7 = FUNC_4(&VAR_3->palette);
            if (VAR_7)
                return VAR_7;
            VAR_3->palette_type = 0;
            FUNC_2(VAR_3->avctx, VAR_0, "Generated default palette\n");
        }
    }


    FUNC_10(VAR_3);

    return 0;
}
