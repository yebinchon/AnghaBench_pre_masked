
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* priv; } ;
struct TYPE_6__ {int channels; int sample_rate; TYPE_3__* dst; } ;
struct TYPE_5__ {int transients; int detector; int phase; int window; int smoothing; int formant; int opitch; int channels; int tempo; int first_pts; scalar_t__ rbs; int nb_samples; int pitch; } ;
typedef TYPE_1__ RubberBandContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ,int,int,int ) ;

__attribute__((used)) static int FUNC_4(AVFilterLink *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_3->dst;
    RubberBandContext *VAR_5 = VAR_4->priv;
    int VAR_6 = VAR_5->transients|VAR_5->detector|VAR_5->phase|VAR_5->window|
               VAR_5->smoothing|VAR_5->formant|VAR_5->opitch|VAR_5->channels|
               VAR_2;

    if (VAR_5->rbs)
        FUNC_1(VAR_5->rbs);
    VAR_5->rbs = FUNC_3(VAR_3->sample_rate, VAR_3->channels, VAR_6, 1. / VAR_5->tempo, VAR_5->pitch);
    if (!VAR_5->rbs)
        return FUNC_0(VAR_1);

    VAR_5->nb_samples = FUNC_2(VAR_5->rbs);
    VAR_5->first_pts = VAR_0;

    return 0;
}
