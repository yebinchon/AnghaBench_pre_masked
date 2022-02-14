
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* f; } ;
struct TYPE_7__ {int flags; int mbx; int mb_width; int mby; int l_stride; int c_stride; int mb_height; TYPE_2__ cur; scalar_t__ cv; scalar_t__ cu; scalar_t__ cy; int * mv; int * pred_mode_Y; int mbidx; int ** top_mv; } ;
struct TYPE_5__ {scalar_t__* data; } ;
typedef TYPE_3__ AVSContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

int FUNC_0(AVSContext *VAR_9)
{
    int VAR_10;

    VAR_9->flags |= VAR_0;
    VAR_9->cy += 16;
    VAR_9->cu += 8;
    VAR_9->cv += 8;

    for (VAR_10 = 0; VAR_10 <= 20; VAR_10 += 4)
        VAR_9->mv[VAR_10] = VAR_9->mv[VAR_10 + 2];

    VAR_9->top_mv[0][VAR_9->mbx * 2 + 0] = VAR_9->mv[VAR_5];
    VAR_9->top_mv[0][VAR_9->mbx * 2 + 1] = VAR_9->mv[VAR_6];
    VAR_9->top_mv[1][VAR_9->mbx * 2 + 0] = VAR_9->mv[VAR_3];
    VAR_9->top_mv[1][VAR_9->mbx * 2 + 1] = VAR_9->mv[VAR_4];

    VAR_9->mbidx++;
    VAR_9->mbx++;
    if (VAR_9->mbx == VAR_9->mb_width) {
        VAR_9->flags = VAR_1 | VAR_2;

        VAR_9->pred_mode_Y[3] = VAR_9->pred_mode_Y[6] = VAR_7;

        for (VAR_10 = 0; VAR_10 <= 20; VAR_10 += 4)
            VAR_9->mv[VAR_10] = VAR_8;
        VAR_9->mbx = 0;
        VAR_9->mby++;

        VAR_9->cy = VAR_9->cur.f->data[0] + VAR_9->mby * 16 * VAR_9->l_stride;
        VAR_9->cu = VAR_9->cur.f->data[1] + VAR_9->mby * 8 * VAR_9->c_stride;
        VAR_9->cv = VAR_9->cur.f->data[2] + VAR_9->mby * 8 * VAR_9->c_stride;
        if (VAR_9->mby == VAR_9->mb_height) {
            return 0;
        }
    }
    return 1;
}
