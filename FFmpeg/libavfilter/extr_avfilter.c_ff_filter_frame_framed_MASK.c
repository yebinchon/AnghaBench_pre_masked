
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int is_disabled; TYPE_1__* filter; } ;
struct TYPE_13__ {int (* filter_frame ) (TYPE_2__*,int *) ;scalar_t__ needs_writable; } ;
struct TYPE_12__ {int frame_count_out; TYPE_3__* dstpad; TYPE_5__* dst; } ;
struct TYPE_11__ {int flags; } ;
typedef int AVFrame ;
typedef TYPE_3__ AVFilterPad ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int VAR_0 ;
 int FUNC_0 (int **) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_2__*,int **) ;
 int FUNC_4 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_5(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    int (*VAR_3)(AVFilterLink *, AVFrame *);
    AVFilterContext *VAR_4 = VAR_1->dst;
    AVFilterPad *VAR_5 = VAR_1->dstpad;
    int VAR_6;

    if (!(VAR_3 = VAR_5->filter_frame))
        VAR_3 = FUNC_1;

    if (VAR_5->needs_writable) {
        VAR_6 = FUNC_3(VAR_1, &VAR_2);
        if (VAR_6 < 0)
            goto fail;
    }

    FUNC_4(VAR_1, VAR_2);
    VAR_4->is_disabled = !FUNC_2(VAR_1, VAR_2);

    if (VAR_4->is_disabled &&
        (VAR_4->filter->flags & VAR_0))
        VAR_3 = FUNC_1;
    VAR_6 = VAR_3(VAR_1, VAR_2);
    VAR_1->frame_count_out++;
    return VAR_6;

fail:
    FUNC_0(&VAR_2);
    return VAR_6;
}
