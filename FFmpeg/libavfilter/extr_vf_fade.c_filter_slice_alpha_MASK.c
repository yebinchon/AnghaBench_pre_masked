
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
struct TYPE_5__ {int is_packed_rgb; int* rgba_map; int black_level; int factor; int black_level_scaled; } ;
typedef TYPE_1__ FadeContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterContext ;


 size_t VAR_0 ;

__attribute__((used)) static int FUNC_0(AVFilterContext *VAR_1, void *VAR_2, int VAR_3,
                              int VAR_4)
{
    FadeContext *VAR_5 = VAR_1->priv;
    AVFrame *VAR_6 = VAR_2;
    int VAR_7 = VAR_5->is_packed_rgb ? 0 : VAR_0;
    int VAR_8 = (VAR_6->height * VAR_3 ) / VAR_4;
    int VAR_9 = (VAR_6->height * (VAR_3+1)) / VAR_4;
    int VAR_10, VAR_11;

    for (VAR_10 = VAR_8; VAR_10 < VAR_9; VAR_10++) {
        uint8_t *VAR_12 = VAR_6->data[VAR_7] + VAR_10 * VAR_6->linesize[VAR_7] + VAR_5->is_packed_rgb*VAR_5->rgba_map[VAR_0];
        int VAR_13 = VAR_5->is_packed_rgb ? 4 : 1;
        for (VAR_11 = 0; VAR_11 < VAR_6->width; VAR_11++) {



            *VAR_12 = ((*VAR_12 - VAR_5->black_level) * VAR_5->factor + VAR_5->black_level_scaled) >> 16;
            VAR_12 += VAR_13;
        }
    }

    return 0;
}
