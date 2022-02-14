
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


typedef scalar_t__ int64_t ;
struct TYPE_16__ {int parity; scalar_t__ current_field; int frame_pending; int mode; TYPE_6__* out; TYPE_1__* next; TYPE_13__* cur; int (* filter ) (TYPE_4__*,TYPE_6__*,int,int) ;} ;
typedef TYPE_2__ YADIFContext ;
struct TYPE_19__ {scalar_t__ pts; scalar_t__ interlaced_frame; } ;
struct TYPE_18__ {TYPE_3__** outputs; TYPE_2__* priv; } ;
struct TYPE_17__ {int h; int w; } ;
struct TYPE_15__ {scalar_t__ pts; } ;
struct TYPE_14__ {int top_field_first; scalar_t__ pts; scalar_t__ interlaced_frame; } ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_6__*,TYPE_13__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_6__*) ;
 TYPE_6__* FUNC_3 (TYPE_3__*,int ,int ) ;
 int FUNC_4 (TYPE_4__*,TYPE_6__*,int,int) ;

__attribute__((used)) static int FUNC_5(AVFilterContext *VAR_4, int VAR_5)
{
    YADIFContext *VAR_6 = VAR_4->priv;
    AVFilterLink *VAR_7 = VAR_4->outputs[0];
    int VAR_8, VAR_9;

    if (VAR_6->parity == -1) {
        VAR_8 = VAR_6->cur->interlaced_frame ?
              VAR_6->cur->top_field_first : 1;
    } else {
        VAR_8 = VAR_6->parity ^ 1;
    }

    if (VAR_5) {
        VAR_6->out = FUNC_3(VAR_7, VAR_7->w, VAR_7->h);
        if (!VAR_6->out)
            return FUNC_0(VAR_1);

        FUNC_1(VAR_6->out, VAR_6->cur);
        VAR_6->out->interlaced_frame = 0;
        if (VAR_6->current_field == VAR_2)
            VAR_6->current_field = VAR_3;
    }

    VAR_6->filter(VAR_4, VAR_6->out, VAR_8 ^ !VAR_5, VAR_8);

    if (VAR_5) {
        int64_t VAR_10 = VAR_6->cur->pts;
        int64_t VAR_11 = VAR_6->next->pts;

        if (VAR_11 != VAR_0 && VAR_10 != VAR_0) {
            VAR_6->out->pts = VAR_10 + VAR_11;
        } else {
            VAR_6->out->pts = VAR_0;
        }
    }
    VAR_9 = FUNC_2(VAR_4->outputs[0], VAR_6->out);

    VAR_6->frame_pending = (VAR_6->mode&1) && !VAR_5;
    return VAR_9;
}
