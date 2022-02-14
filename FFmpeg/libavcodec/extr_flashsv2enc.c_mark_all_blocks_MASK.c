
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int image_height; int cols; int block_height; int block_width; int image_width; int tot_lines; scalar_t__ key_frame; scalar_t__ current_frame; int * frame_blocks; } ;
typedef TYPE_1__ FlashSV2Context ;
typedef int Block ;


 int FUNC_0 (TYPE_1__*,int *,int const*,scalar_t__,scalar_t__,int,int) ;

__attribute__((used)) static int FUNC_1(FlashSV2Context * VAR_0, const uint8_t * VAR_1, int VAR_2,
                           int VAR_3)
{
    int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
    Block *VAR_9;
    for (VAR_4 = VAR_0->image_height - 1; VAR_4 >= 0; VAR_4--) {
        for (VAR_6 = 0; VAR_6 < VAR_0->cols; VAR_6++) {
            VAR_5 = VAR_0->image_height - VAR_4 - 1;
            VAR_9 = VAR_0->frame_blocks + VAR_6 + VAR_5 / VAR_0->block_height * VAR_0->cols;
            VAR_8 = VAR_2 * VAR_4 + VAR_6 * VAR_0->block_width * 3;
            VAR_7 = VAR_0->image_width * VAR_5 * 3 + VAR_6 * VAR_0->block_width * 3;
            FUNC_0(VAR_0, VAR_9, VAR_1 + VAR_8, VAR_0->current_frame + VAR_7,
                       VAR_0->key_frame + VAR_7, VAR_5 % VAR_0->block_height, VAR_3);
        }
    }

    VAR_0->tot_lines += VAR_0->image_height * VAR_0->cols;

    return 0;
}
