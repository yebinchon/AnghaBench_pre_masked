
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_5__* hrtf; int fir; int neighborhood; int lookup; } ;
struct SOFAlizerContext {TYPE_3__ sofa; scalar_t__ interpolate; } ;
struct TYPE_8__ {float* values; } ;
struct TYPE_7__ {int elements; float* values; } ;
struct TYPE_11__ {int R; int N; TYPE_2__ DataIR; TYPE_1__ DataDelay; } ;
struct TYPE_10__ {struct SOFAlizerContext* priv; } ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (float*,float*,int) ;
 float* FUNC_2 (TYPE_5__*,float*,int,int*,int ,float*) ;
 int FUNC_3 (int ,float*) ;
 int* FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(AVFilterContext *VAR_1, float VAR_2, float VAR_3, float VAR_4,
                           float *VAR_5, float *VAR_6,
                           float *VAR_7, float *VAR_8)
{
    struct SOFAlizerContext *VAR_9 = VAR_1->priv;
    float VAR_10[3], VAR_11[2];
    float *VAR_12, *VAR_13;
    int VAR_14;
    int *VAR_15;
    float *VAR_16;

    VAR_10[0] = VAR_2, VAR_10[1] = VAR_3, VAR_10[2] = VAR_4;
    VAR_14 = FUNC_3(VAR_9->sofa.lookup, VAR_10);
    if (VAR_14 < 0)
        return FUNC_0(VAR_0);

    if (VAR_9->interpolate) {
        VAR_15 = FUNC_4(VAR_9->sofa.neighborhood, VAR_14);
        VAR_16 = FUNC_2(VAR_9->sofa.hrtf, VAR_10,
                                 VAR_14, VAR_15,
                                 VAR_9->sofa.fir, VAR_11);
    } else {
        if (VAR_9->sofa.hrtf->DataDelay.elements > VAR_9->sofa.hrtf->R) {
            VAR_11[0] = VAR_9->sofa.hrtf->DataDelay.values[VAR_14 * VAR_9->sofa.hrtf->R];
            VAR_11[1] = VAR_9->sofa.hrtf->DataDelay.values[VAR_14 * VAR_9->sofa.hrtf->R + 1];
        } else {
            VAR_11[0] = VAR_9->sofa.hrtf->DataDelay.values[0];
            VAR_11[1] = VAR_9->sofa.hrtf->DataDelay.values[1];
        }
        VAR_16 = VAR_9->sofa.hrtf->DataIR.values + VAR_14 * VAR_9->sofa.hrtf->N * VAR_9->sofa.hrtf->R;
    }

    *VAR_7 = VAR_11[0];
    *VAR_8 = VAR_11[1];

    VAR_12 = VAR_16;
    VAR_13 = VAR_16 + VAR_9->sofa.hrtf->N;

    FUNC_1(VAR_5, VAR_12, sizeof(float) * VAR_9->sofa.hrtf->N);
    FUNC_1(VAR_6, VAR_13, sizeof(float) * VAR_9->sofa.hrtf->N);

    return 0;
}
