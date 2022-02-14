
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {scalar_t__ dirty; scalar_t__ len; scalar_t__ start; } ;
struct TYPE_5__ {int rows; int cols; TYPE_2__* frame_blocks; } ;
typedef TYPE_1__ FlashSV2Context ;
typedef TYPE_2__ Block ;


 int FUNC_0 (TYPE_2__*,int *,int) ;

__attribute__((used)) static int FUNC_1(FlashSV2Context * VAR_0, uint8_t * VAR_1,
                            int VAR_2)
{
    int VAR_3, VAR_4, VAR_5 = 0, VAR_6;
    Block *VAR_7;
    for (VAR_3 = 0; VAR_3 < VAR_0->rows; VAR_3++) {
        for (VAR_4 = 0; VAR_4 < VAR_0->cols; VAR_4++) {
            VAR_7 = VAR_0->frame_blocks + VAR_3 * VAR_0->cols + VAR_4;
            VAR_6 = FUNC_0(VAR_7, VAR_1 + VAR_5, VAR_2 - VAR_5);
            VAR_7->start = VAR_7->len = VAR_7->dirty = 0;
            if (VAR_6 < 0)
                return VAR_6;
            VAR_5 += VAR_6;
        }
    }
    return VAR_5;
}
