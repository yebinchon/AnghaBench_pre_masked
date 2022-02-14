
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fscale; float w; scalar_t__ nb_freq; } ;
typedef TYPE_1__ ShowFreqsContext ;





 float FUNC_0 (float,int) ;

__attribute__((used)) static float FUNC_1(ShowFreqsContext *VAR_0, int VAR_1)
{
    switch (VAR_0->fscale) {
    case 130:
        return VAR_0->w/(float)VAR_0->nb_freq;
    case 129:
        return FUNC_0(VAR_0->w, (VAR_0->nb_freq-VAR_1-1)/(VAR_0->nb_freq-1.))-
               FUNC_0(VAR_0->w, (VAR_0->nb_freq-VAR_1-2)/(VAR_0->nb_freq-1.));
    case 128:
        return FUNC_0(VAR_0->w, (VAR_1+1)/(VAR_0->nb_freq-1.))-
               FUNC_0(VAR_0->w, VAR_1 /(VAR_0->nb_freq-1.));
    }

    return 1.;
}
