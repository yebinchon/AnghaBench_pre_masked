
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_8__ {scalar_t__ prev_pts; scalar_t__ delta; int cfr; int avg_delta; scalar_t__ max_delta; scalar_t__ min_delta; int vfr; } ;
typedef TYPE_1__ VFRDETContext ;
struct TYPE_11__ {int * outputs; TYPE_1__* priv; } ;
struct TYPE_10__ {TYPE_4__* dst; } ;
struct TYPE_9__ {scalar_t__ pts; } ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_1->dst;
    VFRDETContext *VAR_4 = VAR_3->priv;

    if (VAR_4->prev_pts != VAR_0) {
        int64_t VAR_5 = VAR_2->pts - VAR_4->prev_pts;

        if (VAR_4->delta == VAR_0) {
            VAR_4->delta = VAR_5;
            VAR_4->min_delta = VAR_5;
            VAR_4->max_delta = VAR_5;
        }

        if (VAR_4->delta != VAR_5) {
            VAR_4->vfr++;
            VAR_4->delta = VAR_5;
            VAR_4->min_delta = FUNC_1(VAR_5, VAR_4->min_delta);
            VAR_4->max_delta = FUNC_0(VAR_5, VAR_4->max_delta);
            VAR_4->avg_delta += VAR_5;
        } else {
            VAR_4->cfr++;
        }
    }

    VAR_4->prev_pts = VAR_2->pts;

    return FUNC_2(VAR_3->outputs[0], VAR_2);
}
