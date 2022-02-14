
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {TYPE_1__* priv; } ;
struct TYPE_6__ {int height; int** data; int* linesize; int width; } ;
struct TYPE_5__ {int bpp; int black_level; int factor; int black_level_scaled; } ;
typedef TYPE_1__ FadeContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterContext ;



__attribute__((used)) static int FUNC_0(AVFilterContext *VAR_0, void *VAR_1, int VAR_2,
                             int VAR_3)
{
    FadeContext *VAR_4 = VAR_0->priv;
    AVFrame *VAR_5 = VAR_1;
    int VAR_6 = (VAR_5->height * VAR_2 ) / VAR_3;
    int VAR_7 = (VAR_5->height * (VAR_2+1)) / VAR_3;
    int VAR_8, VAR_9;

    for (VAR_8 = VAR_6; VAR_8 < VAR_7; VAR_8++) {
        uint8_t *VAR_10 = VAR_5->data[0] + VAR_8 * VAR_5->linesize[0];
        for (VAR_9 = 0; VAR_9 < VAR_5->width * VAR_4->bpp; VAR_9++) {



            *VAR_10 = ((*VAR_10 - VAR_4->black_level) * VAR_4->factor + VAR_4->black_level_scaled) >> 16;
            VAR_10++;
        }
    }

    return 0;
}
