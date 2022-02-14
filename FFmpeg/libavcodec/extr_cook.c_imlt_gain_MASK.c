
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__* now; } ;
typedef TYPE_1__ cook_gains ;
struct TYPE_11__ {int (* imdct_calc ) (TYPE_6__*,float*,float*) ;} ;
struct TYPE_10__ {float* mono_mdct_output; int samples_per_channel; int gain_size_factor; int (* interpolate ) (TYPE_2__*,float*,scalar_t__,scalar_t__) ;int (* imlt_window ) (TYPE_2__*,float*,TYPE_1__*,float*) ;TYPE_6__ mdct_ctx; } ;
typedef TYPE_2__ COOKContext ;


 int FUNC_0 (float*,float*,int) ;
 int FUNC_1 (TYPE_6__*,float*,float*) ;
 int FUNC_2 (TYPE_2__*,float*,TYPE_1__*,float*) ;
 int FUNC_3 (TYPE_2__*,float*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_4(COOKContext *VAR_0, float *VAR_1,
                      cook_gains *VAR_2, float *VAR_3)
{
    float *VAR_4 = VAR_0->mono_mdct_output;
    float *VAR_5 = VAR_0->mono_mdct_output + VAR_0->samples_per_channel;
    int VAR_6;


    VAR_0->mdct_ctx.imdct_calc(&VAR_0->mdct_ctx, VAR_0->mono_mdct_output, VAR_1);

    VAR_0->imlt_window(VAR_0, VAR_5, VAR_2, VAR_3);


    for (VAR_6 = 0; VAR_6 < 8; VAR_6++)
        if (VAR_2->now[VAR_6] || VAR_2->now[VAR_6 + 1])
            VAR_0->interpolate(VAR_0, &VAR_5[VAR_0->gain_size_factor * VAR_6],
                           VAR_2->now[VAR_6], VAR_2->now[VAR_6 + 1]);


    FUNC_0(VAR_3, VAR_4,
           VAR_0->samples_per_channel * sizeof(*VAR_3));
}
