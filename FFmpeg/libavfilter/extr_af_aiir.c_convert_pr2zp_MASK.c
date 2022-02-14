
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* priv; } ;
struct TYPE_6__ {TYPE_1__* iir; } ;
struct TYPE_5__ {int* nb_ab; double** ab; } ;
typedef TYPE_1__ IIRChannel ;
typedef TYPE_2__ AudioIIRContext ;
typedef TYPE_3__ AVFilterContext ;


 double FUNC_0 (double) ;
 double FUNC_1 (double) ;

__attribute__((used)) static void FUNC_2(AVFilterContext *VAR_0, int VAR_1)
{
    AudioIIRContext *VAR_2 = VAR_0->priv;
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
        IIRChannel *VAR_4 = &VAR_2->iir[VAR_3];
        int VAR_5;

        for (VAR_5 = 0; VAR_5 < VAR_4->nb_ab[0]; VAR_5++) {
            double VAR_6 = VAR_4->ab[0][2*VAR_5];
            double VAR_7 = VAR_4->ab[0][2*VAR_5+1];

            VAR_4->ab[0][2*VAR_5] = VAR_6 * FUNC_0(VAR_7);
            VAR_4->ab[0][2*VAR_5+1] = VAR_6 * FUNC_1(VAR_7);
        }

        for (VAR_5 = 0; VAR_5 < VAR_4->nb_ab[1]; VAR_5++) {
            double VAR_8 = VAR_4->ab[1][2*VAR_5];
            double VAR_9 = VAR_4->ab[1][2*VAR_5+1];

            VAR_4->ab[1][2*VAR_5] = VAR_8 * FUNC_0(VAR_9);
            VAR_4->ab[1][2*VAR_5+1] = VAR_8 * FUNC_1(VAR_9);
        }
    }
}
