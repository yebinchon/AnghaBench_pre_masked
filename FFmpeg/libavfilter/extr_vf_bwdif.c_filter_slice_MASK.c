
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int uint8_t ;
struct TYPE_19__ {scalar_t__ current_field; TYPE_6__* cur; TYPE_4__* next; TYPE_3__* prev; TYPE_2__* csp; } ;
typedef TYPE_7__ YADIFContext ;
struct TYPE_20__ {size_t plane; int h; int parity; int w; int tff; TYPE_5__* frame; } ;
typedef TYPE_8__ ThreadData ;
struct TYPE_21__ {int (* filter_line ) (int *,int *,int *,int *,int,int,int,int,int,int,int,int,int,int,int) ;int (* filter_edge ) (int *,int *,int *,int *,int,int,int,int,int,int,int,int) ;int (* filter_intra ) (int *,int *,int,int,int,int,int,int,int) ;TYPE_7__ yadif; } ;
struct TYPE_18__ {int* linesize; int ** data; } ;
struct TYPE_17__ {int* linesize; int ** data; } ;
struct TYPE_16__ {int ** data; } ;
struct TYPE_15__ {int ** data; } ;
struct TYPE_14__ {TYPE_1__* comp; } ;
struct TYPE_13__ {int depth; } ;
struct TYPE_12__ {TYPE_9__* priv; } ;
typedef TYPE_9__ BWDIFContext ;
typedef TYPE_10__ AVFilterContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int *,int,int,int,int,int,int,int) ;
 int FUNC_2 (int *,int *,int *,int *,int,int,int,int,int,int,int,int) ;
 int FUNC_3 (int *,int *,int *,int *,int,int,int,int,int,int,int,int,int,int,int) ;

__attribute__((used)) static int FUNC_4(AVFilterContext *VAR_1, void *VAR_2, int VAR_3, int VAR_4)
{
    BWDIFContext *VAR_5 = VAR_1->priv;
    YADIFContext *VAR_6 = &VAR_5->yadif;
    ThreadData *VAR_7 = VAR_2;
    int VAR_8 = VAR_6->cur->linesize[VAR_7->plane];
    int VAR_9 = (1 << (VAR_6->csp->comp[VAR_7->plane].depth)) - 1;
    int VAR_10 = (VAR_6->csp->comp[VAR_7->plane].depth + 7) / 8;
    int VAR_11 = VAR_8 / VAR_10;
    int VAR_12 = (VAR_7->h * VAR_3 ) / VAR_4;
    int VAR_13 = (VAR_7->h * (VAR_3+1)) / VAR_4;
    int VAR_14;

    for (VAR_14 = VAR_12; VAR_14 < VAR_13; VAR_14++) {
        if ((VAR_14 ^ VAR_7->parity) & 1) {
            uint8_t *VAR_15 = &VAR_6->prev->data[VAR_7->plane][VAR_14 * VAR_8];
            uint8_t *VAR_16 = &VAR_6->cur ->data[VAR_7->plane][VAR_14 * VAR_8];
            uint8_t *VAR_17 = &VAR_6->next->data[VAR_7->plane][VAR_14 * VAR_8];
            uint8_t *VAR_18 = &VAR_7->frame->data[VAR_7->plane][VAR_14 * VAR_7->frame->linesize[VAR_7->plane]];
            if (VAR_6->current_field == VAR_0) {
                VAR_5->filter_intra(VAR_18, VAR_16, VAR_7->w, (VAR_14 + VAR_10) < VAR_7->h ? VAR_11 : -VAR_11,
                                VAR_14 > (VAR_10 - 1) ? -VAR_11 : VAR_11,
                                (VAR_14 + 3*VAR_10) < VAR_7->h ? 3 * VAR_11 : -VAR_11,
                                VAR_14 > (3*VAR_10 - 1) ? -3 * VAR_11 : VAR_11,
                                VAR_7->parity ^ VAR_7->tff, VAR_9);
            } else if ((VAR_14 < 4) || ((VAR_14 + 5) > VAR_7->h)) {
                VAR_5->filter_edge(VAR_18, VAR_15, VAR_16, VAR_17, VAR_7->w,
                               (VAR_14 + VAR_10) < VAR_7->h ? VAR_11 : -VAR_11,
                               VAR_14 > (VAR_10 - 1) ? -VAR_11 : VAR_11,
                               VAR_11 << 1, -(VAR_11 << 1),
                               VAR_7->parity ^ VAR_7->tff, VAR_9,
                               (VAR_14 < 2) || ((VAR_14 + 3) > VAR_7->h) ? 0 : 1);
            } else {
                VAR_5->filter_line(VAR_18, VAR_15, VAR_16, VAR_17, VAR_7->w,
                               VAR_11, -VAR_11, VAR_11 << 1, -(VAR_11 << 1),
                               3 * VAR_11, -3 * VAR_11, VAR_11 << 2, -(VAR_11 << 2),
                               VAR_7->parity ^ VAR_7->tff, VAR_9);
            }
        } else {
            FUNC_0(&VAR_7->frame->data[VAR_7->plane][VAR_14 * VAR_7->frame->linesize[VAR_7->plane]],
                   &VAR_6->cur->data[VAR_7->plane][VAR_14 * VAR_8], VAR_7->w * VAR_10);
        }
    }
    return 0;
}
