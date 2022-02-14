
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_21__ {TYPE_2__* internal; TYPE_3__* priv; TYPE_5__** outputs; } ;
struct TYPE_20__ {int channels; TYPE_6__* dst; } ;
struct TYPE_19__ {scalar_t__ pts; scalar_t__ nb_samples; scalar_t__ extended_data; } ;
struct TYPE_18__ {scalar_t__ pts; scalar_t__ offset; int H; int N; scalar_t__ eof_left; int fifo; TYPE_1__* in; } ;
struct TYPE_17__ {int (* execute ) (TYPE_6__*,int ,TYPE_4__*,int *,int ) ;} ;
struct TYPE_16__ {scalar_t__ extended_data; } ;
typedef TYPE_3__ AudioNLMeansContext ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVFilterLink ;
typedef TYPE_6__ AVFilterContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,void**,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,void**,scalar_t__) ;
 int FUNC_6 (TYPE_4__**) ;
 int FUNC_7 (TYPE_5__*,TYPE_4__*) ;
 TYPE_4__* FUNC_8 (TYPE_5__*,int) ;
 int VAR_2 ;
 int FUNC_9 (TYPE_6__*,int ,TYPE_4__*,int *,int ) ;

__attribute__((used)) static int FUNC_10(AVFilterLink *VAR_3, AVFrame *VAR_4)
{
    AVFilterContext *VAR_5 = VAR_3->dst;
    AVFilterLink *VAR_6 = VAR_5->outputs[0];
    AudioNLMeansContext *VAR_7 = VAR_5->priv;
    AVFrame *VAR_8 = ((void*)0);
    int VAR_9, VAR_10, VAR_11;

    if (VAR_7->pts == VAR_0)
        VAR_7->pts = VAR_4->pts;

    VAR_11 = FUNC_5(VAR_7->fifo, (void **)VAR_4->extended_data,
                              VAR_4->nb_samples);
    FUNC_6(&VAR_4);

    VAR_7->offset = 0;
    VAR_9 = FUNC_4(VAR_7->fifo);
    VAR_10 = (VAR_9 / VAR_7->H) * VAR_7->H;

    if (VAR_10 >= VAR_7->H && VAR_9 >= VAR_7->N) {
        VAR_8 = FUNC_8(VAR_6, VAR_10);
        if (!VAR_8)
            return FUNC_0(VAR_1);
    }

    while (VAR_9 >= VAR_7->N) {
        VAR_11 = FUNC_3(VAR_7->fifo, (void **)VAR_7->in->extended_data, VAR_7->N);
        if (VAR_11 < 0)
            break;

        VAR_5->internal->execute(VAR_5, VAR_2, VAR_8, ((void*)0), VAR_3->channels);

        FUNC_2(VAR_7->fifo, VAR_7->H);

        VAR_7->offset += VAR_7->H;
        VAR_9 -= VAR_7->H;
    }

    if (VAR_8) {
        VAR_8->pts = VAR_7->pts;
        VAR_8->nb_samples = VAR_7->offset;
        if (VAR_7->eof_left >= 0) {
            VAR_8->nb_samples = FUNC_1(VAR_7->eof_left, VAR_7->offset);
            VAR_7->eof_left -= VAR_8->nb_samples;
        }
        VAR_7->pts += VAR_7->offset;

        return FUNC_7(VAR_6, VAR_8);
    }

    return VAR_11;
}
