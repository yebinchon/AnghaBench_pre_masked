
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_12__ ;


typedef scalar_t__ ff_idet_filter_func ;
struct TYPE_23__ {int * outputs; TYPE_1__** inputs; TYPE_3__* priv; } ;
struct TYPE_22__ {scalar_t__ w; scalar_t__ h; scalar_t__ format; TYPE_6__* dst; } ;
struct TYPE_21__ {scalar_t__ width; scalar_t__ height; scalar_t__ format; scalar_t__ interlaced_frame; } ;
struct TYPE_20__ {int analyze_interlaced_flag; int analyze_interlaced_flag_done; scalar_t__ interlaced_flag_accuracy; scalar_t__ last_type; TYPE_4__* cur; TYPE_4__* next; scalar_t__ filter_line; TYPE_12__* csp; TYPE_4__* prev; } ;
struct TYPE_19__ {int depth; } ;
struct TYPE_18__ {scalar_t__ format; scalar_t__ w; scalar_t__ h; } ;
struct TYPE_17__ {TYPE_2__* comp; } ;
typedef TYPE_3__ IDETContext ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVFilterLink ;
typedef TYPE_6__ AVFilterContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_4__* FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__**) ;
 int FUNC_3 (TYPE_6__*,int ,char*,scalar_t__) ;
 TYPE_12__* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,TYPE_4__*) ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (TYPE_3__*,int) ;
 int FUNC_7 (TYPE_6__*) ;

__attribute__((used)) static int FUNC_8(AVFilterLink *VAR_6, AVFrame *VAR_7)
{
    AVFilterContext *VAR_8 = VAR_6->dst;
    IDETContext *VAR_9 = VAR_8->priv;



    if (VAR_9->analyze_interlaced_flag &&
        !VAR_7->interlaced_frame &&
        !VAR_9->next) {
        return FUNC_5(VAR_8->outputs[0], VAR_7);
    }
    if (VAR_9->analyze_interlaced_flag_done) {
        if (VAR_7->interlaced_frame && VAR_9->interlaced_flag_accuracy < 0)
            VAR_7->interlaced_frame = 0;
        return FUNC_5(VAR_8->outputs[0], VAR_7);
    }

    FUNC_2(&VAR_9->prev);

    if( VAR_7->width != VAR_6->w
       || VAR_7->height != VAR_6->h
       || VAR_7->format != VAR_6->format) {
        VAR_6->dst->inputs[0]->format = VAR_7->format;
        VAR_6->dst->inputs[0]->w = VAR_7->width;
        VAR_6->dst->inputs[0]->h = VAR_7->height;

        FUNC_2(&VAR_9->cur );
        FUNC_2(&VAR_9->next);
    }

    VAR_9->prev = VAR_9->cur;
    VAR_9->cur = VAR_9->next;
    VAR_9->next = VAR_7;

    if (!VAR_9->cur &&
        !(VAR_9->cur = FUNC_1(VAR_9->next)))
        return FUNC_0(VAR_2);

    if (!VAR_9->prev)
        return 0;

    if (!VAR_9->csp)
        VAR_9->csp = FUNC_4(VAR_6->format);
    if (VAR_9->csp->comp[0].depth > 8){
        VAR_9->filter_line = (ff_idet_filter_func)VAR_5;
        if (VAR_0)
            FUNC_6(VAR_9, 1);
    }

    if (VAR_9->analyze_interlaced_flag) {
        if (VAR_9->cur->interlaced_frame) {
            VAR_9->cur->interlaced_frame = 0;
            FUNC_7(VAR_8);
            if (VAR_9->last_type == VAR_3) {
                VAR_9->interlaced_flag_accuracy --;
                VAR_9->analyze_interlaced_flag --;
            } else if (VAR_9->last_type != VAR_4) {
                VAR_9->interlaced_flag_accuracy ++;
                VAR_9->analyze_interlaced_flag --;
            }
            if (VAR_9->analyze_interlaced_flag == 1) {
                FUNC_5(VAR_8->outputs[0], FUNC_1(VAR_9->cur));

                if (VAR_9->next->interlaced_frame && VAR_9->interlaced_flag_accuracy < 0)
                    VAR_9->next->interlaced_frame = 0;
                VAR_9->analyze_interlaced_flag_done = 1;
                FUNC_3(VAR_8, VAR_1, "Final flag accuracy %d\n", VAR_9->interlaced_flag_accuracy);
                return FUNC_5(VAR_8->outputs[0], FUNC_1(VAR_9->next));
            }
        }
    } else {
        FUNC_7(VAR_8);
    }

    return FUNC_5(VAR_8->outputs[0], FUNC_1(VAR_9->cur));
}
