
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_20__ {int * outputs; TYPE_2__* priv; } ;
struct TYPE_19__ {TYPE_5__* dst; } ;
struct TYPE_18__ {int channels; int nb_samples; scalar_t__* extended_data; } ;
struct TYPE_17__ {int nb_inputs; int nb_handles; int nb_outputs; int nb_outputcontrols; int octlv; int ocmap; int * handles; TYPE_1__* desc; int * opmap; int * ipmap; } ;
struct TYPE_16__ {int Properties; int (* run ) (int ,int ) ;int (* connect_port ) (int ,int ,int *) ;} ;
typedef int LADSPA_Data ;
typedef TYPE_2__ LADSPAContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_3__**) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ,TYPE_3__*) ;
 TYPE_3__* FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_5__*,int ,TYPE_2__*,int,int ,int ,int) ;
 int FUNC_8 (int ,int ,int *) ;
 int FUNC_9 (int ,int ,int *) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static int FUNC_11(AVFilterLink *VAR_3, AVFrame *VAR_4)
{
    AVFilterContext *VAR_5 = VAR_3->dst;
    LADSPAContext *VAR_6 = VAR_5->priv;
    AVFrame *VAR_7;
    int VAR_8, VAR_9, VAR_10;

    FUNC_1(VAR_4->channels == (VAR_6->nb_inputs * VAR_6->nb_handles));

    if (!VAR_6->nb_outputs ||
        (FUNC_4(VAR_4) && VAR_6->nb_inputs == VAR_6->nb_outputs &&
        !(VAR_6->desc->Properties & VAR_2))) {
        VAR_7 = VAR_4;
    } else {
        VAR_7 = FUNC_6(VAR_5->outputs[0], VAR_4->nb_samples);
        if (!VAR_7) {
            FUNC_3(&VAR_4);
            return FUNC_0(VAR_1);
        }
        FUNC_2(VAR_7, VAR_4);
    }

    FUNC_1(!VAR_6->nb_outputs || VAR_7->channels == (VAR_6->nb_outputs * VAR_6->nb_handles));

    for (VAR_9 = 0; VAR_9 < VAR_6->nb_handles; VAR_9++) {
        for (VAR_8 = 0; VAR_8 < VAR_6->nb_inputs; VAR_8++) {
            VAR_10 = VAR_6->nb_handles > 1 ? VAR_9 : VAR_8;
            VAR_6->desc->connect_port(VAR_6->handles[VAR_9], VAR_6->ipmap[VAR_8],
                                  (LADSPA_Data*)VAR_4->extended_data[VAR_10]);
        }

        for (VAR_8 = 0; VAR_8 < VAR_6->nb_outputs; VAR_8++) {
            VAR_10 = VAR_6->nb_handles > 1 ? VAR_9 : VAR_8;
            VAR_6->desc->connect_port(VAR_6->handles[VAR_9], VAR_6->opmap[VAR_8],
                                  (LADSPA_Data*)VAR_7->extended_data[VAR_10]);
        }

        VAR_6->desc->run(VAR_6->handles[VAR_9], VAR_4->nb_samples);
    }

    for (VAR_8 = 0; VAR_8 < VAR_6->nb_outputcontrols; VAR_8++)
        FUNC_7(VAR_5, VAR_0, VAR_6, VAR_8, VAR_6->ocmap, VAR_6->octlv, 1);

    if (VAR_7 != VAR_4)
        FUNC_3(&VAR_4);

    return FUNC_5(VAR_5->outputs[0], VAR_7);
}
