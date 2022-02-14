
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int width; int height; int row; int col; int * data; int * enc; } ;
struct TYPE_5__ {int cols; int rows; int block_width; int image_width; int block_height; int image_height; } ;
typedef TYPE_1__ FlashSV2Context ;
typedef TYPE_2__ Block ;



__attribute__((used)) static void FUNC_0(FlashSV2Context * VAR_0, Block * VAR_1,
                        uint8_t * VAR_2, uint8_t * VAR_3)
{
    int VAR_4, VAR_5;
    Block *VAR_6;
    for (VAR_5 = 0; VAR_5 < VAR_0->cols; VAR_5++) {
        for (VAR_4 = 0; VAR_4 < VAR_0->rows; VAR_4++) {
            VAR_6 = VAR_1 + (VAR_5 + VAR_4 * VAR_0->cols);
            VAR_6->width = (VAR_5 < VAR_0->cols - 1) ?
                VAR_0->block_width :
                VAR_0->image_width - VAR_5 * VAR_0->block_width;

            VAR_6->height = (VAR_4 < VAR_0->rows - 1) ?
                VAR_0->block_height :
                VAR_0->image_height - VAR_4 * VAR_0->block_height;

            VAR_6->row = VAR_4;
            VAR_6->col = VAR_5;
            VAR_6->enc = VAR_2;
            VAR_6->data = VAR_3;
            VAR_2 += VAR_6->width * VAR_6->height * 3;
            VAR_3 += !VAR_3 ? 0 : VAR_6->width * VAR_6->height * 6;
        }
    }
}
