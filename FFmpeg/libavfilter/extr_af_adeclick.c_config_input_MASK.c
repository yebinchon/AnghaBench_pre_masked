
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ extended_data; } ;
struct TYPE_11__ {TYPE_2__* priv; } ;
struct TYPE_10__ {int sample_rate; int channels; int format; TYPE_4__* dst; } ;
struct TYPE_9__ {int window_size; int w; int ar_order; int ar; int nb_burst_samples; int burst; int hop_size; int overlap; int* window_func_lut; int overlap_skip; int nb_channels; TYPE_1__* chan; TYPE_7__* in; int fifo; scalar_t__ method; TYPE_7__* is; TYPE_7__* buffer; TYPE_7__* out; int pts; } ;
struct TYPE_8__ {void* tmp; void* acorrelation; void* interpolated; void* index; void* click; void* detection; void* acoefficients; void* auxiliary; } ;
typedef TYPE_1__ DeclickChannel ;
typedef TYPE_2__ AudioDeclickContext ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,void**,int) ;
 void* FUNC_4 (int,int) ;
 int FUNC_5 (TYPE_7__**) ;
 void* FUNC_6 (TYPE_3__*,int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(AVFilterLink *VAR_5)
{
    AVFilterContext *VAR_6 = VAR_5->dst;
    AudioDeclickContext *VAR_7 = VAR_6->priv;
    int VAR_8;

    VAR_7->pts = VAR_0;
    VAR_7->window_size = VAR_5->sample_rate * VAR_7->w / 1000.;
    if (VAR_7->window_size < 100)
        return FUNC_0(VAR_1);
    VAR_7->ar_order = FUNC_1(VAR_7->window_size * VAR_7->ar / 100., 1);
    VAR_7->nb_burst_samples = VAR_7->window_size * VAR_7->burst / 1000.;
    VAR_7->hop_size = VAR_7->window_size * (1. - (VAR_7->overlap / 100.));
    if (VAR_7->hop_size < 1)
        return FUNC_0(VAR_1);

    VAR_7->window_func_lut = FUNC_4(VAR_7->window_size, sizeof(*VAR_7->window_func_lut));
    if (!VAR_7->window_func_lut)
        return FUNC_0(VAR_2);
    for (VAR_8 = 0; VAR_8 < VAR_7->window_size; VAR_8++)
        VAR_7->window_func_lut[VAR_8] = FUNC_7(VAR_3 * VAR_8 / VAR_7->window_size) *
                                (1. - (VAR_7->overlap / 100.)) * VAR_4;

    FUNC_5(&VAR_7->in);
    FUNC_5(&VAR_7->out);
    FUNC_5(&VAR_7->buffer);
    FUNC_5(&VAR_7->is);
    VAR_7->in = FUNC_6(VAR_5, VAR_7->window_size);
    VAR_7->out = FUNC_6(VAR_5, VAR_7->window_size);
    VAR_7->buffer = FUNC_6(VAR_5, VAR_7->window_size * 2);
    VAR_7->is = FUNC_6(VAR_5, VAR_7->window_size);
    if (!VAR_7->in || !VAR_7->out || !VAR_7->buffer || !VAR_7->is)
        return FUNC_0(VAR_2);

    VAR_7->fifo = FUNC_2(VAR_5->format, VAR_5->channels, VAR_7->window_size);
    if (!VAR_7->fifo)
        return FUNC_0(VAR_2);
    VAR_7->overlap_skip = VAR_7->method ? (VAR_7->window_size - VAR_7->hop_size) / 2 : 0;
    if (VAR_7->overlap_skip > 0) {
        FUNC_3(VAR_7->fifo, (void **)VAR_7->in->extended_data,
                            VAR_7->overlap_skip);
    }

    VAR_7->nb_channels = VAR_5->channels;
    VAR_7->chan = FUNC_4(VAR_5->channels, sizeof(*VAR_7->chan));
    if (!VAR_7->chan)
        return FUNC_0(VAR_2);

    for (VAR_8 = 0; VAR_8 < VAR_5->channels; VAR_8++) {
        DeclickChannel *VAR_9 = &VAR_7->chan[VAR_8];

        VAR_9->detection = FUNC_4(VAR_7->window_size, sizeof(*VAR_9->detection));
        VAR_9->auxiliary = FUNC_4(VAR_7->ar_order + 1, sizeof(*VAR_9->auxiliary));
        VAR_9->acoefficients = FUNC_4(VAR_7->ar_order + 1, sizeof(*VAR_9->acoefficients));
        VAR_9->acorrelation = FUNC_4(VAR_7->ar_order + 1, sizeof(*VAR_9->acorrelation));
        VAR_9->tmp = FUNC_4(VAR_7->ar_order, sizeof(*VAR_9->tmp));
        VAR_9->click = FUNC_4(VAR_7->window_size, sizeof(*VAR_9->click));
        VAR_9->index = FUNC_4(VAR_7->window_size, sizeof(*VAR_9->index));
        VAR_9->interpolated = FUNC_4(VAR_7->window_size, sizeof(*VAR_9->interpolated));
        if (!VAR_9->auxiliary || !VAR_9->acoefficients || !VAR_9->detection || !VAR_9->click ||
            !VAR_9->index || !VAR_9->interpolated || !VAR_9->acorrelation || !VAR_9->tmp)
            return FUNC_0(VAR_2);
    }

    return 0;
}
