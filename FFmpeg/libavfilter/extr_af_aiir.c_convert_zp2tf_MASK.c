
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* priv; } ;
struct TYPE_7__ {TYPE_1__* iir; } ;
struct TYPE_6__ {int* nb_ab; double** ab; } ;
typedef TYPE_1__ IIRChannel ;
typedef TYPE_2__ AudioIIRContext ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 double* FUNC_1 (int,int) ;
 int FUNC_2 (double*) ;
 int FUNC_3 (TYPE_3__*,double*,int,double*) ;

__attribute__((used)) static int FUNC_4(AVFilterContext *VAR_1, int VAR_2)
{
    AudioIIRContext *VAR_3 = VAR_1->priv;
    int VAR_4, VAR_5, VAR_6, VAR_7 = 0;

    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
        IIRChannel *VAR_8 = &VAR_3->iir[VAR_4];
        double *VAR_9, *VAR_10;

        VAR_9 = FUNC_1((VAR_8->nb_ab[0] + 1) * 2, sizeof(*VAR_9));
        VAR_10 = FUNC_1((VAR_8->nb_ab[1] + 1) * 2, sizeof(*VAR_10));
        if (!VAR_9 || !VAR_10) {
            VAR_7 = FUNC_0(VAR_0);
            goto fail;
        }

        VAR_7 = FUNC_3(VAR_1, VAR_8->ab[0], VAR_8->nb_ab[0], VAR_10);
        if (VAR_7 < 0) {
            goto fail;
        }

        VAR_7 = FUNC_3(VAR_1, VAR_8->ab[1], VAR_8->nb_ab[1], VAR_9);
        if (VAR_7 < 0) {
            goto fail;
        }

        for (VAR_6 = 0, VAR_5 = VAR_8->nb_ab[1]; VAR_5 >= 0; VAR_6++, VAR_5--) {
            VAR_8->ab[1][VAR_6] = VAR_9[2 * VAR_5];
        }
        VAR_8->nb_ab[1]++;

        for (VAR_6 = 0, VAR_5 = VAR_8->nb_ab[0]; VAR_5 >= 0; VAR_6++, VAR_5--) {
            VAR_8->ab[0][VAR_6] = VAR_10[2 * VAR_5];
        }
        VAR_8->nb_ab[0]++;

fail:
        FUNC_2(VAR_9);
        FUNC_2(VAR_10);
        if (VAR_7 < 0)
            break;
    }

    return VAR_7;
}
