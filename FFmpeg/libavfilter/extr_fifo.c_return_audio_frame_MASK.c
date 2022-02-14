
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_25__ {int * inputs; TYPE_3__* priv; TYPE_5__** outputs; } ;
struct TYPE_24__ {scalar_t__ request_samples; int channels; int format; } ;
struct TYPE_23__ {scalar_t__ nb_samples; int extended_data; int pts; } ;
struct TYPE_21__ {TYPE_1__* next; } ;
struct TYPE_22__ {int allocated_samples; TYPE_4__* out; TYPE_2__ root; } ;
struct TYPE_20__ {TYPE_4__* frame; } ;
typedef TYPE_3__ FifoContext ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVFilterLink ;
typedef TYPE_6__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 TYPE_4__* FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__**) ;
 int FUNC_4 (TYPE_6__*,int ,char*) ;
 int FUNC_5 (int ,int ,scalar_t__,int ,int,int,int ) ;
 int FUNC_6 (int ,scalar_t__,scalar_t__,int,int ) ;
 int FUNC_7 (TYPE_5__*,TYPE_4__*,int) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_5__*,TYPE_4__*) ;
 TYPE_4__* FUNC_10 (TYPE_5__*,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_13(AVFilterContext *VAR_4)
{
    AVFilterLink *VAR_5 = VAR_4->outputs[0];
    FifoContext *VAR_6 = VAR_4->priv;
    AVFrame *VAR_7 = VAR_6->root.next ? VAR_6->root.next->frame : ((void*)0);
    AVFrame *VAR_8;
    int VAR_9;


    if (!VAR_7 && !VAR_6->out)
        return VAR_0;

    if (!VAR_6->out &&
        VAR_7->nb_samples >= VAR_5->request_samples &&
        FUNC_8(VAR_7) >= 32) {
        if (VAR_7->nb_samples == VAR_5->request_samples) {
            VAR_8 = VAR_7;
            FUNC_12(VAR_6);
        } else {
            VAR_8 = FUNC_2(VAR_7);
            if (!VAR_8)
                return FUNC_0(VAR_3);

            VAR_8->nb_samples = VAR_5->request_samples;
            FUNC_7(VAR_5, VAR_7, VAR_5->request_samples);
        }
    } else {
        int VAR_10 = VAR_5->channels;

        if (!VAR_6->out) {
            VAR_6->out = FUNC_10(VAR_5, VAR_5->request_samples);
            if (!VAR_6->out)
                return FUNC_0(VAR_3);

            VAR_6->out->nb_samples = 0;
            VAR_6->out->pts = VAR_7->pts;
            VAR_6->allocated_samples = VAR_5->request_samples;
        } else if (VAR_5->request_samples != VAR_6->allocated_samples) {
            FUNC_4(VAR_4, VAR_1, "request_samples changed before the "
                   "buffer was returned.\n");
            return FUNC_0(VAR_2);
        }

        while (VAR_6->out->nb_samples < VAR_6->allocated_samples) {
            int VAR_11;

            if (!VAR_6->root.next) {
                VAR_9 = FUNC_11(VAR_4->inputs[0]);
                if (VAR_9 == VAR_0) {
                    FUNC_6(VAR_6->out->extended_data,
                                           VAR_6->out->nb_samples,
                                           VAR_6->allocated_samples -
                                           VAR_6->out->nb_samples,
                                           VAR_10, VAR_5->format);
                    VAR_6->out->nb_samples = VAR_6->allocated_samples;
                    break;
                } else if (VAR_9 < 0)
                    return VAR_9;
                if (!VAR_6->root.next)
                    return 0;
            }
            VAR_7 = VAR_6->root.next->frame;

            VAR_11 = FUNC_1(VAR_6->allocated_samples - VAR_6->out->nb_samples,
                        VAR_7->nb_samples);

            FUNC_5(VAR_6->out->extended_data, VAR_7->extended_data,
                            VAR_6->out->nb_samples, 0, VAR_11, VAR_10,
                            VAR_5->format);
            VAR_6->out->nb_samples += VAR_11;

            if (VAR_11 == VAR_7->nb_samples) {
                FUNC_3(&VAR_7);
                FUNC_12(VAR_6);
            } else {
                FUNC_7(VAR_5, VAR_7, VAR_11);
            }
        }
        VAR_8 = VAR_6->out;
        VAR_6->out = ((void*)0);
    }
    return FUNC_9(VAR_5, VAR_8);
}
