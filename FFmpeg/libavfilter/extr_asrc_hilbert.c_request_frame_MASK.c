
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {TYPE_1__* priv; } ;
struct TYPE_12__ {TYPE_4__* src; } ;
struct TYPE_11__ {scalar_t__ pts; int * data; } ;
struct TYPE_10__ {scalar_t__ pts; scalar_t__ taps; scalar_t__ nb_taps; int nb_samples; } ;
typedef TYPE_1__ HilbertContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 TYPE_2__* FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (int ,scalar_t__,int) ;

__attribute__((used)) static int FUNC_5(AVFilterLink *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_2->src;
    HilbertContext *VAR_4 = VAR_3->priv;
    AVFrame *VAR_5;
    int VAR_6;

    VAR_6 = FUNC_1(VAR_4->nb_samples, VAR_4->nb_taps - VAR_4->pts);
    if (!VAR_6)
        return VAR_0;

    if (!(VAR_5 = FUNC_3(VAR_2, VAR_6)))
        return FUNC_0(VAR_1);

    FUNC_4(VAR_5->data[0], VAR_4->taps + VAR_4->pts, VAR_6 * sizeof(float));

    VAR_5->pts = VAR_4->pts;
    VAR_4->pts += VAR_6;
    return FUNC_2(VAR_2, VAR_5);
}
