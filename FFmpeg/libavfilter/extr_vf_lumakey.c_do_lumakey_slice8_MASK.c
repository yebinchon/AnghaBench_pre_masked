
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {TYPE_1__* priv; } ;
struct TYPE_6__ {int height; int** data; int const* linesize; int width; } ;
struct TYPE_5__ {int softness; int white; int black; } ;
typedef TYPE_1__ LumakeyContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterContext ;



__attribute__((used)) static int FUNC_0(AVFilterContext *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
    LumakeyContext *VAR_4 = VAR_0->priv;
    AVFrame *VAR_5 = VAR_1;
    const int VAR_6 = (VAR_5->height * VAR_2) / VAR_3;
    const int VAR_7 = (VAR_5->height * (VAR_2 + 1)) / VAR_3;
    uint8_t *VAR_8 = VAR_5->data[3] + VAR_6 * VAR_5->linesize[3];
    const uint8_t *VAR_9 = VAR_5->data[0] + VAR_6 * VAR_5->linesize[0];
    const int VAR_10 = VAR_4->softness;
    const int VAR_11 = VAR_4->white;
    const int VAR_12 = VAR_4->black;
    int VAR_13, VAR_14;

    for (VAR_14 = VAR_6; VAR_14 < VAR_7; VAR_14++) {
        for (VAR_13 = 0; VAR_13 < VAR_5->width; VAR_13++) {
            if (VAR_9[VAR_13] >= VAR_12 && VAR_9[VAR_13] <= VAR_11) {
                VAR_8[VAR_13] = 0;
            } else if (VAR_9[VAR_13] > VAR_12 - VAR_10 && VAR_9[VAR_13] < VAR_11 + VAR_10) {
                if (VAR_9[VAR_13] < VAR_12) {
                    VAR_8[VAR_13] = 255 - (VAR_9[VAR_13] - VAR_12 + VAR_10) * 255 / VAR_10;
                } else {
                    VAR_8[VAR_13] = (VAR_9[VAR_13] - VAR_11) * 255 / VAR_10;
                }
            }
        }
        VAR_9 += VAR_5->linesize[0];
        VAR_8 += VAR_5->linesize[3];
    }

    return 0;
}
