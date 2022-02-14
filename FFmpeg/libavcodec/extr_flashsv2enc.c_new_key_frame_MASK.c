
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ data; scalar_t__ sl_end; scalar_t__ sl_begin; int enc; } ;
struct TYPE_5__ {int rows; int cols; int frame_size; TYPE_3__* encbuffer; TYPE_3__* keybuffer; TYPE_3__* key_blocks; TYPE_3__* current_frame; TYPE_3__* key_frame; int blocks_size; TYPE_3__* frame_blocks; } ;
typedef TYPE_1__ FlashSV2Context ;


 int FUNC_0 (TYPE_3__*,TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_1(FlashSV2Context * VAR_0)
{
    int VAR_1;
    FUNC_0(VAR_0->key_blocks, VAR_0->frame_blocks, VAR_0->blocks_size);
    FUNC_0(VAR_0->key_frame, VAR_0->current_frame, VAR_0->frame_size);

    for (VAR_1 = 0; VAR_1 < VAR_0->rows * VAR_0->cols; VAR_1++) {
        VAR_0->key_blocks[VAR_1].enc += (VAR_0->keybuffer - VAR_0->encbuffer);
        VAR_0->key_blocks[VAR_1].sl_begin = 0;
        VAR_0->key_blocks[VAR_1].sl_end = 0;
        VAR_0->key_blocks[VAR_1].data = 0;
    }
    FUNC_0(VAR_0->keybuffer, VAR_0->encbuffer, VAR_0->frame_size);

    return 0;
}
