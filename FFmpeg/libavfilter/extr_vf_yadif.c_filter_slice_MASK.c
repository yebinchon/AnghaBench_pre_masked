
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_17__ {int mode; TYPE_6__* cur; int (* filter_edges ) (int *,int *,int *,int *,int,int,int,int,int) ;int (* filter_line ) (int *,int *,int *,int *,int,int,int,int,int) ;TYPE_4__* next; TYPE_3__* prev; TYPE_2__* csp; } ;
typedef TYPE_7__ YADIFContext ;
struct TYPE_18__ {size_t plane; int h; int parity; int w; int tff; TYPE_5__* frame; } ;
typedef TYPE_8__ ThreadData ;
struct TYPE_19__ {TYPE_7__* priv; } ;
struct TYPE_16__ {int* linesize; int ** data; } ;
struct TYPE_15__ {int* linesize; int ** data; } ;
struct TYPE_14__ {int ** data; } ;
struct TYPE_13__ {int ** data; } ;
struct TYPE_12__ {TYPE_1__* comp; } ;
struct TYPE_11__ {int depth; } ;
typedef TYPE_9__ AVFilterContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int *,int *,int *,int,int,int,int,int) ;
 int FUNC_2 (int *,int *,int *,int *,int,int,int,int,int) ;

__attribute__((used)) static int FUNC_3(AVFilterContext *VAR_1, void *VAR_2, int VAR_3, int VAR_4)
{
    YADIFContext *VAR_5 = VAR_1->priv;
    ThreadData *VAR_6 = VAR_2;
    int VAR_7 = VAR_5->cur->linesize[VAR_6->plane];
    int VAR_8 = (VAR_5->csp->comp[VAR_6->plane].depth + 7) / 8;
    int VAR_9 = 3 * VAR_8;
    int VAR_10 = (VAR_6->h * VAR_3 ) / VAR_4;
    int VAR_11 = (VAR_6->h * (VAR_3+1)) / VAR_4;
    int VAR_12;
    int VAR_13 = 3 + VAR_0 / VAR_8 - 1;




    for (VAR_12 = VAR_10; VAR_12 < VAR_11; VAR_12++) {
        if ((VAR_12 ^ VAR_6->parity) & 1) {
            uint8_t *VAR_14 = &VAR_5->prev->data[VAR_6->plane][VAR_12 * VAR_7];
            uint8_t *VAR_15 = &VAR_5->cur ->data[VAR_6->plane][VAR_12 * VAR_7];
            uint8_t *VAR_16 = &VAR_5->next->data[VAR_6->plane][VAR_12 * VAR_7];
            uint8_t *VAR_17 = &VAR_6->frame->data[VAR_6->plane][VAR_12 * VAR_6->frame->linesize[VAR_6->plane]];
            int VAR_18 = VAR_12 == 1 || VAR_12 + 2 == VAR_6->h ? 2 : VAR_5->mode;
            VAR_5->filter_line(VAR_17 + VAR_9, VAR_14 + VAR_9, VAR_15 + VAR_9,
                           VAR_16 + VAR_9, VAR_6->w - VAR_13,
                           VAR_12 + 1 < VAR_6->h ? VAR_7 : -VAR_7,
                           VAR_12 ? -VAR_7 : VAR_7,
                           VAR_6->parity ^ VAR_6->tff, VAR_18);
            VAR_5->filter_edges(VAR_17, VAR_14, VAR_15, VAR_16, VAR_6->w,
                            VAR_12 + 1 < VAR_6->h ? VAR_7 : -VAR_7,
                            VAR_12 ? -VAR_7 : VAR_7,
                            VAR_6->parity ^ VAR_6->tff, VAR_18);
        } else {
            FUNC_0(&VAR_6->frame->data[VAR_6->plane][VAR_12 * VAR_6->frame->linesize[VAR_6->plane]],
                   &VAR_5->cur->data[VAR_6->plane][VAR_12 * VAR_7], VAR_6->w * VAR_8);
        }
    }
    return 0;
}
