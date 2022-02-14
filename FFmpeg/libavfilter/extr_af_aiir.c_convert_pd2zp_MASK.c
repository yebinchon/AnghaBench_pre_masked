
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


 int VAR_0 ;
 double FUNC_0 (double) ;
 double FUNC_1 (double) ;

__attribute__((used)) static void FUNC_2(AVFilterContext *VAR_1, int VAR_2)
{
    AudioIIRContext *VAR_3 = VAR_1->priv;
    int VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
        IIRChannel *VAR_5 = &VAR_3->iir[VAR_4];
        int VAR_6;

        for (VAR_6 = 0; VAR_6 < VAR_5->nb_ab[0]; VAR_6++) {
            double VAR_7 = VAR_5->ab[0][2*VAR_6];
            double VAR_8 = VAR_0*VAR_5->ab[0][2*VAR_6+1]/180.;

            VAR_5->ab[0][2*VAR_6] = VAR_7 * FUNC_0(VAR_8);
            VAR_5->ab[0][2*VAR_6+1] = VAR_7 * FUNC_1(VAR_8);
        }

        for (VAR_6 = 0; VAR_6 < VAR_5->nb_ab[1]; VAR_6++) {
            double VAR_9 = VAR_5->ab[1][2*VAR_6];
            double VAR_10 = VAR_0*VAR_5->ab[1][2*VAR_6+1]/180.;

            VAR_5->ab[1][2*VAR_6] = VAR_9 * FUNC_0(VAR_10);
            VAR_5->ab[1][2*VAR_6+1] = VAR_9 * FUNC_1(VAR_10);
        }
    }
}
