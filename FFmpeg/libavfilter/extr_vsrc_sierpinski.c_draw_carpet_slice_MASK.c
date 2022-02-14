
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int * priv; } ;
struct TYPE_4__ {int width; int height; int const* linesize; int ** data; } ;
typedef int SierpinskiContext ;
typedef TYPE_1__ AVFrame ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *,int,int) ;

__attribute__((used)) static int FUNC_2(AVFilterContext *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
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
            if (FUNC_1(VAR_4, VAR_12, VAR_11)) {
                FUNC_0(&VAR_10[VAR_12*4], 0x00000000);
            } else {
                FUNC_0(&VAR_10[VAR_12*4], 0xFFFFFFFF);
            }
        }

        VAR_10 += VAR_5->linesize[0];
    }

    return 0;
}
