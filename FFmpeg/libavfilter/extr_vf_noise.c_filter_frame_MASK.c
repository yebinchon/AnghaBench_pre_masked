
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int * out; int * in; } ;
typedef TYPE_2__ ThreadData ;
struct TYPE_18__ {TYPE_1__* internal; TYPE_3__* priv; TYPE_5__** outputs; } ;
struct TYPE_17__ {int h; int w; TYPE_6__* dst; } ;
struct TYPE_16__ {int rand_shift_init; int flags; int* rand_shift; int lfg; scalar_t__ strength; } ;
struct TYPE_15__ {int * height; TYPE_4__* param; } ;
struct TYPE_13__ {int (* execute ) (TYPE_6__*,int ,TYPE_2__*,int *,int ) ;} ;
typedef TYPE_3__ NoiseContext ;
typedef TYPE_4__ FilterParams ;
typedef int AVFrame ;
typedef TYPE_5__ AVFilterLink ;
typedef TYPE_6__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int **) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_5__*,int *) ;
 int FUNC_8 (TYPE_6__*) ;
 int * FUNC_9 (TYPE_5__*,int ,int ) ;
 int VAR_4 ;
 int FUNC_10 (TYPE_6__*,int ,TYPE_2__*,int *,int ) ;

__attribute__((used)) static int FUNC_11(AVFilterLink *VAR_5, AVFrame *VAR_6)
{
    AVFilterContext *VAR_7 = VAR_5->dst;
    AVFilterLink *VAR_8 = VAR_7->outputs[0];
    NoiseContext *VAR_9 = VAR_7->priv;
    ThreadData VAR_10;
    AVFrame *VAR_11;
    int VAR_12, VAR_13;

    if (FUNC_4(VAR_6)) {
        VAR_11 = VAR_6;
    } else {
        VAR_11 = FUNC_9(VAR_8, VAR_8->w, VAR_8->h);
        if (!VAR_11) {
            FUNC_3(&VAR_6);
            return FUNC_0(VAR_0);
        }
        FUNC_2(VAR_11, VAR_6);
    }

    for (VAR_12 = 0; VAR_12 < 4; VAR_12++) {
        FilterParams *VAR_14 = &VAR_9->param[VAR_12];

        if ((!VAR_14->rand_shift_init || (VAR_14->flags & VAR_3)) && VAR_14->strength) {

            for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
                VAR_14->rand_shift[VAR_13] = FUNC_5(&VAR_14->lfg) & (VAR_2 - 1);
            }
            VAR_14->rand_shift_init = 1;
        }
    }

    VAR_10.in = VAR_6; VAR_10.out = VAR_11;
    VAR_7->internal->execute(VAR_7, VAR_4, &VAR_10, ((void*)0), FUNC_1(VAR_9->height[0], FUNC_8(VAR_7)));
    FUNC_6();

    if (VAR_6 != VAR_11)
        FUNC_3(&VAR_6);
    return FUNC_7(VAR_8, VAR_11);
}
