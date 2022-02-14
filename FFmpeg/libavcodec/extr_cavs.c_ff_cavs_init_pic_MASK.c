
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* f; } ;
struct TYPE_7__ {int l_stride; int c_stride; int* luma_scan; scalar_t__ flags; scalar_t__ mbidx; scalar_t__ mby; scalar_t__ mbx; TYPE_2__ cur; int cv; int cu; int cy; int * pred_mode_Y; void** mv; } ;
struct TYPE_5__ {int* linesize; int * data; } ;
typedef TYPE_3__ AVSContext ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (void**,int ) ;
 void* VAR_5 ;

int FUNC_1(AVSContext *VAR_6)
{
    int VAR_7;


    for (VAR_7 = 0; VAR_7 <= 20; VAR_7 += 4)
        VAR_6->mv[VAR_7] = VAR_5;
    VAR_6->mv[VAR_1] = VAR_4;
    FUNC_0(&VAR_6->mv[VAR_1], VAR_0);
    VAR_6->mv[VAR_2] = VAR_4;
    FUNC_0(&VAR_6->mv[VAR_2], VAR_0);
    VAR_6->pred_mode_Y[3] = VAR_6->pred_mode_Y[6] = VAR_3;
    VAR_6->cy = VAR_6->cur.f->data[0];
    VAR_6->cu = VAR_6->cur.f->data[1];
    VAR_6->cv = VAR_6->cur.f->data[2];
    VAR_6->l_stride = VAR_6->cur.f->linesize[0];
    VAR_6->c_stride = VAR_6->cur.f->linesize[1];
    VAR_6->luma_scan[2] = 8 * VAR_6->l_stride;
    VAR_6->luma_scan[3] = 8 * VAR_6->l_stride + 8;
    VAR_6->mbx = VAR_6->mby = VAR_6->mbidx = 0;
    VAR_6->flags = 0;

    return 0;
}
