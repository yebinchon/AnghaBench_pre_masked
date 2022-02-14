
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
struct TYPE_11__ {int pts; int * data; } ;
struct TYPE_10__ {float* coeffs; int n; int pts; int nb_samples; } ;
typedef TYPE_1__ SincContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 TYPE_2__* FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (int ,float const*,int) ;

__attribute__((used)) static int FUNC_5(AVFilterLink *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_2->src;
    SincContext *VAR_4 = VAR_3->priv;
    const float *VAR_5 = VAR_4->coeffs;
    AVFrame *VAR_6 = ((void*)0);
    int VAR_7;

    VAR_7 = FUNC_1(VAR_4->nb_samples, VAR_4->n - VAR_4->pts);
    if (VAR_7 <= 0)
        return VAR_0;

    if (!(VAR_6 = FUNC_3(VAR_2, VAR_7)))
        return FUNC_0(VAR_1);

    FUNC_4(VAR_6->data[0], VAR_5 + VAR_4->pts, VAR_7 * sizeof(float));

    VAR_6->pts = VAR_4->pts;
    VAR_4->pts += VAR_7;

    return FUNC_2(VAR_2, VAR_6);
}
