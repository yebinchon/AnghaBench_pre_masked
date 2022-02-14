
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_17__ {int * inputs; scalar_t__ nb_inputs; TYPE_2__* priv; } ;
struct TYPE_16__ {TYPE_5__* src; } ;
struct TYPE_15__ {int pts; int sample_rate; scalar_t__* extended_data; } ;
struct TYPE_14__ {scalar_t__ duration; int nb_outputs; int nb_outputcontrols; scalar_t__ nb_samples; int pts; int sample_rate; int octlv; int ocmap; int * handles; TYPE_1__* desc; int * opmap; } ;
struct TYPE_13__ {int (* run ) (int ,scalar_t__) ;int (* connect_port ) (int ,int ,int *) ;} ;
typedef int LADSPA_Data ;
typedef TYPE_2__ LADSPAContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*) ;
 TYPE_3__* FUNC_3 (TYPE_4__*,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_5__*,int ,TYPE_2__*,int,int ,int ,int) ;
 int FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_8(AVFilterLink *VAR_4)
{
    AVFilterContext *VAR_5 = VAR_4->src;
    LADSPAContext *VAR_6 = VAR_5->priv;
    AVFrame *VAR_7;
    int64_t VAR_8;
    int VAR_9;

    if (VAR_5->nb_inputs)
        return FUNC_4(VAR_5->inputs[0]);

    VAR_8 = FUNC_1(VAR_6->pts, VAR_2, VAR_6->sample_rate);
    if (VAR_6->duration >= 0 && VAR_8 >= VAR_6->duration)
        return VAR_0;

    VAR_7 = FUNC_3(VAR_4, VAR_6->nb_samples);
    if (!VAR_7)
        return FUNC_0(VAR_3);

    for (VAR_9 = 0; VAR_9 < VAR_6->nb_outputs; VAR_9++)
        VAR_6->desc->connect_port(VAR_6->handles[0], VAR_6->opmap[VAR_9],
                (LADSPA_Data*)VAR_7->extended_data[VAR_9]);

    VAR_6->desc->run(VAR_6->handles[0], VAR_6->nb_samples);

    for (VAR_9 = 0; VAR_9 < VAR_6->nb_outputcontrols; VAR_9++)
        FUNC_5(VAR_5, VAR_1, VAR_6, VAR_9, VAR_6->ocmap, VAR_6->octlv, 1);

    VAR_7->sample_rate = VAR_6->sample_rate;
    VAR_7->pts = VAR_6->pts;
    VAR_6->pts += VAR_6->nb_samples;

    return FUNC_2(VAR_4, VAR_7);
}
