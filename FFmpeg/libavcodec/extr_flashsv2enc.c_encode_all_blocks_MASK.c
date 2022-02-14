
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {scalar_t__ start; scalar_t__ len; scalar_t__ height; scalar_t__ enc_size; scalar_t__ data_size; scalar_t__ dirty; int flags; } ;
struct TYPE_7__ {int rows; int cols; int image_width; int block_height; int block_width; int raw_size; int image_height; int tot_blocks; int uncomp_size; int comp_size; int diff_blocks; int dist; int comp; int palette; int * current_frame; scalar_t__ use15_7; TYPE_2__* key_blocks; TYPE_2__* frame_blocks; } ;
typedef TYPE_1__ FlashSV2Context ;
typedef TYPE_2__ Block ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int *,TYPE_2__*,TYPE_2__*,int *,int,int ,int ,int) ;

__attribute__((used)) static int FUNC_1(FlashSV2Context * VAR_2, int VAR_3)
{
    int VAR_4, VAR_5, VAR_6;
    uint8_t *VAR_7;
    Block *VAR_8, *VAR_9;
    for (VAR_4 = 0; VAR_4 < VAR_2->rows; VAR_4++) {
        for (VAR_5 = 0; VAR_5 < VAR_2->cols; VAR_5++) {
            VAR_8 = VAR_2->frame_blocks + (VAR_4 * VAR_2->cols + VAR_5);
            VAR_9 = VAR_2->key_blocks + (VAR_4 * VAR_2->cols + VAR_5);
            VAR_8->flags = VAR_2->use15_7 ? VAR_0 : 0;
            if (VAR_3) {
                VAR_8->start = 0;
                VAR_8->len = VAR_8->height;
            } else if (!VAR_8->dirty) {
                VAR_8->start = 0;
                VAR_8->len = 0;
                VAR_8->data_size = 0;
                continue;
            } else if (VAR_8->start != 0 || VAR_8->len != VAR_8->height) {
                VAR_8->flags |= VAR_1;
            }
            VAR_7 = VAR_2->current_frame + VAR_2->image_width * 3 * VAR_2->block_height * VAR_4 + VAR_2->block_width * VAR_5 * 3;
            VAR_6 = FUNC_0(VAR_2, &VAR_2->palette, VAR_8, VAR_9, VAR_7, VAR_2->image_width * 3, VAR_2->comp, VAR_2->dist, VAR_3);

            if (VAR_8->dirty)
                VAR_2->diff_blocks++;
            VAR_2->comp_size += VAR_8->data_size;
            VAR_2->uncomp_size += VAR_8->enc_size;

            if (VAR_6)
                return VAR_6;
        }
    }

    VAR_2->raw_size += VAR_2->image_width * VAR_2->image_height * 3;
    VAR_2->tot_blocks += VAR_2->rows * VAR_2->cols;

    return 0;
}
