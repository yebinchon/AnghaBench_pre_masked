
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_10__ ;


struct TYPE_22__ {TYPE_10__* out; TYPE_2__* cur; TYPE_2__* prev; TYPE_2__* next; scalar_t__ deint; int current_field; scalar_t__ frame_pending; } ;
typedef TYPE_1__ YADIFContext ;
struct TYPE_25__ {int * outputs; scalar_t__ is_disabled; TYPE_1__* priv; } ;
struct TYPE_24__ {int h; int w; TYPE_4__* dst; } ;
struct TYPE_23__ {scalar_t__ repeat_pict; int interlaced_frame; } ;
struct TYPE_21__ {int pts; scalar_t__ interlaced_frame; } ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*) ;
 void* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_10__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_2__**) ;
 int FUNC_5 (TYPE_4__*,int ,char*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_7 (int ,TYPE_10__*) ;
 TYPE_10__* FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_10 (TYPE_4__*,int) ;

int FUNC_11(AVFilterLink *VAR_5, AVFrame *VAR_6)
{
    AVFilterContext *VAR_7 = VAR_5->dst;
    YADIFContext *VAR_8 = VAR_7->priv;

    FUNC_1(VAR_6);

    if (VAR_8->frame_pending)
        FUNC_10(VAR_7, 1);

    if (VAR_8->prev)
        FUNC_4(&VAR_8->prev);
    VAR_8->prev = VAR_8->cur;
    VAR_8->cur = VAR_8->next;
    VAR_8->next = VAR_6;

    if (!VAR_8->cur) {
        VAR_8->cur = FUNC_2(VAR_8->next);
        if (!VAR_8->cur)
            return FUNC_0(VAR_3);
        VAR_8->current_field = VAR_4;
    }

    if (FUNC_6(VAR_8, VAR_8->next, VAR_8->cur)) {
        FUNC_5(VAR_7, VAR_1, "Reallocating frame due to differing stride\n");
        FUNC_9(VAR_5, VAR_8->next);
    }
    if (FUNC_6(VAR_8, VAR_8->next, VAR_8->cur))
        FUNC_9(VAR_5, VAR_8->cur);
    if (VAR_8->prev && FUNC_6(VAR_8, VAR_8->next, VAR_8->prev))
        FUNC_9(VAR_5, VAR_8->prev);
    if (FUNC_6(VAR_8, VAR_8->next, VAR_8->cur) || (VAR_8->prev && FUNC_6(VAR_8, VAR_8->next, VAR_8->prev))) {
        FUNC_5(VAR_7, VAR_0, "Failed to reallocate frame\n");
        return -1;
    }

    if (!VAR_8->prev)
        return 0;

    if ((VAR_8->deint && !VAR_8->cur->interlaced_frame) ||
        VAR_7->is_disabled ||
        (VAR_8->deint && !VAR_8->prev->interlaced_frame && VAR_8->prev->repeat_pict) ||
        (VAR_8->deint && !VAR_8->next->interlaced_frame && VAR_8->next->repeat_pict)
    ) {
        VAR_8->out = FUNC_2(VAR_8->cur);
        if (!VAR_8->out)
            return FUNC_0(VAR_3);

        FUNC_4(&VAR_8->prev);
        if (VAR_8->out->pts != VAR_2)
            VAR_8->out->pts *= 2;
        return FUNC_7(VAR_7->outputs[0], VAR_8->out);
    }

    VAR_8->out = FUNC_8(VAR_7->outputs[0], VAR_5->w, VAR_5->h);
    if (!VAR_8->out)
        return FUNC_0(VAR_3);

    FUNC_3(VAR_8->out, VAR_8->cur);
    VAR_8->out->interlaced_frame = 0;

    if (VAR_8->out->pts != VAR_2)
        VAR_8->out->pts *= 2;

    return FUNC_10(VAR_7, 0);
}
