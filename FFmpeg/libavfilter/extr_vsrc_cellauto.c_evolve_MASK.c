
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {TYPE_1__* priv; } ;
struct TYPE_5__ {int* buf; int buf_row_idx; int w; int buf_prev_row_idx; int h; int rule; int generation; scalar_t__ stitch; } ;
typedef TYPE_1__ CellAutoContext ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (TYPE_2__*,char*,int,char,char,char,int) ;

__attribute__((used)) static void FUNC_1(AVFilterContext *VAR_0)
{
    CellAutoContext *VAR_1 = VAR_0->priv;
    int VAR_2, VAR_3, VAR_4[3];
    uint8_t *VAR_5, *VAR_6 = VAR_1->buf + VAR_1->buf_row_idx * VAR_1->w;
    enum { NW, N, NE };

    VAR_1->buf_prev_row_idx = VAR_1->buf_row_idx;
    VAR_1->buf_row_idx = VAR_1->buf_row_idx == VAR_1->h-1 ? 0 : VAR_1->buf_row_idx+1;
    VAR_5 = VAR_1->buf + VAR_1->w * VAR_1->buf_row_idx;

    for (VAR_2 = 0; VAR_2 < VAR_1->w; VAR_2++) {
        if (VAR_1->stitch) {
            VAR_4[NW] = VAR_2-1 < 0 ? VAR_1->w-1 : VAR_2-1;
            VAR_4[N] = VAR_2;
            VAR_4[NE] = VAR_2+1 == VAR_1->w ? 0 : VAR_2+1;
            VAR_3 = VAR_6[VAR_4[NW]]<<2 | VAR_6[VAR_4[N]]<<1 | VAR_6[VAR_4[NE]];
        } else {
            VAR_3 = 0;
            VAR_3|= VAR_2-1 >= 0 ? VAR_6[VAR_2-1]<<2 : 0;
            VAR_3|= VAR_6[VAR_2 ]<<1 ;
            VAR_3|= VAR_2+1 < VAR_1->w ? VAR_6[VAR_2+1] : 0;
        }
        VAR_5[VAR_2] = !!(VAR_1->rule & (1<<VAR_3));
        FUNC_0(VAR_0, "i:%d context:%c%c%c -> cell:%d\n", VAR_2,
                VAR_3&4?'@':' ', VAR_3&2?'@':' ', VAR_3&1?'@':' ', VAR_5[VAR_2]);
    }

    VAR_1->generation++;
}
