
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int (* activate ) (int ) ;int (* connect_port ) (int ,int ,int *) ;int (* instantiate ) (TYPE_4__*,int ) ;} ;
struct TYPE_10__ {TYPE_1__* priv; } ;
struct TYPE_9__ {int channels; int sample_rate; } ;
struct TYPE_8__ {int nb_handles; int nb_inputs; int nb_outputs; int nb_inputcontrols; int nb_outputcontrols; int * handles; TYPE_4__* desc; int * octlv; int * ocmap; int * ictlv; int * icmap; } ;
typedef TYPE_1__ LADSPAContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_3__*,int ,char*,...) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(AVFilterContext *VAR_4, AVFilterLink *VAR_5)
{
    LADSPAContext *VAR_6 = VAR_4->priv;
    int VAR_7, VAR_8;

    VAR_6->nb_handles = VAR_6->nb_inputs == 1 && VAR_6->nb_outputs == 1 ? VAR_5->channels : 1;
    VAR_6->handles = FUNC_1(VAR_6->nb_handles, sizeof(*VAR_6->handles));
    if (!VAR_6->handles)
        return FUNC_0(VAR_3);

    for (VAR_7 = 0; VAR_7 < VAR_6->nb_handles; VAR_7++) {
        VAR_6->handles[VAR_7] = VAR_6->desc->instantiate(VAR_6->desc, VAR_5->sample_rate);
        if (!VAR_6->handles[VAR_7]) {
            FUNC_2(VAR_4, VAR_2, "Could not instantiate plugin.\n");
            return VAR_0;
        }


        for (VAR_8 = 0; VAR_8 < VAR_6->nb_inputcontrols; VAR_8++)
            VAR_6->desc->connect_port(VAR_6->handles[VAR_7], VAR_6->icmap[VAR_8], VAR_6->ictlv + VAR_8);


        for (VAR_8 = 0; VAR_8 < VAR_6->nb_outputcontrols; VAR_8++)
            VAR_6->desc->connect_port(VAR_6->handles[VAR_7], VAR_6->ocmap[VAR_8], &VAR_6->octlv[VAR_8]);

        if (VAR_6->desc->activate)
            VAR_6->desc->activate(VAR_6->handles[VAR_7]);
    }

    FUNC_2(VAR_4, VAR_1, "handles: %d\n", VAR_6->nb_handles);

    return 0;
}
