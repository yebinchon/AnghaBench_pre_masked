
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* prev; TYPE_2__* cur; scalar_t__ deint; TYPE_2__* next; } ;
typedef TYPE_1__ W3FDIFContext ;
struct TYPE_14__ {int * outputs; scalar_t__ is_disabled; TYPE_1__* priv; } ;
struct TYPE_13__ {TYPE_4__* dst; } ;
struct TYPE_12__ {int pts; int interlaced_frame; } ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__**) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 int FUNC_4 (TYPE_4__*,int) ;

__attribute__((used)) static int FUNC_5(AVFilterLink *VAR_2, AVFrame *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_2->dst;
    W3FDIFContext *VAR_5 = VAR_4->priv;
    int VAR_6;

    FUNC_2(&VAR_5->prev);
    VAR_5->prev = VAR_5->cur;
    VAR_5->cur = VAR_5->next;
    VAR_5->next = VAR_3;

    if (!VAR_5->cur) {
        VAR_5->cur = FUNC_1(VAR_5->next);
        if (!VAR_5->cur)
            return FUNC_0(VAR_1);
    }

    if ((VAR_5->deint && !VAR_5->cur->interlaced_frame) || VAR_4->is_disabled) {
        AVFrame *VAR_7 = FUNC_1(VAR_5->cur);
        if (!VAR_7)
            return FUNC_0(VAR_1);

        FUNC_2(&VAR_5->prev);
        if (VAR_7->pts != VAR_0)
            VAR_7->pts *= 2;
        return FUNC_3(VAR_4->outputs[0], VAR_7);
    }

    if (!VAR_5->prev)
        return 0;

    VAR_6 = FUNC_4(VAR_4, 0);
    if (VAR_6 < 0)
        return VAR_6;

    return FUNC_4(VAR_4, 1);
}
