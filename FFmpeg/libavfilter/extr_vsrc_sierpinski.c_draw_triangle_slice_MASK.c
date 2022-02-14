
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {TYPE_1__* priv; } ;
struct TYPE_6__ {int width; int height; int const* linesize; int ** data; } ;
struct TYPE_5__ {int pos_x; int pos_y; } ;
typedef TYPE_1__ SierpinskiContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static int FUNC_1(AVFilterContext *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
    SierpinskiContext *VAR_4 = VAR_0->priv;
    AVFrame *VAR_5 = VAR_1;
    const int VAR_6 = VAR_5->width;
    const int VAR_7 = VAR_5->height;
    const int VAR_8 = (VAR_7 * VAR_2 ) / VAR_3;
    const int VAR_9 = (VAR_7 * (VAR_2+1)) / VAR_3;
    uint8_t *VAR_10 = VAR_5->data[0] + VAR_8 * VAR_5->linesize[0];

    for (int VAR_11 = VAR_8; VAR_11 < VAR_9; VAR_11++) {
        for (int VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
            if ((VAR_4->pos_x + VAR_12) & (VAR_4->pos_y + VAR_11)) {
                FUNC_0(&VAR_10[VAR_12*4], 0x00000000);
            } else {
                FUNC_0(&VAR_10[VAR_12*4], 0xFFFFFFFF);
            }
        }

        VAR_10 += VAR_5->linesize[0];
    }

    return 0;
}
