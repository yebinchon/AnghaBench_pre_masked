
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {TYPE_1__* priv; } ;
struct TYPE_7__ {int** data; int * linesize; } ;
struct TYPE_6__ {int generation; int h; int buf_row_idx; int* buf; int w; scalar_t__ scroll; } ;
typedef TYPE_1__ CellAutoContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterContext ;



__attribute__((used)) static void FUNC_0(AVFilterContext *VAR_0, AVFrame *VAR_1)
{
    CellAutoContext *VAR_2 = VAR_0->priv;
    int VAR_3, VAR_4, VAR_5, VAR_6 = 0;
    uint8_t *VAR_7 = VAR_1->data[0];

    if (VAR_2->scroll && VAR_2->generation >= VAR_2->h)

        VAR_6 = (VAR_2->buf_row_idx + 1) % VAR_2->h;


    for (VAR_3 = 0; VAR_3 < VAR_2->h; VAR_3++) {
        uint8_t VAR_8 = 0;
        uint8_t *VAR_9 = VAR_2->buf + VAR_6*VAR_2->w;
        uint8_t *VAR_10 = VAR_7;
        for (VAR_5 = 0, VAR_4 = 0; VAR_4 < VAR_2->w; VAR_4++) {
            VAR_8 |= VAR_9[VAR_4]<<(7-VAR_5++);
            if (VAR_5==8 || VAR_4 == VAR_2->w-1) {
                VAR_5 = 0;
                *VAR_10++ = VAR_8;
                VAR_8 = 0;
            }
        }
        VAR_6 = (VAR_6 + 1) % VAR_2->h;
        VAR_7 += VAR_1->linesize[0];
    }
}
